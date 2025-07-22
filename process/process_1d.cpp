#include <TFile.h>
#include <TH1D.h>
#include <TCanvas.h>
#include <TLegend.h>
#include <TMultiGraph.h>
#include <TGraphErrors.h>
#include <TF1.h>
#include <TPaveText.h>
#include <TSystem.h>
#include <TStyle.h>
#include <iostream>
#include <array>
#include <string>
#include <vector>

// Функция для гауссового фитирования корреляционной функции (1 + lambda * exp(-q^2 * R^2 / (ħc)^2))
Double_t gaussian(Double_t *x, Double_t *par) {
    Double_t arg = -1 * (x[0] * par[1] / 0.197) * (x[0] * par[1] / 0.197);
    Double_t fitval = 1 + par[0] * TMath::Exp(arg);
    return fitval;
}

// Вспомогательная функция оформления графика и добавления его в мультиграф и легенду
void make_style(TGraphErrors* graph, TMultiGraph* multigraph, TLegend* legend,
                int m_style, double m_size, int m_color, int l_color, std::string title) {
    graph->SetMarkerStyle(m_style);
    graph->SetMarkerSize(m_size);
    graph->SetMarkerColor(m_color);
    graph->SetLineColor(l_color);
    graph->SetTitle(title.c_str());
    graph->GetXaxis()->SetTitleSize(0.05);
    graph->GetYaxis()->SetTitleSize(0.05);
    legend->AddEntry(graph, title.c_str(), "lp");
    multigraph->Add(graph, "lp");
}

