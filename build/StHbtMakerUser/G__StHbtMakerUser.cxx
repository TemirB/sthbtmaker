// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__StHbtMakerUser
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/fxtEventCutMonitor.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/fxtPairCutMonitor.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/fxtTrackCutMonitor.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtBasicEventCut.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtBasicPairCut.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtBasicTrackCut.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtBPLCMS3DCorrFctnKt.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtCorrFctn3DLCMSSym.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtCoulomb.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtDeltaEtaDeltaPhiStarMinKt.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtDummyTrackCut.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtFemtoDstReader.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtMcDstReader.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtModelBPLCMS3DCorrFctnKt.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtModelQinvCorrFctn.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtModelQinvCorrFctnKt.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtModelSpectraAnalysis.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtModelVertexImpactAnalysis.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtPicoDstReader.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtQinvCorrFctnKt.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtReactionPlaneAnalysis.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtSmearPair.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtVertexAnalysis.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtVertexMultAnalysis.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *fxtEventCutMonitor_Dictionary();
   static void fxtEventCutMonitor_TClassManip(TClass*);
   static void *new_fxtEventCutMonitor(void *p = nullptr);
   static void *newArray_fxtEventCutMonitor(Long_t size, void *p);
   static void delete_fxtEventCutMonitor(void *p);
   static void deleteArray_fxtEventCutMonitor(void *p);
   static void destruct_fxtEventCutMonitor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::fxtEventCutMonitor*)
   {
      ::fxtEventCutMonitor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::fxtEventCutMonitor));
      static ::ROOT::TGenericClassInfo 
         instance("fxtEventCutMonitor", "fxtEventCutMonitor.h", 24,
                  typeid(::fxtEventCutMonitor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &fxtEventCutMonitor_Dictionary, isa_proxy, 4,
                  sizeof(::fxtEventCutMonitor) );
      instance.SetNew(&new_fxtEventCutMonitor);
      instance.SetNewArray(&newArray_fxtEventCutMonitor);
      instance.SetDelete(&delete_fxtEventCutMonitor);
      instance.SetDeleteArray(&deleteArray_fxtEventCutMonitor);
      instance.SetDestructor(&destruct_fxtEventCutMonitor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::fxtEventCutMonitor*)
   {
      return GenerateInitInstanceLocal(static_cast<::fxtEventCutMonitor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::fxtEventCutMonitor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *fxtEventCutMonitor_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::fxtEventCutMonitor*>(nullptr))->GetClass();
      fxtEventCutMonitor_TClassManip(theClass);
   return theClass;
   }

   static void fxtEventCutMonitor_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *fxtPairCutMonitor_Dictionary();
   static void fxtPairCutMonitor_TClassManip(TClass*);
   static void delete_fxtPairCutMonitor(void *p);
   static void deleteArray_fxtPairCutMonitor(void *p);
   static void destruct_fxtPairCutMonitor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::fxtPairCutMonitor*)
   {
      ::fxtPairCutMonitor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::fxtPairCutMonitor));
      static ::ROOT::TGenericClassInfo 
         instance("fxtPairCutMonitor", "fxtPairCutMonitor.h", 24,
                  typeid(::fxtPairCutMonitor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &fxtPairCutMonitor_Dictionary, isa_proxy, 4,
                  sizeof(::fxtPairCutMonitor) );
      instance.SetDelete(&delete_fxtPairCutMonitor);
      instance.SetDeleteArray(&deleteArray_fxtPairCutMonitor);
      instance.SetDestructor(&destruct_fxtPairCutMonitor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::fxtPairCutMonitor*)
   {
      return GenerateInitInstanceLocal(static_cast<::fxtPairCutMonitor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::fxtPairCutMonitor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *fxtPairCutMonitor_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::fxtPairCutMonitor*>(nullptr))->GetClass();
      fxtPairCutMonitor_TClassManip(theClass);
   return theClass;
   }

   static void fxtPairCutMonitor_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *fxtTrackCutMonitor_Dictionary();
   static void fxtTrackCutMonitor_TClassManip(TClass*);
   static void delete_fxtTrackCutMonitor(void *p);
   static void deleteArray_fxtTrackCutMonitor(void *p);
   static void destruct_fxtTrackCutMonitor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::fxtTrackCutMonitor*)
   {
      ::fxtTrackCutMonitor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::fxtTrackCutMonitor));
      static ::ROOT::TGenericClassInfo 
         instance("fxtTrackCutMonitor", "fxtTrackCutMonitor.h", 23,
                  typeid(::fxtTrackCutMonitor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &fxtTrackCutMonitor_Dictionary, isa_proxy, 4,
                  sizeof(::fxtTrackCutMonitor) );
      instance.SetDelete(&delete_fxtTrackCutMonitor);
      instance.SetDeleteArray(&deleteArray_fxtTrackCutMonitor);
      instance.SetDestructor(&destruct_fxtTrackCutMonitor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::fxtTrackCutMonitor*)
   {
      return GenerateInitInstanceLocal(static_cast<::fxtTrackCutMonitor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::fxtTrackCutMonitor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *fxtTrackCutMonitor_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::fxtTrackCutMonitor*>(nullptr))->GetClass();
      fxtTrackCutMonitor_TClassManip(theClass);
   return theClass;
   }

   static void fxtTrackCutMonitor_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtBasicEventCut_Dictionary();
   static void StHbtBasicEventCut_TClassManip(TClass*);
   static void *new_StHbtBasicEventCut(void *p = nullptr);
   static void *newArray_StHbtBasicEventCut(Long_t size, void *p);
   static void delete_StHbtBasicEventCut(void *p);
   static void deleteArray_StHbtBasicEventCut(void *p);
   static void destruct_StHbtBasicEventCut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtBasicEventCut*)
   {
      ::StHbtBasicEventCut *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtBasicEventCut));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtBasicEventCut", "StHbtBasicEventCut.h", 26,
                  typeid(::StHbtBasicEventCut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtBasicEventCut_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtBasicEventCut) );
      instance.SetNew(&new_StHbtBasicEventCut);
      instance.SetNewArray(&newArray_StHbtBasicEventCut);
      instance.SetDelete(&delete_StHbtBasicEventCut);
      instance.SetDeleteArray(&deleteArray_StHbtBasicEventCut);
      instance.SetDestructor(&destruct_StHbtBasicEventCut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtBasicEventCut*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtBasicEventCut*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtBasicEventCut*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtBasicEventCut_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtBasicEventCut*>(nullptr))->GetClass();
      StHbtBasicEventCut_TClassManip(theClass);
   return theClass;
   }

   static void StHbtBasicEventCut_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtBasicPairCut_Dictionary();
   static void StHbtBasicPairCut_TClassManip(TClass*);
   static void *new_StHbtBasicPairCut(void *p = nullptr);
   static void *newArray_StHbtBasicPairCut(Long_t size, void *p);
   static void delete_StHbtBasicPairCut(void *p);
   static void deleteArray_StHbtBasicPairCut(void *p);
   static void destruct_StHbtBasicPairCut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtBasicPairCut*)
   {
      ::StHbtBasicPairCut *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtBasicPairCut));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtBasicPairCut", "StHbtBasicPairCut.h", 32,
                  typeid(::StHbtBasicPairCut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtBasicPairCut_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtBasicPairCut) );
      instance.SetNew(&new_StHbtBasicPairCut);
      instance.SetNewArray(&newArray_StHbtBasicPairCut);
      instance.SetDelete(&delete_StHbtBasicPairCut);
      instance.SetDeleteArray(&deleteArray_StHbtBasicPairCut);
      instance.SetDestructor(&destruct_StHbtBasicPairCut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtBasicPairCut*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtBasicPairCut*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtBasicPairCut*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtBasicPairCut_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtBasicPairCut*>(nullptr))->GetClass();
      StHbtBasicPairCut_TClassManip(theClass);
   return theClass;
   }

   static void StHbtBasicPairCut_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtBasicTrackCut_Dictionary();
   static void StHbtBasicTrackCut_TClassManip(TClass*);
   static void *new_StHbtBasicTrackCut(void *p = nullptr);
   static void *newArray_StHbtBasicTrackCut(Long_t size, void *p);
   static void delete_StHbtBasicTrackCut(void *p);
   static void deleteArray_StHbtBasicTrackCut(void *p);
   static void destruct_StHbtBasicTrackCut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtBasicTrackCut*)
   {
      ::StHbtBasicTrackCut *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtBasicTrackCut));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtBasicTrackCut", "StHbtBasicTrackCut.h", 24,
                  typeid(::StHbtBasicTrackCut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtBasicTrackCut_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtBasicTrackCut) );
      instance.SetNew(&new_StHbtBasicTrackCut);
      instance.SetNewArray(&newArray_StHbtBasicTrackCut);
      instance.SetDelete(&delete_StHbtBasicTrackCut);
      instance.SetDeleteArray(&deleteArray_StHbtBasicTrackCut);
      instance.SetDestructor(&destruct_StHbtBasicTrackCut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtBasicTrackCut*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtBasicTrackCut*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtBasicTrackCut*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtBasicTrackCut_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtBasicTrackCut*>(nullptr))->GetClass();
      StHbtBasicTrackCut_TClassManip(theClass);
   return theClass;
   }

   static void StHbtBasicTrackCut_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtBPLCMS3DCorrFctnKt_Dictionary();
   static void StHbtBPLCMS3DCorrFctnKt_TClassManip(TClass*);
   static void *new_StHbtBPLCMS3DCorrFctnKt(void *p = nullptr);
   static void *newArray_StHbtBPLCMS3DCorrFctnKt(Long_t size, void *p);
   static void delete_StHbtBPLCMS3DCorrFctnKt(void *p);
   static void deleteArray_StHbtBPLCMS3DCorrFctnKt(void *p);
   static void destruct_StHbtBPLCMS3DCorrFctnKt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtBPLCMS3DCorrFctnKt*)
   {
      ::StHbtBPLCMS3DCorrFctnKt *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtBPLCMS3DCorrFctnKt));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtBPLCMS3DCorrFctnKt", "StHbtBPLCMS3DCorrFctnKt.h", 24,
                  typeid(::StHbtBPLCMS3DCorrFctnKt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtBPLCMS3DCorrFctnKt_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtBPLCMS3DCorrFctnKt) );
      instance.SetNew(&new_StHbtBPLCMS3DCorrFctnKt);
      instance.SetNewArray(&newArray_StHbtBPLCMS3DCorrFctnKt);
      instance.SetDelete(&delete_StHbtBPLCMS3DCorrFctnKt);
      instance.SetDeleteArray(&deleteArray_StHbtBPLCMS3DCorrFctnKt);
      instance.SetDestructor(&destruct_StHbtBPLCMS3DCorrFctnKt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtBPLCMS3DCorrFctnKt*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtBPLCMS3DCorrFctnKt*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtBPLCMS3DCorrFctnKt*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtBPLCMS3DCorrFctnKt_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtBPLCMS3DCorrFctnKt*>(nullptr))->GetClass();
      StHbtBPLCMS3DCorrFctnKt_TClassManip(theClass);
   return theClass;
   }

   static void StHbtBPLCMS3DCorrFctnKt_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtCorrFctn3DLCMSSym_Dictionary();
   static void StHbtCorrFctn3DLCMSSym_TClassManip(TClass*);
   static void delete_StHbtCorrFctn3DLCMSSym(void *p);
   static void deleteArray_StHbtCorrFctn3DLCMSSym(void *p);
   static void destruct_StHbtCorrFctn3DLCMSSym(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtCorrFctn3DLCMSSym*)
   {
      ::StHbtCorrFctn3DLCMSSym *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtCorrFctn3DLCMSSym));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtCorrFctn3DLCMSSym", "StHbtCorrFctn3DLCMSSym.h", 20,
                  typeid(::StHbtCorrFctn3DLCMSSym), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtCorrFctn3DLCMSSym_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtCorrFctn3DLCMSSym) );
      instance.SetDelete(&delete_StHbtCorrFctn3DLCMSSym);
      instance.SetDeleteArray(&deleteArray_StHbtCorrFctn3DLCMSSym);
      instance.SetDestructor(&destruct_StHbtCorrFctn3DLCMSSym);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtCorrFctn3DLCMSSym*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtCorrFctn3DLCMSSym*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtCorrFctn3DLCMSSym*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtCorrFctn3DLCMSSym_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtCorrFctn3DLCMSSym*>(nullptr))->GetClass();
      StHbtCorrFctn3DLCMSSym_TClassManip(theClass);
   return theClass;
   }

   static void StHbtCorrFctn3DLCMSSym_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtCoulomb_Dictionary();
   static void StHbtCoulomb_TClassManip(TClass*);
   static void *new_StHbtCoulomb(void *p = nullptr);
   static void *newArray_StHbtCoulomb(Long_t size, void *p);
   static void delete_StHbtCoulomb(void *p);
   static void deleteArray_StHbtCoulomb(void *p);
   static void destruct_StHbtCoulomb(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtCoulomb*)
   {
      ::StHbtCoulomb *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtCoulomb));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtCoulomb", "StHbtCoulomb.h", 22,
                  typeid(::StHbtCoulomb), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtCoulomb_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtCoulomb) );
      instance.SetNew(&new_StHbtCoulomb);
      instance.SetNewArray(&newArray_StHbtCoulomb);
      instance.SetDelete(&delete_StHbtCoulomb);
      instance.SetDeleteArray(&deleteArray_StHbtCoulomb);
      instance.SetDestructor(&destruct_StHbtCoulomb);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtCoulomb*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtCoulomb*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtCoulomb*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtCoulomb_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtCoulomb*>(nullptr))->GetClass();
      StHbtCoulomb_TClassManip(theClass);
   return theClass;
   }

   static void StHbtCoulomb_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtDeltaEtaDeltaPhiStarMinKt_Dictionary();
   static void StHbtDeltaEtaDeltaPhiStarMinKt_TClassManip(TClass*);
   static void *new_StHbtDeltaEtaDeltaPhiStarMinKt(void *p = nullptr);
   static void *newArray_StHbtDeltaEtaDeltaPhiStarMinKt(Long_t size, void *p);
   static void delete_StHbtDeltaEtaDeltaPhiStarMinKt(void *p);
   static void deleteArray_StHbtDeltaEtaDeltaPhiStarMinKt(void *p);
   static void destruct_StHbtDeltaEtaDeltaPhiStarMinKt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtDeltaEtaDeltaPhiStarMinKt*)
   {
      ::StHbtDeltaEtaDeltaPhiStarMinKt *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtDeltaEtaDeltaPhiStarMinKt));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtDeltaEtaDeltaPhiStarMinKt", "StHbtDeltaEtaDeltaPhiStarMinKt.h", 27,
                  typeid(::StHbtDeltaEtaDeltaPhiStarMinKt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtDeltaEtaDeltaPhiStarMinKt_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtDeltaEtaDeltaPhiStarMinKt) );
      instance.SetNew(&new_StHbtDeltaEtaDeltaPhiStarMinKt);
      instance.SetNewArray(&newArray_StHbtDeltaEtaDeltaPhiStarMinKt);
      instance.SetDelete(&delete_StHbtDeltaEtaDeltaPhiStarMinKt);
      instance.SetDeleteArray(&deleteArray_StHbtDeltaEtaDeltaPhiStarMinKt);
      instance.SetDestructor(&destruct_StHbtDeltaEtaDeltaPhiStarMinKt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtDeltaEtaDeltaPhiStarMinKt*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtDeltaEtaDeltaPhiStarMinKt*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtDeltaEtaDeltaPhiStarMinKt*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtDeltaEtaDeltaPhiStarMinKt_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtDeltaEtaDeltaPhiStarMinKt*>(nullptr))->GetClass();
      StHbtDeltaEtaDeltaPhiStarMinKt_TClassManip(theClass);
   return theClass;
   }

   static void StHbtDeltaEtaDeltaPhiStarMinKt_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtDummyTrackCut_Dictionary();
   static void StHbtDummyTrackCut_TClassManip(TClass*);
   static void *new_StHbtDummyTrackCut(void *p = nullptr);
   static void *newArray_StHbtDummyTrackCut(Long_t size, void *p);
   static void delete_StHbtDummyTrackCut(void *p);
   static void deleteArray_StHbtDummyTrackCut(void *p);
   static void destruct_StHbtDummyTrackCut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtDummyTrackCut*)
   {
      ::StHbtDummyTrackCut *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtDummyTrackCut));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtDummyTrackCut", "StHbtDummyTrackCut.h", 30,
                  typeid(::StHbtDummyTrackCut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtDummyTrackCut_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtDummyTrackCut) );
      instance.SetNew(&new_StHbtDummyTrackCut);
      instance.SetNewArray(&newArray_StHbtDummyTrackCut);
      instance.SetDelete(&delete_StHbtDummyTrackCut);
      instance.SetDeleteArray(&deleteArray_StHbtDummyTrackCut);
      instance.SetDestructor(&destruct_StHbtDummyTrackCut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtDummyTrackCut*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtDummyTrackCut*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtDummyTrackCut*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtDummyTrackCut_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtDummyTrackCut*>(nullptr))->GetClass();
      StHbtDummyTrackCut_TClassManip(theClass);
   return theClass;
   }

   static void StHbtDummyTrackCut_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtFemtoDstReader_Dictionary();
   static void StHbtFemtoDstReader_TClassManip(TClass*);
   static void *new_StHbtFemtoDstReader(void *p = nullptr);
   static void *newArray_StHbtFemtoDstReader(Long_t size, void *p);
   static void delete_StHbtFemtoDstReader(void *p);
   static void deleteArray_StHbtFemtoDstReader(void *p);
   static void destruct_StHbtFemtoDstReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtFemtoDstReader*)
   {
      ::StHbtFemtoDstReader *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtFemtoDstReader));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtFemtoDstReader", "StHbtFemtoDstReader.h", 31,
                  typeid(::StHbtFemtoDstReader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtFemtoDstReader_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtFemtoDstReader) );
      instance.SetNew(&new_StHbtFemtoDstReader);
      instance.SetNewArray(&newArray_StHbtFemtoDstReader);
      instance.SetDelete(&delete_StHbtFemtoDstReader);
      instance.SetDeleteArray(&deleteArray_StHbtFemtoDstReader);
      instance.SetDestructor(&destruct_StHbtFemtoDstReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtFemtoDstReader*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtFemtoDstReader*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtFemtoDstReader*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtFemtoDstReader_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtFemtoDstReader*>(nullptr))->GetClass();
      StHbtFemtoDstReader_TClassManip(theClass);
   return theClass;
   }

   static void StHbtFemtoDstReader_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtMcDstReader_Dictionary();
   static void StHbtMcDstReader_TClassManip(TClass*);
   static void *new_StHbtMcDstReader(void *p = nullptr);
   static void *newArray_StHbtMcDstReader(Long_t size, void *p);
   static void delete_StHbtMcDstReader(void *p);
   static void deleteArray_StHbtMcDstReader(void *p);
   static void destruct_StHbtMcDstReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtMcDstReader*)
   {
      ::StHbtMcDstReader *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtMcDstReader));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtMcDstReader", "StHbtMcDstReader.h", 40,
                  typeid(::StHbtMcDstReader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtMcDstReader_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtMcDstReader) );
      instance.SetNew(&new_StHbtMcDstReader);
      instance.SetNewArray(&newArray_StHbtMcDstReader);
      instance.SetDelete(&delete_StHbtMcDstReader);
      instance.SetDeleteArray(&deleteArray_StHbtMcDstReader);
      instance.SetDestructor(&destruct_StHbtMcDstReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtMcDstReader*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtMcDstReader*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtMcDstReader*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtMcDstReader_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtMcDstReader*>(nullptr))->GetClass();
      StHbtMcDstReader_TClassManip(theClass);
   return theClass;
   }

   static void StHbtMcDstReader_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtModelBPLCMS3DCorrFctnKt_Dictionary();
   static void StHbtModelBPLCMS3DCorrFctnKt_TClassManip(TClass*);
   static void *new_StHbtModelBPLCMS3DCorrFctnKt(void *p = nullptr);
   static void *newArray_StHbtModelBPLCMS3DCorrFctnKt(Long_t size, void *p);
   static void delete_StHbtModelBPLCMS3DCorrFctnKt(void *p);
   static void deleteArray_StHbtModelBPLCMS3DCorrFctnKt(void *p);
   static void destruct_StHbtModelBPLCMS3DCorrFctnKt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtModelBPLCMS3DCorrFctnKt*)
   {
      ::StHbtModelBPLCMS3DCorrFctnKt *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtModelBPLCMS3DCorrFctnKt));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtModelBPLCMS3DCorrFctnKt", "StHbtModelBPLCMS3DCorrFctnKt.h", 28,
                  typeid(::StHbtModelBPLCMS3DCorrFctnKt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtModelBPLCMS3DCorrFctnKt_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtModelBPLCMS3DCorrFctnKt) );
      instance.SetNew(&new_StHbtModelBPLCMS3DCorrFctnKt);
      instance.SetNewArray(&newArray_StHbtModelBPLCMS3DCorrFctnKt);
      instance.SetDelete(&delete_StHbtModelBPLCMS3DCorrFctnKt);
      instance.SetDeleteArray(&deleteArray_StHbtModelBPLCMS3DCorrFctnKt);
      instance.SetDestructor(&destruct_StHbtModelBPLCMS3DCorrFctnKt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtModelBPLCMS3DCorrFctnKt*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtModelBPLCMS3DCorrFctnKt*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtModelBPLCMS3DCorrFctnKt*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtModelBPLCMS3DCorrFctnKt_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtModelBPLCMS3DCorrFctnKt*>(nullptr))->GetClass();
      StHbtModelBPLCMS3DCorrFctnKt_TClassManip(theClass);
   return theClass;
   }

   static void StHbtModelBPLCMS3DCorrFctnKt_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtModelQinvCorrFctn_Dictionary();
   static void StHbtModelQinvCorrFctn_TClassManip(TClass*);
   static void *new_StHbtModelQinvCorrFctn(void *p = nullptr);
   static void *newArray_StHbtModelQinvCorrFctn(Long_t size, void *p);
   static void delete_StHbtModelQinvCorrFctn(void *p);
   static void deleteArray_StHbtModelQinvCorrFctn(void *p);
   static void destruct_StHbtModelQinvCorrFctn(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtModelQinvCorrFctn*)
   {
      ::StHbtModelQinvCorrFctn *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtModelQinvCorrFctn));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtModelQinvCorrFctn", "StHbtModelQinvCorrFctn.h", 22,
                  typeid(::StHbtModelQinvCorrFctn), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtModelQinvCorrFctn_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtModelQinvCorrFctn) );
      instance.SetNew(&new_StHbtModelQinvCorrFctn);
      instance.SetNewArray(&newArray_StHbtModelQinvCorrFctn);
      instance.SetDelete(&delete_StHbtModelQinvCorrFctn);
      instance.SetDeleteArray(&deleteArray_StHbtModelQinvCorrFctn);
      instance.SetDestructor(&destruct_StHbtModelQinvCorrFctn);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtModelQinvCorrFctn*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtModelQinvCorrFctn*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtModelQinvCorrFctn*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtModelQinvCorrFctn_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtModelQinvCorrFctn*>(nullptr))->GetClass();
      StHbtModelQinvCorrFctn_TClassManip(theClass);
   return theClass;
   }

   static void StHbtModelQinvCorrFctn_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtModelQinvCorrFctnKt_Dictionary();
   static void StHbtModelQinvCorrFctnKt_TClassManip(TClass*);
   static void *new_StHbtModelQinvCorrFctnKt(void *p = nullptr);
   static void *newArray_StHbtModelQinvCorrFctnKt(Long_t size, void *p);
   static void delete_StHbtModelQinvCorrFctnKt(void *p);
   static void deleteArray_StHbtModelQinvCorrFctnKt(void *p);
   static void destruct_StHbtModelQinvCorrFctnKt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtModelQinvCorrFctnKt*)
   {
      ::StHbtModelQinvCorrFctnKt *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtModelQinvCorrFctnKt));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtModelQinvCorrFctnKt", "StHbtModelQinvCorrFctnKt.h", 25,
                  typeid(::StHbtModelQinvCorrFctnKt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtModelQinvCorrFctnKt_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtModelQinvCorrFctnKt) );
      instance.SetNew(&new_StHbtModelQinvCorrFctnKt);
      instance.SetNewArray(&newArray_StHbtModelQinvCorrFctnKt);
      instance.SetDelete(&delete_StHbtModelQinvCorrFctnKt);
      instance.SetDeleteArray(&deleteArray_StHbtModelQinvCorrFctnKt);
      instance.SetDestructor(&destruct_StHbtModelQinvCorrFctnKt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtModelQinvCorrFctnKt*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtModelQinvCorrFctnKt*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtModelQinvCorrFctnKt*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtModelQinvCorrFctnKt_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtModelQinvCorrFctnKt*>(nullptr))->GetClass();
      StHbtModelQinvCorrFctnKt_TClassManip(theClass);
   return theClass;
   }

   static void StHbtModelQinvCorrFctnKt_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtModelSpectraAnalysis_Dictionary();
   static void StHbtModelSpectraAnalysis_TClassManip(TClass*);
   static void *new_StHbtModelSpectraAnalysis(void *p = nullptr);
   static void *newArray_StHbtModelSpectraAnalysis(Long_t size, void *p);
   static void delete_StHbtModelSpectraAnalysis(void *p);
   static void deleteArray_StHbtModelSpectraAnalysis(void *p);
   static void destruct_StHbtModelSpectraAnalysis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtModelSpectraAnalysis*)
   {
      ::StHbtModelSpectraAnalysis *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtModelSpectraAnalysis));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtModelSpectraAnalysis", "StHbtModelSpectraAnalysis.h", 28,
                  typeid(::StHbtModelSpectraAnalysis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtModelSpectraAnalysis_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtModelSpectraAnalysis) );
      instance.SetNew(&new_StHbtModelSpectraAnalysis);
      instance.SetNewArray(&newArray_StHbtModelSpectraAnalysis);
      instance.SetDelete(&delete_StHbtModelSpectraAnalysis);
      instance.SetDeleteArray(&deleteArray_StHbtModelSpectraAnalysis);
      instance.SetDestructor(&destruct_StHbtModelSpectraAnalysis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtModelSpectraAnalysis*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtModelSpectraAnalysis*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtModelSpectraAnalysis*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtModelSpectraAnalysis_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtModelSpectraAnalysis*>(nullptr))->GetClass();
      StHbtModelSpectraAnalysis_TClassManip(theClass);
   return theClass;
   }

   static void StHbtModelSpectraAnalysis_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtPicoDstReader_Dictionary();
   static void StHbtPicoDstReader_TClassManip(TClass*);
   static void *new_StHbtPicoDstReader(void *p = nullptr);
   static void *newArray_StHbtPicoDstReader(Long_t size, void *p);
   static void delete_StHbtPicoDstReader(void *p);
   static void deleteArray_StHbtPicoDstReader(void *p);
   static void destruct_StHbtPicoDstReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtPicoDstReader*)
   {
      ::StHbtPicoDstReader *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtPicoDstReader));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtPicoDstReader", "StHbtPicoDstReader.h", 43,
                  typeid(::StHbtPicoDstReader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtPicoDstReader_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtPicoDstReader) );
      instance.SetNew(&new_StHbtPicoDstReader);
      instance.SetNewArray(&newArray_StHbtPicoDstReader);
      instance.SetDelete(&delete_StHbtPicoDstReader);
      instance.SetDeleteArray(&deleteArray_StHbtPicoDstReader);
      instance.SetDestructor(&destruct_StHbtPicoDstReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtPicoDstReader*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtPicoDstReader*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtPicoDstReader*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtPicoDstReader_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtPicoDstReader*>(nullptr))->GetClass();
      StHbtPicoDstReader_TClassManip(theClass);
   return theClass;
   }

   static void StHbtPicoDstReader_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtQinvCorrFctnKt_Dictionary();
   static void StHbtQinvCorrFctnKt_TClassManip(TClass*);
   static void *new_StHbtQinvCorrFctnKt(void *p = nullptr);
   static void *newArray_StHbtQinvCorrFctnKt(Long_t size, void *p);
   static void delete_StHbtQinvCorrFctnKt(void *p);
   static void deleteArray_StHbtQinvCorrFctnKt(void *p);
   static void destruct_StHbtQinvCorrFctnKt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtQinvCorrFctnKt*)
   {
      ::StHbtQinvCorrFctnKt *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtQinvCorrFctnKt));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtQinvCorrFctnKt", "StHbtQinvCorrFctnKt.h", 23,
                  typeid(::StHbtQinvCorrFctnKt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtQinvCorrFctnKt_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtQinvCorrFctnKt) );
      instance.SetNew(&new_StHbtQinvCorrFctnKt);
      instance.SetNewArray(&newArray_StHbtQinvCorrFctnKt);
      instance.SetDelete(&delete_StHbtQinvCorrFctnKt);
      instance.SetDeleteArray(&deleteArray_StHbtQinvCorrFctnKt);
      instance.SetDestructor(&destruct_StHbtQinvCorrFctnKt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtQinvCorrFctnKt*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtQinvCorrFctnKt*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtQinvCorrFctnKt*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtQinvCorrFctnKt_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtQinvCorrFctnKt*>(nullptr))->GetClass();
      StHbtQinvCorrFctnKt_TClassManip(theClass);
   return theClass;
   }

   static void StHbtQinvCorrFctnKt_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtReactionPlaneAnalysis_Dictionary();
   static void StHbtReactionPlaneAnalysis_TClassManip(TClass*);
   static void *new_StHbtReactionPlaneAnalysis(void *p = nullptr);
   static void *newArray_StHbtReactionPlaneAnalysis(Long_t size, void *p);
   static void delete_StHbtReactionPlaneAnalysis(void *p);
   static void deleteArray_StHbtReactionPlaneAnalysis(void *p);
   static void destruct_StHbtReactionPlaneAnalysis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtReactionPlaneAnalysis*)
   {
      ::StHbtReactionPlaneAnalysis *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtReactionPlaneAnalysis));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtReactionPlaneAnalysis", "StHbtReactionPlaneAnalysis.h", 22,
                  typeid(::StHbtReactionPlaneAnalysis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtReactionPlaneAnalysis_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtReactionPlaneAnalysis) );
      instance.SetNew(&new_StHbtReactionPlaneAnalysis);
      instance.SetNewArray(&newArray_StHbtReactionPlaneAnalysis);
      instance.SetDelete(&delete_StHbtReactionPlaneAnalysis);
      instance.SetDeleteArray(&deleteArray_StHbtReactionPlaneAnalysis);
      instance.SetDestructor(&destruct_StHbtReactionPlaneAnalysis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtReactionPlaneAnalysis*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtReactionPlaneAnalysis*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtReactionPlaneAnalysis*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtReactionPlaneAnalysis_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtReactionPlaneAnalysis*>(nullptr))->GetClass();
      StHbtReactionPlaneAnalysis_TClassManip(theClass);
   return theClass;
   }

   static void StHbtReactionPlaneAnalysis_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtSmearPair_Dictionary();
   static void StHbtSmearPair_TClassManip(TClass*);
   static void *new_StHbtSmearPair(void *p = nullptr);
   static void *newArray_StHbtSmearPair(Long_t size, void *p);
   static void delete_StHbtSmearPair(void *p);
   static void deleteArray_StHbtSmearPair(void *p);
   static void destruct_StHbtSmearPair(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtSmearPair*)
   {
      ::StHbtSmearPair *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtSmearPair));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtSmearPair", "StHbtSmearPair.h", 22,
                  typeid(::StHbtSmearPair), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtSmearPair_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtSmearPair) );
      instance.SetNew(&new_StHbtSmearPair);
      instance.SetNewArray(&newArray_StHbtSmearPair);
      instance.SetDelete(&delete_StHbtSmearPair);
      instance.SetDeleteArray(&deleteArray_StHbtSmearPair);
      instance.SetDestructor(&destruct_StHbtSmearPair);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtSmearPair*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtSmearPair*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtSmearPair*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtSmearPair_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtSmearPair*>(nullptr))->GetClass();
      StHbtSmearPair_TClassManip(theClass);
   return theClass;
   }

   static void StHbtSmearPair_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtVertexAnalysis_Dictionary();
   static void StHbtVertexAnalysis_TClassManip(TClass*);
   static void *new_StHbtVertexAnalysis(void *p = nullptr);
   static void *newArray_StHbtVertexAnalysis(Long_t size, void *p);
   static void delete_StHbtVertexAnalysis(void *p);
   static void deleteArray_StHbtVertexAnalysis(void *p);
   static void destruct_StHbtVertexAnalysis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtVertexAnalysis*)
   {
      ::StHbtVertexAnalysis *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtVertexAnalysis));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtVertexAnalysis", "StHbtVertexAnalysis.h", 16,
                  typeid(::StHbtVertexAnalysis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtVertexAnalysis_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtVertexAnalysis) );
      instance.SetNew(&new_StHbtVertexAnalysis);
      instance.SetNewArray(&newArray_StHbtVertexAnalysis);
      instance.SetDelete(&delete_StHbtVertexAnalysis);
      instance.SetDeleteArray(&deleteArray_StHbtVertexAnalysis);
      instance.SetDestructor(&destruct_StHbtVertexAnalysis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtVertexAnalysis*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtVertexAnalysis*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtVertexAnalysis*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtVertexAnalysis_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtVertexAnalysis*>(nullptr))->GetClass();
      StHbtVertexAnalysis_TClassManip(theClass);
   return theClass;
   }

   static void StHbtVertexAnalysis_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtVertexMultAnalysis_Dictionary();
   static void StHbtVertexMultAnalysis_TClassManip(TClass*);
   static void *new_StHbtVertexMultAnalysis(void *p = nullptr);
   static void *newArray_StHbtVertexMultAnalysis(Long_t size, void *p);
   static void delete_StHbtVertexMultAnalysis(void *p);
   static void deleteArray_StHbtVertexMultAnalysis(void *p);
   static void destruct_StHbtVertexMultAnalysis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtVertexMultAnalysis*)
   {
      ::StHbtVertexMultAnalysis *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtVertexMultAnalysis));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtVertexMultAnalysis", "StHbtVertexMultAnalysis.h", 25,
                  typeid(::StHbtVertexMultAnalysis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtVertexMultAnalysis_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtVertexMultAnalysis) );
      instance.SetNew(&new_StHbtVertexMultAnalysis);
      instance.SetNewArray(&newArray_StHbtVertexMultAnalysis);
      instance.SetDelete(&delete_StHbtVertexMultAnalysis);
      instance.SetDeleteArray(&deleteArray_StHbtVertexMultAnalysis);
      instance.SetDestructor(&destruct_StHbtVertexMultAnalysis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtVertexMultAnalysis*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtVertexMultAnalysis*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtVertexMultAnalysis*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtVertexMultAnalysis_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtVertexMultAnalysis*>(nullptr))->GetClass();
      StHbtVertexMultAnalysis_TClassManip(theClass);
   return theClass;
   }

   static void StHbtVertexMultAnalysis_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_fxtEventCutMonitor(void *p) {
      return  p ? new(p) ::fxtEventCutMonitor : new ::fxtEventCutMonitor;
   }
   static void *newArray_fxtEventCutMonitor(Long_t nElements, void *p) {
      return p ? new(p) ::fxtEventCutMonitor[nElements] : new ::fxtEventCutMonitor[nElements];
   }
   // Wrapper around operator delete
   static void delete_fxtEventCutMonitor(void *p) {
      delete (static_cast<::fxtEventCutMonitor*>(p));
   }
   static void deleteArray_fxtEventCutMonitor(void *p) {
      delete [] (static_cast<::fxtEventCutMonitor*>(p));
   }
   static void destruct_fxtEventCutMonitor(void *p) {
      typedef ::fxtEventCutMonitor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::fxtEventCutMonitor

namespace ROOT {
   // Wrapper around operator delete
   static void delete_fxtPairCutMonitor(void *p) {
      delete (static_cast<::fxtPairCutMonitor*>(p));
   }
   static void deleteArray_fxtPairCutMonitor(void *p) {
      delete [] (static_cast<::fxtPairCutMonitor*>(p));
   }
   static void destruct_fxtPairCutMonitor(void *p) {
      typedef ::fxtPairCutMonitor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::fxtPairCutMonitor

namespace ROOT {
   // Wrapper around operator delete
   static void delete_fxtTrackCutMonitor(void *p) {
      delete (static_cast<::fxtTrackCutMonitor*>(p));
   }
   static void deleteArray_fxtTrackCutMonitor(void *p) {
      delete [] (static_cast<::fxtTrackCutMonitor*>(p));
   }
   static void destruct_fxtTrackCutMonitor(void *p) {
      typedef ::fxtTrackCutMonitor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::fxtTrackCutMonitor

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtBasicEventCut(void *p) {
      return  p ? new(p) ::StHbtBasicEventCut : new ::StHbtBasicEventCut;
   }
   static void *newArray_StHbtBasicEventCut(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtBasicEventCut[nElements] : new ::StHbtBasicEventCut[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtBasicEventCut(void *p) {
      delete (static_cast<::StHbtBasicEventCut*>(p));
   }
   static void deleteArray_StHbtBasicEventCut(void *p) {
      delete [] (static_cast<::StHbtBasicEventCut*>(p));
   }
   static void destruct_StHbtBasicEventCut(void *p) {
      typedef ::StHbtBasicEventCut current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtBasicEventCut

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtBasicPairCut(void *p) {
      return  p ? new(p) ::StHbtBasicPairCut : new ::StHbtBasicPairCut;
   }
   static void *newArray_StHbtBasicPairCut(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtBasicPairCut[nElements] : new ::StHbtBasicPairCut[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtBasicPairCut(void *p) {
      delete (static_cast<::StHbtBasicPairCut*>(p));
   }
   static void deleteArray_StHbtBasicPairCut(void *p) {
      delete [] (static_cast<::StHbtBasicPairCut*>(p));
   }
   static void destruct_StHbtBasicPairCut(void *p) {
      typedef ::StHbtBasicPairCut current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtBasicPairCut

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtBasicTrackCut(void *p) {
      return  p ? new(p) ::StHbtBasicTrackCut : new ::StHbtBasicTrackCut;
   }
   static void *newArray_StHbtBasicTrackCut(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtBasicTrackCut[nElements] : new ::StHbtBasicTrackCut[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtBasicTrackCut(void *p) {
      delete (static_cast<::StHbtBasicTrackCut*>(p));
   }
   static void deleteArray_StHbtBasicTrackCut(void *p) {
      delete [] (static_cast<::StHbtBasicTrackCut*>(p));
   }
   static void destruct_StHbtBasicTrackCut(void *p) {
      typedef ::StHbtBasicTrackCut current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtBasicTrackCut

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtBPLCMS3DCorrFctnKt(void *p) {
      return  p ? new(p) ::StHbtBPLCMS3DCorrFctnKt : new ::StHbtBPLCMS3DCorrFctnKt;
   }
   static void *newArray_StHbtBPLCMS3DCorrFctnKt(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtBPLCMS3DCorrFctnKt[nElements] : new ::StHbtBPLCMS3DCorrFctnKt[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtBPLCMS3DCorrFctnKt(void *p) {
      delete (static_cast<::StHbtBPLCMS3DCorrFctnKt*>(p));
   }
   static void deleteArray_StHbtBPLCMS3DCorrFctnKt(void *p) {
      delete [] (static_cast<::StHbtBPLCMS3DCorrFctnKt*>(p));
   }
   static void destruct_StHbtBPLCMS3DCorrFctnKt(void *p) {
      typedef ::StHbtBPLCMS3DCorrFctnKt current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtBPLCMS3DCorrFctnKt

namespace ROOT {
   // Wrapper around operator delete
   static void delete_StHbtCorrFctn3DLCMSSym(void *p) {
      delete (static_cast<::StHbtCorrFctn3DLCMSSym*>(p));
   }
   static void deleteArray_StHbtCorrFctn3DLCMSSym(void *p) {
      delete [] (static_cast<::StHbtCorrFctn3DLCMSSym*>(p));
   }
   static void destruct_StHbtCorrFctn3DLCMSSym(void *p) {
      typedef ::StHbtCorrFctn3DLCMSSym current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtCorrFctn3DLCMSSym

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtCoulomb(void *p) {
      return  p ? new(p) ::StHbtCoulomb : new ::StHbtCoulomb;
   }
   static void *newArray_StHbtCoulomb(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtCoulomb[nElements] : new ::StHbtCoulomb[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtCoulomb(void *p) {
      delete (static_cast<::StHbtCoulomb*>(p));
   }
   static void deleteArray_StHbtCoulomb(void *p) {
      delete [] (static_cast<::StHbtCoulomb*>(p));
   }
   static void destruct_StHbtCoulomb(void *p) {
      typedef ::StHbtCoulomb current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtCoulomb

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtDeltaEtaDeltaPhiStarMinKt(void *p) {
      return  p ? new(p) ::StHbtDeltaEtaDeltaPhiStarMinKt : new ::StHbtDeltaEtaDeltaPhiStarMinKt;
   }
   static void *newArray_StHbtDeltaEtaDeltaPhiStarMinKt(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtDeltaEtaDeltaPhiStarMinKt[nElements] : new ::StHbtDeltaEtaDeltaPhiStarMinKt[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtDeltaEtaDeltaPhiStarMinKt(void *p) {
      delete (static_cast<::StHbtDeltaEtaDeltaPhiStarMinKt*>(p));
   }
   static void deleteArray_StHbtDeltaEtaDeltaPhiStarMinKt(void *p) {
      delete [] (static_cast<::StHbtDeltaEtaDeltaPhiStarMinKt*>(p));
   }
   static void destruct_StHbtDeltaEtaDeltaPhiStarMinKt(void *p) {
      typedef ::StHbtDeltaEtaDeltaPhiStarMinKt current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtDeltaEtaDeltaPhiStarMinKt

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtDummyTrackCut(void *p) {
      return  p ? new(p) ::StHbtDummyTrackCut : new ::StHbtDummyTrackCut;
   }
   static void *newArray_StHbtDummyTrackCut(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtDummyTrackCut[nElements] : new ::StHbtDummyTrackCut[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtDummyTrackCut(void *p) {
      delete (static_cast<::StHbtDummyTrackCut*>(p));
   }
   static void deleteArray_StHbtDummyTrackCut(void *p) {
      delete [] (static_cast<::StHbtDummyTrackCut*>(p));
   }
   static void destruct_StHbtDummyTrackCut(void *p) {
      typedef ::StHbtDummyTrackCut current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtDummyTrackCut

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtFemtoDstReader(void *p) {
      return  p ? new(p) ::StHbtFemtoDstReader : new ::StHbtFemtoDstReader;
   }
   static void *newArray_StHbtFemtoDstReader(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtFemtoDstReader[nElements] : new ::StHbtFemtoDstReader[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtFemtoDstReader(void *p) {
      delete (static_cast<::StHbtFemtoDstReader*>(p));
   }
   static void deleteArray_StHbtFemtoDstReader(void *p) {
      delete [] (static_cast<::StHbtFemtoDstReader*>(p));
   }
   static void destruct_StHbtFemtoDstReader(void *p) {
      typedef ::StHbtFemtoDstReader current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtFemtoDstReader

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtMcDstReader(void *p) {
      return  p ? new(p) ::StHbtMcDstReader : new ::StHbtMcDstReader;
   }
   static void *newArray_StHbtMcDstReader(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtMcDstReader[nElements] : new ::StHbtMcDstReader[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtMcDstReader(void *p) {
      delete (static_cast<::StHbtMcDstReader*>(p));
   }
   static void deleteArray_StHbtMcDstReader(void *p) {
      delete [] (static_cast<::StHbtMcDstReader*>(p));
   }
   static void destruct_StHbtMcDstReader(void *p) {
      typedef ::StHbtMcDstReader current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtMcDstReader

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtModelBPLCMS3DCorrFctnKt(void *p) {
      return  p ? new(p) ::StHbtModelBPLCMS3DCorrFctnKt : new ::StHbtModelBPLCMS3DCorrFctnKt;
   }
   static void *newArray_StHbtModelBPLCMS3DCorrFctnKt(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtModelBPLCMS3DCorrFctnKt[nElements] : new ::StHbtModelBPLCMS3DCorrFctnKt[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtModelBPLCMS3DCorrFctnKt(void *p) {
      delete (static_cast<::StHbtModelBPLCMS3DCorrFctnKt*>(p));
   }
   static void deleteArray_StHbtModelBPLCMS3DCorrFctnKt(void *p) {
      delete [] (static_cast<::StHbtModelBPLCMS3DCorrFctnKt*>(p));
   }
   static void destruct_StHbtModelBPLCMS3DCorrFctnKt(void *p) {
      typedef ::StHbtModelBPLCMS3DCorrFctnKt current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtModelBPLCMS3DCorrFctnKt

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtModelQinvCorrFctn(void *p) {
      return  p ? new(p) ::StHbtModelQinvCorrFctn : new ::StHbtModelQinvCorrFctn;
   }
   static void *newArray_StHbtModelQinvCorrFctn(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtModelQinvCorrFctn[nElements] : new ::StHbtModelQinvCorrFctn[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtModelQinvCorrFctn(void *p) {
      delete (static_cast<::StHbtModelQinvCorrFctn*>(p));
   }
   static void deleteArray_StHbtModelQinvCorrFctn(void *p) {
      delete [] (static_cast<::StHbtModelQinvCorrFctn*>(p));
   }
   static void destruct_StHbtModelQinvCorrFctn(void *p) {
      typedef ::StHbtModelQinvCorrFctn current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtModelQinvCorrFctn

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtModelQinvCorrFctnKt(void *p) {
      return  p ? new(p) ::StHbtModelQinvCorrFctnKt : new ::StHbtModelQinvCorrFctnKt;
   }
   static void *newArray_StHbtModelQinvCorrFctnKt(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtModelQinvCorrFctnKt[nElements] : new ::StHbtModelQinvCorrFctnKt[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtModelQinvCorrFctnKt(void *p) {
      delete (static_cast<::StHbtModelQinvCorrFctnKt*>(p));
   }
   static void deleteArray_StHbtModelQinvCorrFctnKt(void *p) {
      delete [] (static_cast<::StHbtModelQinvCorrFctnKt*>(p));
   }
   static void destruct_StHbtModelQinvCorrFctnKt(void *p) {
      typedef ::StHbtModelQinvCorrFctnKt current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtModelQinvCorrFctnKt

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtModelSpectraAnalysis(void *p) {
      return  p ? new(p) ::StHbtModelSpectraAnalysis : new ::StHbtModelSpectraAnalysis;
   }
   static void *newArray_StHbtModelSpectraAnalysis(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtModelSpectraAnalysis[nElements] : new ::StHbtModelSpectraAnalysis[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtModelSpectraAnalysis(void *p) {
      delete (static_cast<::StHbtModelSpectraAnalysis*>(p));
   }
   static void deleteArray_StHbtModelSpectraAnalysis(void *p) {
      delete [] (static_cast<::StHbtModelSpectraAnalysis*>(p));
   }
   static void destruct_StHbtModelSpectraAnalysis(void *p) {
      typedef ::StHbtModelSpectraAnalysis current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtModelSpectraAnalysis

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtPicoDstReader(void *p) {
      return  p ? new(p) ::StHbtPicoDstReader : new ::StHbtPicoDstReader;
   }
   static void *newArray_StHbtPicoDstReader(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtPicoDstReader[nElements] : new ::StHbtPicoDstReader[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtPicoDstReader(void *p) {
      delete (static_cast<::StHbtPicoDstReader*>(p));
   }
   static void deleteArray_StHbtPicoDstReader(void *p) {
      delete [] (static_cast<::StHbtPicoDstReader*>(p));
   }
   static void destruct_StHbtPicoDstReader(void *p) {
      typedef ::StHbtPicoDstReader current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtPicoDstReader

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtQinvCorrFctnKt(void *p) {
      return  p ? new(p) ::StHbtQinvCorrFctnKt : new ::StHbtQinvCorrFctnKt;
   }
   static void *newArray_StHbtQinvCorrFctnKt(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtQinvCorrFctnKt[nElements] : new ::StHbtQinvCorrFctnKt[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtQinvCorrFctnKt(void *p) {
      delete (static_cast<::StHbtQinvCorrFctnKt*>(p));
   }
   static void deleteArray_StHbtQinvCorrFctnKt(void *p) {
      delete [] (static_cast<::StHbtQinvCorrFctnKt*>(p));
   }
   static void destruct_StHbtQinvCorrFctnKt(void *p) {
      typedef ::StHbtQinvCorrFctnKt current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtQinvCorrFctnKt

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtReactionPlaneAnalysis(void *p) {
      return  p ? new(p) ::StHbtReactionPlaneAnalysis : new ::StHbtReactionPlaneAnalysis;
   }
   static void *newArray_StHbtReactionPlaneAnalysis(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtReactionPlaneAnalysis[nElements] : new ::StHbtReactionPlaneAnalysis[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtReactionPlaneAnalysis(void *p) {
      delete (static_cast<::StHbtReactionPlaneAnalysis*>(p));
   }
   static void deleteArray_StHbtReactionPlaneAnalysis(void *p) {
      delete [] (static_cast<::StHbtReactionPlaneAnalysis*>(p));
   }
   static void destruct_StHbtReactionPlaneAnalysis(void *p) {
      typedef ::StHbtReactionPlaneAnalysis current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtReactionPlaneAnalysis

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtSmearPair(void *p) {
      return  p ? new(p) ::StHbtSmearPair : new ::StHbtSmearPair;
   }
   static void *newArray_StHbtSmearPair(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtSmearPair[nElements] : new ::StHbtSmearPair[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtSmearPair(void *p) {
      delete (static_cast<::StHbtSmearPair*>(p));
   }
   static void deleteArray_StHbtSmearPair(void *p) {
      delete [] (static_cast<::StHbtSmearPair*>(p));
   }
   static void destruct_StHbtSmearPair(void *p) {
      typedef ::StHbtSmearPair current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtSmearPair

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtVertexAnalysis(void *p) {
      return  p ? new(p) ::StHbtVertexAnalysis : new ::StHbtVertexAnalysis;
   }
   static void *newArray_StHbtVertexAnalysis(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtVertexAnalysis[nElements] : new ::StHbtVertexAnalysis[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtVertexAnalysis(void *p) {
      delete (static_cast<::StHbtVertexAnalysis*>(p));
   }
   static void deleteArray_StHbtVertexAnalysis(void *p) {
      delete [] (static_cast<::StHbtVertexAnalysis*>(p));
   }
   static void destruct_StHbtVertexAnalysis(void *p) {
      typedef ::StHbtVertexAnalysis current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtVertexAnalysis

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtVertexMultAnalysis(void *p) {
      return  p ? new(p) ::StHbtVertexMultAnalysis : new ::StHbtVertexMultAnalysis;
   }
   static void *newArray_StHbtVertexMultAnalysis(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtVertexMultAnalysis[nElements] : new ::StHbtVertexMultAnalysis[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtVertexMultAnalysis(void *p) {
      delete (static_cast<::StHbtVertexMultAnalysis*>(p));
   }
   static void deleteArray_StHbtVertexMultAnalysis(void *p) {
      delete [] (static_cast<::StHbtVertexMultAnalysis*>(p));
   }
   static void destruct_StHbtVertexMultAnalysis(void *p) {
      typedef ::StHbtVertexMultAnalysis current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtVertexMultAnalysis

namespace ROOT {
   static TClass *vectorlEunsignedsPintgR_Dictionary();
   static void vectorlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPintgR(void *p = nullptr);
   static void *newArray_vectorlEunsignedsPintgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPintgR(void *p);
   static void deleteArray_vectorlEunsignedsPintgR(void *p);
   static void destruct_vectorlEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned int>*)
   {
      vector<unsigned int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned int>", -2, "vector", 389,
                  typeid(vector<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned int>) );
      instance.SetNew(&new_vectorlEunsignedsPintgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPintgR);
      instance.SetDelete(&delete_vectorlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPintgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<unsigned int>","std::vector<unsigned int, std::allocator<unsigned int> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<unsigned int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<unsigned int>*>(nullptr))->GetClass();
      vectorlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned int> : new vector<unsigned int>;
   }
   static void *newArray_vectorlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned int>[nElements] : new vector<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPintgR(void *p) {
      delete (static_cast<vector<unsigned int>*>(p));
   }
   static void deleteArray_vectorlEunsignedsPintgR(void *p) {
      delete [] (static_cast<vector<unsigned int>*>(p));
   }
   static void destruct_vectorlEunsignedsPintgR(void *p) {
      typedef vector<unsigned int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned int>

namespace ROOT {
   static TClass *vectorlETH3FmUgR_Dictionary();
   static void vectorlETH3FmUgR_TClassManip(TClass*);
   static void *new_vectorlETH3FmUgR(void *p = nullptr);
   static void *newArray_vectorlETH3FmUgR(Long_t size, void *p);
   static void delete_vectorlETH3FmUgR(void *p);
   static void deleteArray_vectorlETH3FmUgR(void *p);
   static void destruct_vectorlETH3FmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TH3F*>*)
   {
      vector<TH3F*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TH3F*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TH3F*>", -2, "vector", 389,
                  typeid(vector<TH3F*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETH3FmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TH3F*>) );
      instance.SetNew(&new_vectorlETH3FmUgR);
      instance.SetNewArray(&newArray_vectorlETH3FmUgR);
      instance.SetDelete(&delete_vectorlETH3FmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETH3FmUgR);
      instance.SetDestructor(&destruct_vectorlETH3FmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TH3F*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TH3F*>","std::vector<TH3F*, std::allocator<TH3F*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TH3F*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETH3FmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TH3F*>*>(nullptr))->GetClass();
      vectorlETH3FmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETH3FmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETH3FmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TH3F*> : new vector<TH3F*>;
   }
   static void *newArray_vectorlETH3FmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TH3F*>[nElements] : new vector<TH3F*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETH3FmUgR(void *p) {
      delete (static_cast<vector<TH3F*>*>(p));
   }
   static void deleteArray_vectorlETH3FmUgR(void *p) {
      delete [] (static_cast<vector<TH3F*>*>(p));
   }
   static void destruct_vectorlETH3FmUgR(void *p) {
      typedef vector<TH3F*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TH3F*>

namespace ROOT {
   static TClass *vectorlETH2FmUgR_Dictionary();
   static void vectorlETH2FmUgR_TClassManip(TClass*);
   static void *new_vectorlETH2FmUgR(void *p = nullptr);
   static void *newArray_vectorlETH2FmUgR(Long_t size, void *p);
   static void delete_vectorlETH2FmUgR(void *p);
   static void deleteArray_vectorlETH2FmUgR(void *p);
   static void destruct_vectorlETH2FmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TH2F*>*)
   {
      vector<TH2F*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TH2F*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TH2F*>", -2, "vector", 389,
                  typeid(vector<TH2F*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETH2FmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TH2F*>) );
      instance.SetNew(&new_vectorlETH2FmUgR);
      instance.SetNewArray(&newArray_vectorlETH2FmUgR);
      instance.SetDelete(&delete_vectorlETH2FmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETH2FmUgR);
      instance.SetDestructor(&destruct_vectorlETH2FmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TH2F*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TH2F*>","std::vector<TH2F*, std::allocator<TH2F*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TH2F*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETH2FmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TH2F*>*>(nullptr))->GetClass();
      vectorlETH2FmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETH2FmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETH2FmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TH2F*> : new vector<TH2F*>;
   }
   static void *newArray_vectorlETH2FmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TH2F*>[nElements] : new vector<TH2F*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETH2FmUgR(void *p) {
      delete (static_cast<vector<TH2F*>*>(p));
   }
   static void deleteArray_vectorlETH2FmUgR(void *p) {
      delete [] (static_cast<vector<TH2F*>*>(p));
   }
   static void destruct_vectorlETH2FmUgR(void *p) {
      typedef vector<TH2F*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TH2F*>

namespace ROOT {
   static TClass *vectorlETH1DmUgR_Dictionary();
   static void vectorlETH1DmUgR_TClassManip(TClass*);
   static void *new_vectorlETH1DmUgR(void *p = nullptr);
   static void *newArray_vectorlETH1DmUgR(Long_t size, void *p);
   static void delete_vectorlETH1DmUgR(void *p);
   static void deleteArray_vectorlETH1DmUgR(void *p);
   static void destruct_vectorlETH1DmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TH1D*>*)
   {
      vector<TH1D*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TH1D*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TH1D*>", -2, "vector", 389,
                  typeid(vector<TH1D*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETH1DmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TH1D*>) );
      instance.SetNew(&new_vectorlETH1DmUgR);
      instance.SetNewArray(&newArray_vectorlETH1DmUgR);
      instance.SetDelete(&delete_vectorlETH1DmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETH1DmUgR);
      instance.SetDestructor(&destruct_vectorlETH1DmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TH1D*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TH1D*>","std::vector<TH1D*, std::allocator<TH1D*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TH1D*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETH1DmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TH1D*>*>(nullptr))->GetClass();
      vectorlETH1DmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETH1DmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETH1DmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TH1D*> : new vector<TH1D*>;
   }
   static void *newArray_vectorlETH1DmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TH1D*>[nElements] : new vector<TH1D*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETH1DmUgR(void *p) {
      delete (static_cast<vector<TH1D*>*>(p));
   }
   static void deleteArray_vectorlETH1DmUgR(void *p) {
      delete [] (static_cast<vector<TH1D*>*>(p));
   }
   static void destruct_vectorlETH1DmUgR(void *p) {
      typedef vector<TH1D*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TH1D*>

namespace {
  void TriggerDictionaryInitialization_libStHbtMakerUser_Impl() {
    static const char* headers[] = {
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/fxtEventCutMonitor.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/fxtPairCutMonitor.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/fxtTrackCutMonitor.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtBasicEventCut.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtBasicPairCut.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtBasicTrackCut.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtBPLCMS3DCorrFctnKt.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtCorrFctn3DLCMSSym.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtCoulomb.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtDeltaEtaDeltaPhiStarMinKt.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtDummyTrackCut.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtFemtoDstReader.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtMcDstReader.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtModelBPLCMS3DCorrFctnKt.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtModelQinvCorrFctn.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtModelQinvCorrFctnKt.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtModelSpectraAnalysis.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtModelVertexImpactAnalysis.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtPicoDstReader.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtQinvCorrFctnKt.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtReactionPlaneAnalysis.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtSmearPair.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtVertexAnalysis.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtVertexMultAnalysis.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/ubuntu/Vinh/root_v6.30.02/include",
"/home/ubuntu/Vinh/sthbtmaker/StRoot",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/..",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser",
"/home/ubuntu/Vinh/root_v6.30.02/include/",
"/home/ubuntu/Vinh/sthbtmaker/build/StHbtMakerUser/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libStHbtMakerUser dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/fxtEventCutMonitor.h")))  fxtEventCutMonitor;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/fxtPairCutMonitor.h")))  fxtPairCutMonitor;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/fxtTrackCutMonitor.h")))  fxtTrackCutMonitor;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtBasicEventCut.h")))  StHbtBasicEventCut;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtBasicPairCut.h")))  StHbtBasicPairCut;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtBasicTrackCut.h")))  StHbtBasicTrackCut;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtBPLCMS3DCorrFctnKt.h")))  StHbtBPLCMS3DCorrFctnKt;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtCorrFctn3DLCMSSym.h")))  StHbtCorrFctn3DLCMSSym;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtCoulomb.h")))  StHbtCoulomb;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtDeltaEtaDeltaPhiStarMinKt.h")))  StHbtDeltaEtaDeltaPhiStarMinKt;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtDummyTrackCut.h")))  StHbtDummyTrackCut;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtFemtoDstReader.h")))  StHbtFemtoDstReader;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtMcDstReader.h")))  StHbtMcDstReader;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtModelBPLCMS3DCorrFctnKt.h")))  StHbtModelBPLCMS3DCorrFctnKt;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtModelQinvCorrFctn.h")))  StHbtModelQinvCorrFctn;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtModelQinvCorrFctnKt.h")))  StHbtModelQinvCorrFctnKt;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtModelSpectraAnalysis.h")))  StHbtModelSpectraAnalysis;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtPicoDstReader.h")))  StHbtPicoDstReader;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtQinvCorrFctnKt.h")))  StHbtQinvCorrFctnKt;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtReactionPlaneAnalysis.h")))  StHbtReactionPlaneAnalysis;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtSmearPair.h")))  StHbtSmearPair;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtVertexAnalysis.h")))  StHbtVertexAnalysis;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtVertexMultAnalysis.h")))  StHbtVertexMultAnalysis;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libStHbtMakerUser dictionary payload"

#ifndef _VANILLA_ROOT_
  #define _VANILLA_ROOT_ 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/fxtEventCutMonitor.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/fxtPairCutMonitor.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/fxtTrackCutMonitor.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtBasicEventCut.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtBasicPairCut.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtBasicTrackCut.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtBPLCMS3DCorrFctnKt.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtCorrFctn3DLCMSSym.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtCoulomb.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtDeltaEtaDeltaPhiStarMinKt.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtDummyTrackCut.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtFemtoDstReader.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtMcDstReader.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtModelBPLCMS3DCorrFctnKt.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtModelQinvCorrFctn.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtModelQinvCorrFctnKt.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtModelSpectraAnalysis.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtModelVertexImpactAnalysis.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtPicoDstReader.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtQinvCorrFctnKt.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtReactionPlaneAnalysis.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtSmearPair.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtVertexAnalysis.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMakerUser/StHbtVertexMultAnalysis.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"StHbtBPLCMS3DCorrFctnKt", payloadCode, "@",
"StHbtBasicEventCut", payloadCode, "@",
"StHbtBasicPairCut", payloadCode, "@",
"StHbtBasicTrackCut", payloadCode, "@",
"StHbtCorrFctn3DLCMSSym", payloadCode, "@",
"StHbtCoulomb", payloadCode, "@",
"StHbtDeltaEtaDeltaPhiStarMinKt", payloadCode, "@",
"StHbtDummyTrackCut", payloadCode, "@",
"StHbtFemtoDstReader", payloadCode, "@",
"StHbtMcDstReader", payloadCode, "@",
"StHbtModelBPLCMS3DCorrFctnKt", payloadCode, "@",
"StHbtModelQinvCorrFctn", payloadCode, "@",
"StHbtModelQinvCorrFctnKt", payloadCode, "@",
"StHbtModelSpectraAnalysis", payloadCode, "@",
"StHbtPicoDstReader", payloadCode, "@",
"StHbtQinvCorrFctnKt", payloadCode, "@",
"StHbtReactionPlaneAnalysis", payloadCode, "@",
"StHbtSmearPair", payloadCode, "@",
"StHbtVertexAnalysis", payloadCode, "@",
"StHbtVertexMultAnalysis", payloadCode, "@",
"fxtEventCutMonitor", payloadCode, "@",
"fxtPairCutMonitor", payloadCode, "@",
"fxtTrackCutMonitor", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libStHbtMakerUser",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libStHbtMakerUser_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libStHbtMakerUser_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libStHbtMakerUser() {
  TriggerDictionaryInitialization_libStHbtMakerUser_Impl();
}
