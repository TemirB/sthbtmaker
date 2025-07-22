import glob
import os
import subprocess
from multiprocessing import cpu_count, Pool

# --- Настройки ---
INPUT_DIR = "/media/ubuntu/LHEP_2TB/mcDstfiles"
PATTERN = "oscarDst_*.mcDst.root"
RESULT_DIR = "result"
LIST_DIR = "lists"
LOG_DIR = "logs"
STHBTMAKER = "./build/hbt_auau_simu"  # путь относительно запуска скрипта
MERGED_OUTPUT = "merged_output.root"

os.makedirs(RESULT_DIR, exist_ok=True)
os.makedirs(LIST_DIR, exist_ok=True)
os.makedirs(LOG_DIR, exist_ok=True)

# # --- 1. Собираем все файлы ---
# file_list = sorted(glob.glob(os.path.join(INPUT_DIR, PATTERN)))
# if not file_list:
#     print(f"Нет файлов по маске {PATTERN} в {INPUT_DIR}")
#     exit(1)

# --- 1. Собираем все файлы и берем только половину ---
file_list = sorted(glob.glob(os.path.join(INPUT_DIR, PATTERN)))
if not file_list:
    print(f"Нет файлов по маске {PATTERN} в {INPUT_DIR}")
    exit(1)
file_list = file_list[:len(file_list)//2]  # ВЗЯТЬ ПЕРВУЮ ПОЛОВИНУ


# --- 2. Разбиваем по ядрам ---
num_cores = cpu_count()
chunks = [[] for _ in range(num_cores)]
for idx, fname in enumerate(file_list):
    chunks[idx % num_cores].append(fname)

list_files = []
for i, chunk in enumerate(chunks):
    list_name = os.path.join(LIST_DIR, f"runlist_{i:02d}.list")
    with open(list_name, "w") as f:
        f.write("\n".join(chunk))
    list_files.append(list_name)

# --- 3. Функция для запуска одного процесса ---
def process_task(args):
    idx, list_file = args
    log_file = os.path.join(LOG_DIR, f"log_{idx:02d}.log")
    output_file = os.path.join(RESULT_DIR, f"output_{idx:02d}.root")
    with open(log_file, "w") as log:
        cmd = [STHBTMAKER, list_file, output_file, "false"]
        print(f"Стартую {' '.join(cmd)}")
        try:
            subprocess.run(cmd, stdout=log, stderr=subprocess.STDOUT, check=True)
        except subprocess.CalledProcessError as e:
            log.write(f"\nОшибка выполнения: {e}\n")
    return output_file

# --- 4. Запускаем параллельно ---
with Pool(num_cores) as pool:
    results = pool.map(process_task, enumerate(list_files))

# --- 5. Склеиваем итог с помощью hadd ---
# Оставляем только существующие .root (на случай ошибок)
results = [r for r in results if os.path.isfile(r)]
if results:
    cmd = ["hadd", "-f", MERGED_OUTPUT] + results
    print(" ".join(cmd))
    subprocess.run(cmd, check=False)
    print(f"Слияние завершено: {MERGED_OUTPUT}")
else:
    print("Нет файлов для слияния!")