// Основная функция обработки 1D-гистограмм
void process_1d_histograms(const char* fileName) {
    TFile* inputFile = TFile::Open(fileName, "READ");
    if (!inputFile || inputFile->IsZombie()) {
        std::cerr << "Error opening file " << fileName << std::endl;
        return;
    }

    const std::array<std::string, 4> centralityNames = {"0-10", "10-30", "30-50", "50-80"};
    const std::array<std::string, 4> ktNames         = {"0.15-0.25", "0.25-0.35", "0.35-0.45", "0.45-0.60"};
    const std::array<double, 5>      ktvalues        = {0.15, 0.25, 0.35, 0.45, 0.60};
    const std::array<int, 4>         colors          = {kRed, kBlue, kMagenta, kGreen};
    const std::array<std::string, 2> chargeNames     = {"pos", "neg"};

    // Холсты и легенды для каждого заряда (0=pos, 1=neg)
    TCanvas* c_all_1d_CF[2];
    TCanvas* c_Rinv_vs_kt[2];
    TCanvas* c_lambda_vs_kt[2];
    TCanvas* c_1d_CF_4_center[2];
    TCanvas* c_1d_CF_at_min[2]; // Теперь массив на оба заряда!
    TLegend* l_Rinv[2];
    TLegend* l_lambda[2];
    TLegend* l_CF_4_center[2];
    TMultiGraph* mg_Rinv[2];
    TMultiGraph* mg_lambda[2];

    for (int k = 0; k < 2; ++k) {
        c_all_1d_CF[k]       = new TCanvas(("c_all_1d_CF_" + chargeNames[k]).c_str(), ("All 1D CFs " + chargeNames[k]).c_str(), 900, 700);
        c_all_1d_CF[k]->Divide(4, 4);
        c_Rinv_vs_kt[k]      = new TCanvas(("c_Rinv_vs_kt_" + chargeNames[k]).c_str(), ("Rinv vs kt " + chargeNames[k]).c_str(), 900, 700);
        c_lambda_vs_kt[k]    = new TCanvas(("c_lambda_vs_kt_" + chargeNames[k]).c_str(), ("lambda vs kt " + chargeNames[k]).c_str(), 900, 700);
        c_1d_CF_4_center[k]  = new TCanvas(("c_1d_CF_4_center_" + chargeNames[k]).c_str(), ("CF_{1d} 4 center " + chargeNames[k]).c_str(), 900, 700);
        c_1d_CF_at_min[k]    = new TCanvas(("c_1d_CF_at_min_" + chargeNames[k]).c_str(), ("CF at min kt/centr " + chargeNames[k]).c_str(), 1200, 400);
        c_1d_CF_at_min[k]->Divide(3, 2); // три пада: A, A_wei, CF
        l_Rinv[k]            = new TLegend(0.5, 0.7, 0.9, 0.9);
        l_lambda[k]          = new TLegend(0.5, 0.7, 0.9, 0.9);
        l_CF_4_center[k]     = new TLegend(0.5, 0.7, 0.9, 0.9);
        mg_Rinv[k]           = new TMultiGraph();
        mg_lambda[k]         = new TMultiGraph();
    }

    // Функция для фитирования 1D корреляционной функции (гауссовская параметризация)
    TF1* fit = new TF1("fit", gaussian, 0.0, 0.05, 2);
    fit->SetParameter(0, 0.5);  fit->SetParLimits(0, 0.0, 1.0);
    fit->SetParameter(1, 4.5);  fit->SetParLimits(1, 0.0, 10.0);

    std::vector<TH1D*> histCFList;

    // Цикл по зарядам
    for (unsigned int k = 0; k < 2; ++k) {
        // Цикл по центральностям
        for (unsigned int i = 0; i < centralityNames.size(); ++i) {
            // Временные графики для данного центральности и заряда
            TGraphErrors* g_tmp_Rinv   = new TGraphErrors();
            TGraphErrors* g_tmp_lambda = new TGraphErrors();

            // Цикл по диапазонам k_t
            for (unsigned int j = 0; j < ktNames.size(); ++j) {
                // Формируем базовую часть имени гистограммы (зависит от структуры вашего файла!)
                std::string suffix = std::to_string(k) +"_0_" + std::to_string(i) + "_num_";
                // Получаем гистограммы
                TH1D* h_A    = (TH1D*) inputFile->Get(("qinv_" + suffix + std::to_string(j)).c_str());
                TH1D* h_A_wei= (TH1D*) inputFile->Get(("qinv_" + suffix + "wei_" + std::to_string(j)).c_str());

                if (!h_A || !h_A_wei) {
                    std::cerr << "Warning: input histograms for k=" << k << ", i=" << i << ", j=" << j << " not found!" << std::endl;
                    continue;
                }

                // Корреляционная функция CF = A_wei / A
                TH1D* hist_CF = (TH1D*) h_A_wei->Clone(("CF(q_inv)_" + suffix).c_str());
                hist_CF->Reset();
                hist_CF->Divide(h_A_wei, h_A);
                hist_CF->SetDirectory(nullptr);
                histCFList.push_back(hist_CF);

                // Размещаем результат на соответствующем паде
                c_all_1d_CF[k]->cd(4 * i + j + 1);

                // Оформление CF
                hist_CF->SetTitle(("CF(q_{inv}) " + centralityNames[i] + "%, " + ktNames[j] + " GeV/c").c_str());
                hist_CF->GetXaxis()->SetTitle("q_{inv} [GeV/c]");
                hist_CF->GetYaxis()->SetTitle("CF");
                hist_CF->GetXaxis()->SetRangeUser(0.0, 0.3);
                hist_CF->GetYaxis()->SetRangeUser(0.8, 2.0);
                hist_CF->SetMarkerColor(colors[i]);
                hist_CF->SetLineColor(colors[i]);
                hist_CF->SetMarkerStyle(20 + j);
                hist_CF->SetMarkerSize(0.8);
                hist_CF->Draw("P");

                // k_t среднее и погрешность
                double xval = (ktvalues[j+1] + ktvalues[j]) / 2.0;
                double xerr = ktvalues[j+1] - xval;

                // Фитирование
                hist_CF->Fit(fit, "RM");

                // Сохраняем результаты фитирования
                g_tmp_Rinv->SetPoint(j, xval, fit->GetParameter(1));
                g_tmp_Rinv->SetPointError(j, xerr, fit->GetParError(1));
                g_tmp_lambda->SetPoint(j, xval, fit->GetParameter(0));
                g_tmp_lambda->SetPointError(j, xerr, fit->GetParError(0));

                // Для центральности 0: рисуем на "4 center" и в легенду
                if (i == 0) {
                    c_1d_CF_4_center[k]->cd();
                    hist_CF->Draw("P SAME");
                    l_CF_4_center[k]->AddEntry(hist_CF, ("CF at k_{t}" + ktNames[j] + "GeV/c").c_str(), "lp");
                }

                // min-case (0-10%, 0.15-0.25) теперь для обоих зарядов!
                if (i == 0 && j == 0) {
                    // A
                    TH1D* h_A_file = (TH1D*)inputFile->Get(("qinv_" + suffix + std::to_string(j)).c_str());
                    if (h_A_file) {
                        TH1D* h_A_min_kt_center = new TH1D(*h_A_file);
                        h_A_min_kt_center->SetDirectory(nullptr);
                        h_A_min_kt_center->SetTitle(("A(q_{inv})_" + suffix).c_str());
                        c_1d_CF_at_min[k]->cd(1); h_A_min_kt_center->Draw("P");
                    }
                    // A_wei
                    TH1D* h_A_wei_file = (TH1D*)inputFile->Get(("qinv_" + suffix + "wei_" + std::to_string(j)).c_str());
                    if (h_A_wei_file) {
                        TH1D* h_A_wei_min_kt_center = new TH1D(*h_A_wei_file);
                        h_A_wei_min_kt_center->SetDirectory(nullptr);
                        h_A_wei_min_kt_center->SetTitle(("A_{wei}(q_{inv})_" + suffix).c_str());
                        c_1d_CF_at_min[k]->cd(2); h_A_wei_min_kt_center->Draw("P");
                    }
                    // CF
                    if (hist_CF) {
                        TH1D* h_C_wei_min_kt_center = new TH1D(*hist_CF);
                        h_C_wei_min_kt_center->SetDirectory(nullptr);
                        h_C_wei_min_kt_center->SetName("h_C_wei");
                        c_1d_CF_at_min[k]->cd(3); h_C_wei_min_kt_center->Draw("P");
                    }
                }
            }
            // Добавляем графики в мультиграф и легенду
            std::string suffix_title = centralityNames[i] + "% " + chargeNames[k];
            make_style(g_tmp_Rinv,   mg_Rinv[k],   l_Rinv[k],   21, 1.0, colors[i], colors[i], "R_{inv} " + suffix_title);
            make_style(g_tmp_lambda, mg_lambda[k], l_lambda[k], 20, 1.0, colors[i], colors[i], "#lambda " + suffix_title);
        }
    }

    // Устанавливаем заголовки для мультиграфиков
    for (int k = 0; k < 2; ++k) {
        mg_Rinv[k]->SetTitle("R_{inv}(k_{t});k_{t} [GeV/c]; R_{inv} [fm]");
        mg_lambda[k]->SetTitle("#lambda(k_{t});k_{t} [GeV/c]; #lambda");
    }

    // Рисуем мультиграфики и легенды
    for (int k = 0; k < 2; ++k) {
        c_Rinv_vs_kt[k]->cd();     mg_Rinv[k]->Draw("ALP");     l_Rinv[k]->Draw("SAME");
        c_lambda_vs_kt[k]->cd();   mg_lambda[k]->Draw("ALP");   l_lambda[k]->Draw("SAME");
        c_1d_CF_4_center[k]->cd(); l_CF_4_center[k]->Draw("SAME");
    }

    // Сохраняем все холсты как изображения (pdf) в папку output_histograms_1d
    gSystem->Exec("mkdir -p output_histograms_1d");
    for (int k = 0; k < 2; ++k) {
        c_all_1d_CF[k]->SaveAs(("output_histograms_1d/c_all_1d_CF_" + chargeNames[k] + ".pdf").c_str());
        c_Rinv_vs_kt[k]->SaveAs(("output_histograms_1d/c_Rinv_vs_kt_" + chargeNames[k] + ".pdf").c_str());
        c_lambda_vs_kt[k]->SaveAs(("output_histograms_1d/c_lambda_vs_kt_" + chargeNames[k] + ".pdf").c_str());
        c_1d_CF_4_center[k]->SaveAs(("output_histograms_1d/c_1d_CF_4_center_" + chargeNames[k] + ".pdf").c_str());
        c_1d_CF_at_min[k]->SaveAs(("output_histograms_1d/c_1d_CF_at_min_" + chargeNames[k] + ".pdf").c_str());
    }

    // Закрываем входной файл с гистограммами
    inputFile->Close();

    // Сохраняем все холсты в ROOT-файл
    TFile* outputFile1D = new TFile("1d_CF_pos_and_neg.root", "RECREATE");
    if (!outputFile1D || outputFile1D->IsZombie()) {
        std::cerr << "Error creating output file for 1D histograms!" << std::endl;
    } else {
        for (int k = 0; k < 2; ++k) {
            c_all_1d_CF[k]->Write();
            c_Rinv_vs_kt[k]->Write();
            c_lambda_vs_kt[k]->Write();
            c_1d_CF_4_center[k]->Write();
            c_1d_CF_at_min[k]->Write();
        }
    }
    outputFile1D->Close();

    // --- Секция освобождения памяти (удаление временных объектов) ---

    // 1. Удаляем временные гистограммы корреляционных функций
    for (auto* h : histCFList) delete h;
    histCFList.clear();

    // 2. Удаляем временные холсты
    for (int k = 0; k < 2; ++k) {
        delete c_all_1d_CF[k];
        delete c_Rinv_vs_kt[k];
        delete c_lambda_vs_kt[k];
        delete c_1d_CF_4_center[k];
        delete c_1d_CF_at_min[k];
    }

    // 3. Удаляем временные мультиграфы
    for (int k = 0; k < 2; ++k) {
        delete mg_Rinv[k];
        delete mg_lambda[k];
    }

    // 4. Удаляем временные легенды
    for (int k = 0; k < 2; ++k) {
        delete l_Rinv[k];
        delete l_lambda[k];
        delete l_CF_4_center[k];
    }

    // 5. Удаляем функцию для фитирования
    delete fit;

}
