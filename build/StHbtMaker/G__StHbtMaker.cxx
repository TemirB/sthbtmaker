// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__StHbtMaker
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
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtAnalysis.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtBaseCorrFctn.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtBaseCutMonitor.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtBaseEventReader.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtBaseModelFreezeOutGenerator.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtBaseModelWeightGenerator.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtCutMonitorHandler.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtEvent.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtHelix.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtKink.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtLikeSignAnalysis.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtMaker.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtManager.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtModelGausLCMSFreezeOutGenerator.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtModelHiddenInfo.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtModelManager.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtModelWeightGeneratorLednicky.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtMultiTrackCut.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtPair.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtParticle.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtPhysicalHelix.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtPicoEvent.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtPicoEventCollectionVectorHideAway.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtTrack.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtTriplet.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtV0.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtXi.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/TpcLocalTransform.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *StHbtHelix_Dictionary();
   static void StHbtHelix_TClassManip(TClass*);
   static void *new_StHbtHelix(void *p = nullptr);
   static void *newArray_StHbtHelix(Long_t size, void *p);
   static void delete_StHbtHelix(void *p);
   static void deleteArray_StHbtHelix(void *p);
   static void destruct_StHbtHelix(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtHelix*)
   {
      ::StHbtHelix *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtHelix));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtHelix", "StHbtHelix.h", 37,
                  typeid(::StHbtHelix), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtHelix_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtHelix) );
      instance.SetNew(&new_StHbtHelix);
      instance.SetNewArray(&newArray_StHbtHelix);
      instance.SetDelete(&delete_StHbtHelix);
      instance.SetDeleteArray(&deleteArray_StHbtHelix);
      instance.SetDestructor(&destruct_StHbtHelix);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtHelix*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtHelix*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtHelix*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtHelix_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtHelix*>(nullptr))->GetClass();
      StHbtHelix_TClassManip(theClass);
   return theClass;
   }

   static void StHbtHelix_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtPhysicalHelix_Dictionary();
   static void StHbtPhysicalHelix_TClassManip(TClass*);
   static void *new_StHbtPhysicalHelix(void *p = nullptr);
   static void *newArray_StHbtPhysicalHelix(Long_t size, void *p);
   static void delete_StHbtPhysicalHelix(void *p);
   static void deleteArray_StHbtPhysicalHelix(void *p);
   static void destruct_StHbtPhysicalHelix(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtPhysicalHelix*)
   {
      ::StHbtPhysicalHelix *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtPhysicalHelix));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtPhysicalHelix", "StHbtPhysicalHelix.h", 19,
                  typeid(::StHbtPhysicalHelix), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtPhysicalHelix_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtPhysicalHelix) );
      instance.SetNew(&new_StHbtPhysicalHelix);
      instance.SetNewArray(&newArray_StHbtPhysicalHelix);
      instance.SetDelete(&delete_StHbtPhysicalHelix);
      instance.SetDeleteArray(&deleteArray_StHbtPhysicalHelix);
      instance.SetDestructor(&destruct_StHbtPhysicalHelix);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtPhysicalHelix*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtPhysicalHelix*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtPhysicalHelix*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtPhysicalHelix_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtPhysicalHelix*>(nullptr))->GetClass();
      StHbtPhysicalHelix_TClassManip(theClass);
   return theClass;
   }

   static void StHbtPhysicalHelix_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtBaseAnalysis_Dictionary();
   static void StHbtBaseAnalysis_TClassManip(TClass*);
   static void delete_StHbtBaseAnalysis(void *p);
   static void deleteArray_StHbtBaseAnalysis(void *p);
   static void destruct_StHbtBaseAnalysis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtBaseAnalysis*)
   {
      ::StHbtBaseAnalysis *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtBaseAnalysis));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtBaseAnalysis", "StHbtBaseAnalysis.h", 23,
                  typeid(::StHbtBaseAnalysis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtBaseAnalysis_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtBaseAnalysis) );
      instance.SetDelete(&delete_StHbtBaseAnalysis);
      instance.SetDeleteArray(&deleteArray_StHbtBaseAnalysis);
      instance.SetDestructor(&destruct_StHbtBaseAnalysis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtBaseAnalysis*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtBaseAnalysis*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtBaseAnalysis*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtBaseAnalysis_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtBaseAnalysis*>(nullptr))->GetClass();
      StHbtBaseAnalysis_TClassManip(theClass);
   return theClass;
   }

   static void StHbtBaseAnalysis_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtTrack_Dictionary();
   static void StHbtTrack_TClassManip(TClass*);
   static void *new_StHbtTrack(void *p = nullptr);
   static void *newArray_StHbtTrack(Long_t size, void *p);
   static void delete_StHbtTrack(void *p);
   static void deleteArray_StHbtTrack(void *p);
   static void destruct_StHbtTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtTrack*)
   {
      ::StHbtTrack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtTrack));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtTrack", "StHbtTrack.h", 31,
                  typeid(::StHbtTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtTrack_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtTrack) );
      instance.SetNew(&new_StHbtTrack);
      instance.SetNewArray(&newArray_StHbtTrack);
      instance.SetDelete(&delete_StHbtTrack);
      instance.SetDeleteArray(&deleteArray_StHbtTrack);
      instance.SetDestructor(&destruct_StHbtTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtTrack*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtTrack*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtTrack*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtTrack_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtTrack*>(nullptr))->GetClass();
      StHbtTrack_TClassManip(theClass);
   return theClass;
   }

   static void StHbtTrack_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtV0_Dictionary();
   static void StHbtV0_TClassManip(TClass*);
   static void *new_StHbtV0(void *p = nullptr);
   static void *newArray_StHbtV0(Long_t size, void *p);
   static void delete_StHbtV0(void *p);
   static void deleteArray_StHbtV0(void *p);
   static void destruct_StHbtV0(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtV0*)
   {
      ::StHbtV0 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtV0));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtV0", "StHbtV0.h", 26,
                  typeid(::StHbtV0), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtV0_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtV0) );
      instance.SetNew(&new_StHbtV0);
      instance.SetNewArray(&newArray_StHbtV0);
      instance.SetDelete(&delete_StHbtV0);
      instance.SetDeleteArray(&deleteArray_StHbtV0);
      instance.SetDestructor(&destruct_StHbtV0);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtV0*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtV0*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtV0*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtV0_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtV0*>(nullptr))->GetClass();
      StHbtV0_TClassManip(theClass);
   return theClass;
   }

   static void StHbtV0_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtXi_Dictionary();
   static void StHbtXi_TClassManip(TClass*);
   static void *new_StHbtXi(void *p = nullptr);
   static void *newArray_StHbtXi(Long_t size, void *p);
   static void delete_StHbtXi(void *p);
   static void deleteArray_StHbtXi(void *p);
   static void destruct_StHbtXi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtXi*)
   {
      ::StHbtXi *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtXi));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtXi", "StHbtXi.h", 21,
                  typeid(::StHbtXi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtXi_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtXi) );
      instance.SetNew(&new_StHbtXi);
      instance.SetNewArray(&newArray_StHbtXi);
      instance.SetDelete(&delete_StHbtXi);
      instance.SetDeleteArray(&deleteArray_StHbtXi);
      instance.SetDestructor(&destruct_StHbtXi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtXi*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtXi*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtXi*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtXi_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtXi*>(nullptr))->GetClass();
      StHbtXi_TClassManip(theClass);
   return theClass;
   }

   static void StHbtXi_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtKink_Dictionary();
   static void StHbtKink_TClassManip(TClass*);
   static void *new_StHbtKink(void *p = nullptr);
   static void *newArray_StHbtKink(Long_t size, void *p);
   static void delete_StHbtKink(void *p);
   static void deleteArray_StHbtKink(void *p);
   static void destruct_StHbtKink(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtKink*)
   {
      ::StHbtKink *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtKink));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtKink", "StHbtKink.h", 19,
                  typeid(::StHbtKink), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtKink_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtKink) );
      instance.SetNew(&new_StHbtKink);
      instance.SetNewArray(&newArray_StHbtKink);
      instance.SetDelete(&delete_StHbtKink);
      instance.SetDeleteArray(&deleteArray_StHbtKink);
      instance.SetDestructor(&destruct_StHbtKink);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtKink*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtKink*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtKink*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtKink_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtKink*>(nullptr))->GetClass();
      StHbtKink_TClassManip(theClass);
   return theClass;
   }

   static void StHbtKink_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtEvent_Dictionary();
   static void StHbtEvent_TClassManip(TClass*);
   static void *new_StHbtEvent(void *p = nullptr);
   static void *newArray_StHbtEvent(Long_t size, void *p);
   static void delete_StHbtEvent(void *p);
   static void deleteArray_StHbtEvent(void *p);
   static void destruct_StHbtEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtEvent*)
   {
      ::StHbtEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtEvent));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtEvent", "StHbtEvent.h", 36,
                  typeid(::StHbtEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtEvent_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtEvent) );
      instance.SetNew(&new_StHbtEvent);
      instance.SetNewArray(&newArray_StHbtEvent);
      instance.SetDelete(&delete_StHbtEvent);
      instance.SetDeleteArray(&deleteArray_StHbtEvent);
      instance.SetDestructor(&destruct_StHbtEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtEvent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtEvent*>(nullptr))->GetClass();
      StHbtEvent_TClassManip(theClass);
   return theClass;
   }

   static void StHbtEvent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtParticle_Dictionary();
   static void StHbtParticle_TClassManip(TClass*);
   static void *new_StHbtParticle(void *p = nullptr);
   static void *newArray_StHbtParticle(Long_t size, void *p);
   static void delete_StHbtParticle(void *p);
   static void deleteArray_StHbtParticle(void *p);
   static void destruct_StHbtParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtParticle*)
   {
      ::StHbtParticle *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtParticle));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtParticle", "StHbtParticle.h", 27,
                  typeid(::StHbtParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtParticle_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtParticle) );
      instance.SetNew(&new_StHbtParticle);
      instance.SetNewArray(&newArray_StHbtParticle);
      instance.SetDelete(&delete_StHbtParticle);
      instance.SetDeleteArray(&deleteArray_StHbtParticle);
      instance.SetDestructor(&destruct_StHbtParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtParticle*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtParticle*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtParticle*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtParticle_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtParticle*>(nullptr))->GetClass();
      StHbtParticle_TClassManip(theClass);
   return theClass;
   }

   static void StHbtParticle_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtPair_Dictionary();
   static void StHbtPair_TClassManip(TClass*);
   static void *new_StHbtPair(void *p = nullptr);
   static void *newArray_StHbtPair(Long_t size, void *p);
   static void delete_StHbtPair(void *p);
   static void deleteArray_StHbtPair(void *p);
   static void destruct_StHbtPair(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtPair*)
   {
      ::StHbtPair *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtPair));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtPair", "StHbtPair.h", 31,
                  typeid(::StHbtPair), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtPair_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtPair) );
      instance.SetNew(&new_StHbtPair);
      instance.SetNewArray(&newArray_StHbtPair);
      instance.SetDelete(&delete_StHbtPair);
      instance.SetDeleteArray(&deleteArray_StHbtPair);
      instance.SetDestructor(&destruct_StHbtPair);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtPair*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtPair*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtPair*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtPair_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtPair*>(nullptr))->GetClass();
      StHbtPair_TClassManip(theClass);
   return theClass;
   }

   static void StHbtPair_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtBaseCutMonitor_Dictionary();
   static void StHbtBaseCutMonitor_TClassManip(TClass*);
   static void *new_StHbtBaseCutMonitor(void *p = nullptr);
   static void *newArray_StHbtBaseCutMonitor(Long_t size, void *p);
   static void delete_StHbtBaseCutMonitor(void *p);
   static void deleteArray_StHbtBaseCutMonitor(void *p);
   static void destruct_StHbtBaseCutMonitor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtBaseCutMonitor*)
   {
      ::StHbtBaseCutMonitor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtBaseCutMonitor));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtBaseCutMonitor", "StHbtBaseCutMonitor.h", 51,
                  typeid(::StHbtBaseCutMonitor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtBaseCutMonitor_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtBaseCutMonitor) );
      instance.SetNew(&new_StHbtBaseCutMonitor);
      instance.SetNewArray(&newArray_StHbtBaseCutMonitor);
      instance.SetDelete(&delete_StHbtBaseCutMonitor);
      instance.SetDeleteArray(&deleteArray_StHbtBaseCutMonitor);
      instance.SetDestructor(&destruct_StHbtBaseCutMonitor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtBaseCutMonitor*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtBaseCutMonitor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtBaseCutMonitor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtBaseCutMonitor_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtBaseCutMonitor*>(nullptr))->GetClass();
      StHbtBaseCutMonitor_TClassManip(theClass);
   return theClass;
   }

   static void StHbtBaseCutMonitor_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtCutMonitorHandler_Dictionary();
   static void StHbtCutMonitorHandler_TClassManip(TClass*);
   static void *new_StHbtCutMonitorHandler(void *p = nullptr);
   static void *newArray_StHbtCutMonitorHandler(Long_t size, void *p);
   static void delete_StHbtCutMonitorHandler(void *p);
   static void deleteArray_StHbtCutMonitorHandler(void *p);
   static void destruct_StHbtCutMonitorHandler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtCutMonitorHandler*)
   {
      ::StHbtCutMonitorHandler *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtCutMonitorHandler));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtCutMonitorHandler", "StHbtCutMonitorHandler.h", 34,
                  typeid(::StHbtCutMonitorHandler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtCutMonitorHandler_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtCutMonitorHandler) );
      instance.SetNew(&new_StHbtCutMonitorHandler);
      instance.SetNewArray(&newArray_StHbtCutMonitorHandler);
      instance.SetDelete(&delete_StHbtCutMonitorHandler);
      instance.SetDeleteArray(&deleteArray_StHbtCutMonitorHandler);
      instance.SetDestructor(&destruct_StHbtCutMonitorHandler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtCutMonitorHandler*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtCutMonitorHandler*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtCutMonitorHandler*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtCutMonitorHandler_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtCutMonitorHandler*>(nullptr))->GetClass();
      StHbtCutMonitorHandler_TClassManip(theClass);
   return theClass;
   }

   static void StHbtCutMonitorHandler_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtBasePairCut_Dictionary();
   static void StHbtBasePairCut_TClassManip(TClass*);
   static void delete_StHbtBasePairCut(void *p);
   static void deleteArray_StHbtBasePairCut(void *p);
   static void destruct_StHbtBasePairCut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtBasePairCut*)
   {
      ::StHbtBasePairCut *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtBasePairCut));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtBasePairCut", "StHbtBasePairCut.h", 28,
                  typeid(::StHbtBasePairCut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtBasePairCut_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtBasePairCut) );
      instance.SetDelete(&delete_StHbtBasePairCut);
      instance.SetDeleteArray(&deleteArray_StHbtBasePairCut);
      instance.SetDestructor(&destruct_StHbtBasePairCut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtBasePairCut*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtBasePairCut*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtBasePairCut*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtBasePairCut_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtBasePairCut*>(nullptr))->GetClass();
      StHbtBasePairCut_TClassManip(theClass);
   return theClass;
   }

   static void StHbtBasePairCut_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtBaseEventCut_Dictionary();
   static void StHbtBaseEventCut_TClassManip(TClass*);
   static void delete_StHbtBaseEventCut(void *p);
   static void deleteArray_StHbtBaseEventCut(void *p);
   static void destruct_StHbtBaseEventCut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtBaseEventCut*)
   {
      ::StHbtBaseEventCut *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtBaseEventCut));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtBaseEventCut", "StHbtBaseEventCut.h", 27,
                  typeid(::StHbtBaseEventCut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtBaseEventCut_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtBaseEventCut) );
      instance.SetDelete(&delete_StHbtBaseEventCut);
      instance.SetDeleteArray(&deleteArray_StHbtBaseEventCut);
      instance.SetDestructor(&destruct_StHbtBaseEventCut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtBaseEventCut*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtBaseEventCut*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtBaseEventCut*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtBaseEventCut_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtBaseEventCut*>(nullptr))->GetClass();
      StHbtBaseEventCut_TClassManip(theClass);
   return theClass;
   }

   static void StHbtBaseEventCut_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtBaseParticleCut_Dictionary();
   static void StHbtBaseParticleCut_TClassManip(TClass*);
   static void delete_StHbtBaseParticleCut(void *p);
   static void deleteArray_StHbtBaseParticleCut(void *p);
   static void destruct_StHbtBaseParticleCut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtBaseParticleCut*)
   {
      ::StHbtBaseParticleCut *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtBaseParticleCut));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtBaseParticleCut", "StHbtBaseParticleCut.h", 27,
                  typeid(::StHbtBaseParticleCut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtBaseParticleCut_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtBaseParticleCut) );
      instance.SetDelete(&delete_StHbtBaseParticleCut);
      instance.SetDeleteArray(&deleteArray_StHbtBaseParticleCut);
      instance.SetDestructor(&destruct_StHbtBaseParticleCut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtBaseParticleCut*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtBaseParticleCut*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtBaseParticleCut*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtBaseParticleCut_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtBaseParticleCut*>(nullptr))->GetClass();
      StHbtBaseParticleCut_TClassManip(theClass);
   return theClass;
   }

   static void StHbtBaseParticleCut_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtTriplet_Dictionary();
   static void StHbtTriplet_TClassManip(TClass*);
   static void *new_StHbtTriplet(void *p = nullptr);
   static void *newArray_StHbtTriplet(Long_t size, void *p);
   static void delete_StHbtTriplet(void *p);
   static void deleteArray_StHbtTriplet(void *p);
   static void destruct_StHbtTriplet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtTriplet*)
   {
      ::StHbtTriplet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtTriplet));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtTriplet", "StHbtTriplet.h", 23,
                  typeid(::StHbtTriplet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtTriplet_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtTriplet) );
      instance.SetNew(&new_StHbtTriplet);
      instance.SetNewArray(&newArray_StHbtTriplet);
      instance.SetDelete(&delete_StHbtTriplet);
      instance.SetDeleteArray(&deleteArray_StHbtTriplet);
      instance.SetDestructor(&destruct_StHbtTriplet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtTriplet*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtTriplet*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtTriplet*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtTriplet_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtTriplet*>(nullptr))->GetClass();
      StHbtTriplet_TClassManip(theClass);
   return theClass;
   }

   static void StHbtTriplet_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtBaseCorrFctn_Dictionary();
   static void StHbtBaseCorrFctn_TClassManip(TClass*);
   static void delete_StHbtBaseCorrFctn(void *p);
   static void deleteArray_StHbtBaseCorrFctn(void *p);
   static void destruct_StHbtBaseCorrFctn(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtBaseCorrFctn*)
   {
      ::StHbtBaseCorrFctn *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtBaseCorrFctn));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtBaseCorrFctn", "StHbtBaseCorrFctn.h", 29,
                  typeid(::StHbtBaseCorrFctn), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtBaseCorrFctn_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtBaseCorrFctn) );
      instance.SetDelete(&delete_StHbtBaseCorrFctn);
      instance.SetDeleteArray(&deleteArray_StHbtBaseCorrFctn);
      instance.SetDestructor(&destruct_StHbtBaseCorrFctn);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtBaseCorrFctn*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtBaseCorrFctn*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtBaseCorrFctn*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtBaseCorrFctn_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtBaseCorrFctn*>(nullptr))->GetClass();
      StHbtBaseCorrFctn_TClassManip(theClass);
   return theClass;
   }

   static void StHbtBaseCorrFctn_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtPicoEvent_Dictionary();
   static void StHbtPicoEvent_TClassManip(TClass*);
   static void *new_StHbtPicoEvent(void *p = nullptr);
   static void *newArray_StHbtPicoEvent(Long_t size, void *p);
   static void delete_StHbtPicoEvent(void *p);
   static void deleteArray_StHbtPicoEvent(void *p);
   static void destruct_StHbtPicoEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtPicoEvent*)
   {
      ::StHbtPicoEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtPicoEvent));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtPicoEvent", "StHbtPicoEvent.h", 15,
                  typeid(::StHbtPicoEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtPicoEvent_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtPicoEvent) );
      instance.SetNew(&new_StHbtPicoEvent);
      instance.SetNewArray(&newArray_StHbtPicoEvent);
      instance.SetDelete(&delete_StHbtPicoEvent);
      instance.SetDeleteArray(&deleteArray_StHbtPicoEvent);
      instance.SetDestructor(&destruct_StHbtPicoEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtPicoEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtPicoEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtPicoEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtPicoEvent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtPicoEvent*>(nullptr))->GetClass();
      StHbtPicoEvent_TClassManip(theClass);
   return theClass;
   }

   static void StHbtPicoEvent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtAnalysis_Dictionary();
   static void StHbtAnalysis_TClassManip(TClass*);
   static void *new_StHbtAnalysis(void *p = nullptr);
   static void *newArray_StHbtAnalysis(Long_t size, void *p);
   static void delete_StHbtAnalysis(void *p);
   static void deleteArray_StHbtAnalysis(void *p);
   static void destruct_StHbtAnalysis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtAnalysis*)
   {
      ::StHbtAnalysis *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtAnalysis));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtAnalysis", "StHbtAnalysis.h", 55,
                  typeid(::StHbtAnalysis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtAnalysis_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtAnalysis) );
      instance.SetNew(&new_StHbtAnalysis);
      instance.SetNewArray(&newArray_StHbtAnalysis);
      instance.SetDelete(&delete_StHbtAnalysis);
      instance.SetDeleteArray(&deleteArray_StHbtAnalysis);
      instance.SetDestructor(&destruct_StHbtAnalysis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtAnalysis*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtAnalysis*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtAnalysis*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtAnalysis_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtAnalysis*>(nullptr))->GetClass();
      StHbtAnalysis_TClassManip(theClass);
   return theClass;
   }

   static void StHbtAnalysis_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtBaseEventReader_Dictionary();
   static void StHbtBaseEventReader_TClassManip(TClass*);
   static void delete_StHbtBaseEventReader(void *p);
   static void deleteArray_StHbtBaseEventReader(void *p);
   static void destruct_StHbtBaseEventReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtBaseEventReader*)
   {
      ::StHbtBaseEventReader *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtBaseEventReader));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtBaseEventReader", "StHbtBaseEventReader.h", 26,
                  typeid(::StHbtBaseEventReader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtBaseEventReader_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtBaseEventReader) );
      instance.SetDelete(&delete_StHbtBaseEventReader);
      instance.SetDeleteArray(&deleteArray_StHbtBaseEventReader);
      instance.SetDestructor(&destruct_StHbtBaseEventReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtBaseEventReader*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtBaseEventReader*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtBaseEventReader*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtBaseEventReader_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtBaseEventReader*>(nullptr))->GetClass();
      StHbtBaseEventReader_TClassManip(theClass);
   return theClass;
   }

   static void StHbtBaseEventReader_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtBaseModelFreezeOutGenerator_Dictionary();
   static void StHbtBaseModelFreezeOutGenerator_TClassManip(TClass*);
   static void delete_StHbtBaseModelFreezeOutGenerator(void *p);
   static void deleteArray_StHbtBaseModelFreezeOutGenerator(void *p);
   static void destruct_StHbtBaseModelFreezeOutGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtBaseModelFreezeOutGenerator*)
   {
      ::StHbtBaseModelFreezeOutGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtBaseModelFreezeOutGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtBaseModelFreezeOutGenerator", "StHbtBaseModelFreezeOutGenerator.h", 18,
                  typeid(::StHbtBaseModelFreezeOutGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtBaseModelFreezeOutGenerator_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtBaseModelFreezeOutGenerator) );
      instance.SetDelete(&delete_StHbtBaseModelFreezeOutGenerator);
      instance.SetDeleteArray(&deleteArray_StHbtBaseModelFreezeOutGenerator);
      instance.SetDestructor(&destruct_StHbtBaseModelFreezeOutGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtBaseModelFreezeOutGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtBaseModelFreezeOutGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtBaseModelFreezeOutGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtBaseModelFreezeOutGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtBaseModelFreezeOutGenerator*>(nullptr))->GetClass();
      StHbtBaseModelFreezeOutGenerator_TClassManip(theClass);
   return theClass;
   }

   static void StHbtBaseModelFreezeOutGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtBaseModelWeightGenerator_Dictionary();
   static void StHbtBaseModelWeightGenerator_TClassManip(TClass*);
   static void delete_StHbtBaseModelWeightGenerator(void *p);
   static void deleteArray_StHbtBaseModelWeightGenerator(void *p);
   static void destruct_StHbtBaseModelWeightGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtBaseModelWeightGenerator*)
   {
      ::StHbtBaseModelWeightGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtBaseModelWeightGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtBaseModelWeightGenerator", "StHbtBaseModelWeightGenerator.h", 18,
                  typeid(::StHbtBaseModelWeightGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtBaseModelWeightGenerator_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtBaseModelWeightGenerator) );
      instance.SetDelete(&delete_StHbtBaseModelWeightGenerator);
      instance.SetDeleteArray(&deleteArray_StHbtBaseModelWeightGenerator);
      instance.SetDestructor(&destruct_StHbtBaseModelWeightGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtBaseModelWeightGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtBaseModelWeightGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtBaseModelWeightGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtBaseModelWeightGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtBaseModelWeightGenerator*>(nullptr))->GetClass();
      StHbtBaseModelWeightGenerator_TClassManip(theClass);
   return theClass;
   }

   static void StHbtBaseModelWeightGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtLikeSignAnalysis_Dictionary();
   static void StHbtLikeSignAnalysis_TClassManip(TClass*);
   static void *new_StHbtLikeSignAnalysis(void *p = nullptr);
   static void *newArray_StHbtLikeSignAnalysis(Long_t size, void *p);
   static void delete_StHbtLikeSignAnalysis(void *p);
   static void deleteArray_StHbtLikeSignAnalysis(void *p);
   static void destruct_StHbtLikeSignAnalysis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtLikeSignAnalysis*)
   {
      ::StHbtLikeSignAnalysis *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtLikeSignAnalysis));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtLikeSignAnalysis", "StHbtLikeSignAnalysis.h", 25,
                  typeid(::StHbtLikeSignAnalysis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtLikeSignAnalysis_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtLikeSignAnalysis) );
      instance.SetNew(&new_StHbtLikeSignAnalysis);
      instance.SetNewArray(&newArray_StHbtLikeSignAnalysis);
      instance.SetDelete(&delete_StHbtLikeSignAnalysis);
      instance.SetDeleteArray(&deleteArray_StHbtLikeSignAnalysis);
      instance.SetDestructor(&destruct_StHbtLikeSignAnalysis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtLikeSignAnalysis*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtLikeSignAnalysis*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtLikeSignAnalysis*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtLikeSignAnalysis_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtLikeSignAnalysis*>(nullptr))->GetClass();
      StHbtLikeSignAnalysis_TClassManip(theClass);
   return theClass;
   }

   static void StHbtLikeSignAnalysis_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtManager_Dictionary();
   static void StHbtManager_TClassManip(TClass*);
   static void *new_StHbtManager(void *p = nullptr);
   static void *newArray_StHbtManager(Long_t size, void *p);
   static void delete_StHbtManager(void *p);
   static void deleteArray_StHbtManager(void *p);
   static void destruct_StHbtManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtManager*)
   {
      ::StHbtManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtManager));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtManager", "StHbtManager.h", 43,
                  typeid(::StHbtManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtManager_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtManager) );
      instance.SetNew(&new_StHbtManager);
      instance.SetNewArray(&newArray_StHbtManager);
      instance.SetDelete(&delete_StHbtManager);
      instance.SetDeleteArray(&deleteArray_StHbtManager);
      instance.SetDestructor(&destruct_StHbtManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtManager*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtManager*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtManager*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtManager_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtManager*>(nullptr))->GetClass();
      StHbtManager_TClassManip(theClass);
   return theClass;
   }

   static void StHbtManager_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtMaker_Dictionary();
   static void StHbtMaker_TClassManip(TClass*);
   static void *new_StHbtMaker(void *p = nullptr);
   static void *newArray_StHbtMaker(Long_t size, void *p);
   static void delete_StHbtMaker(void *p);
   static void deleteArray_StHbtMaker(void *p);
   static void destruct_StHbtMaker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtMaker*)
   {
      ::StHbtMaker *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtMaker));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtMaker", "StHbtMaker.h", 22,
                  typeid(::StHbtMaker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtMaker_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtMaker) );
      instance.SetNew(&new_StHbtMaker);
      instance.SetNewArray(&newArray_StHbtMaker);
      instance.SetDelete(&delete_StHbtMaker);
      instance.SetDeleteArray(&deleteArray_StHbtMaker);
      instance.SetDestructor(&destruct_StHbtMaker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtMaker*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtMaker*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtMaker*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtMaker_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtMaker*>(nullptr))->GetClass();
      StHbtMaker_TClassManip(theClass);
   return theClass;
   }

   static void StHbtMaker_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtModelGausLCMSFreezeOutGenerator_Dictionary();
   static void StHbtModelGausLCMSFreezeOutGenerator_TClassManip(TClass*);
   static void *new_StHbtModelGausLCMSFreezeOutGenerator(void *p = nullptr);
   static void *newArray_StHbtModelGausLCMSFreezeOutGenerator(Long_t size, void *p);
   static void delete_StHbtModelGausLCMSFreezeOutGenerator(void *p);
   static void deleteArray_StHbtModelGausLCMSFreezeOutGenerator(void *p);
   static void destruct_StHbtModelGausLCMSFreezeOutGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtModelGausLCMSFreezeOutGenerator*)
   {
      ::StHbtModelGausLCMSFreezeOutGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtModelGausLCMSFreezeOutGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtModelGausLCMSFreezeOutGenerator", "StHbtModelGausLCMSFreezeOutGenerator.h", 18,
                  typeid(::StHbtModelGausLCMSFreezeOutGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtModelGausLCMSFreezeOutGenerator_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtModelGausLCMSFreezeOutGenerator) );
      instance.SetNew(&new_StHbtModelGausLCMSFreezeOutGenerator);
      instance.SetNewArray(&newArray_StHbtModelGausLCMSFreezeOutGenerator);
      instance.SetDelete(&delete_StHbtModelGausLCMSFreezeOutGenerator);
      instance.SetDeleteArray(&deleteArray_StHbtModelGausLCMSFreezeOutGenerator);
      instance.SetDestructor(&destruct_StHbtModelGausLCMSFreezeOutGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtModelGausLCMSFreezeOutGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtModelGausLCMSFreezeOutGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtModelGausLCMSFreezeOutGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtModelGausLCMSFreezeOutGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtModelGausLCMSFreezeOutGenerator*>(nullptr))->GetClass();
      StHbtModelGausLCMSFreezeOutGenerator_TClassManip(theClass);
   return theClass;
   }

   static void StHbtModelGausLCMSFreezeOutGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtModelHiddenInfo_Dictionary();
   static void StHbtModelHiddenInfo_TClassManip(TClass*);
   static void *new_StHbtModelHiddenInfo(void *p = nullptr);
   static void *newArray_StHbtModelHiddenInfo(Long_t size, void *p);
   static void delete_StHbtModelHiddenInfo(void *p);
   static void deleteArray_StHbtModelHiddenInfo(void *p);
   static void destruct_StHbtModelHiddenInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtModelHiddenInfo*)
   {
      ::StHbtModelHiddenInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtModelHiddenInfo));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtModelHiddenInfo", "StHbtModelHiddenInfo.h", 27,
                  typeid(::StHbtModelHiddenInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtModelHiddenInfo_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtModelHiddenInfo) );
      instance.SetNew(&new_StHbtModelHiddenInfo);
      instance.SetNewArray(&newArray_StHbtModelHiddenInfo);
      instance.SetDelete(&delete_StHbtModelHiddenInfo);
      instance.SetDeleteArray(&deleteArray_StHbtModelHiddenInfo);
      instance.SetDestructor(&destruct_StHbtModelHiddenInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtModelHiddenInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtModelHiddenInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtModelHiddenInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtModelHiddenInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtModelHiddenInfo*>(nullptr))->GetClass();
      StHbtModelHiddenInfo_TClassManip(theClass);
   return theClass;
   }

   static void StHbtModelHiddenInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtModelManager_Dictionary();
   static void StHbtModelManager_TClassManip(TClass*);
   static void *new_StHbtModelManager(void *p = nullptr);
   static void *newArray_StHbtModelManager(Long_t size, void *p);
   static void delete_StHbtModelManager(void *p);
   static void deleteArray_StHbtModelManager(void *p);
   static void destruct_StHbtModelManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtModelManager*)
   {
      ::StHbtModelManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtModelManager));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtModelManager", "StHbtModelManager.h", 21,
                  typeid(::StHbtModelManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtModelManager_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtModelManager) );
      instance.SetNew(&new_StHbtModelManager);
      instance.SetNewArray(&newArray_StHbtModelManager);
      instance.SetDelete(&delete_StHbtModelManager);
      instance.SetDeleteArray(&deleteArray_StHbtModelManager);
      instance.SetDestructor(&destruct_StHbtModelManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtModelManager*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtModelManager*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtModelManager*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtModelManager_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtModelManager*>(nullptr))->GetClass();
      StHbtModelManager_TClassManip(theClass);
   return theClass;
   }

   static void StHbtModelManager_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtModelWeightGeneratorLednicky_Dictionary();
   static void StHbtModelWeightGeneratorLednicky_TClassManip(TClass*);
   static void *new_StHbtModelWeightGeneratorLednicky(void *p = nullptr);
   static void *newArray_StHbtModelWeightGeneratorLednicky(Long_t size, void *p);
   static void delete_StHbtModelWeightGeneratorLednicky(void *p);
   static void deleteArray_StHbtModelWeightGeneratorLednicky(void *p);
   static void destruct_StHbtModelWeightGeneratorLednicky(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtModelWeightGeneratorLednicky*)
   {
      ::StHbtModelWeightGeneratorLednicky *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtModelWeightGeneratorLednicky));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtModelWeightGeneratorLednicky", "StHbtModelWeightGeneratorLednicky.h", 16,
                  typeid(::StHbtModelWeightGeneratorLednicky), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtModelWeightGeneratorLednicky_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtModelWeightGeneratorLednicky) );
      instance.SetNew(&new_StHbtModelWeightGeneratorLednicky);
      instance.SetNewArray(&newArray_StHbtModelWeightGeneratorLednicky);
      instance.SetDelete(&delete_StHbtModelWeightGeneratorLednicky);
      instance.SetDeleteArray(&deleteArray_StHbtModelWeightGeneratorLednicky);
      instance.SetDestructor(&destruct_StHbtModelWeightGeneratorLednicky);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtModelWeightGeneratorLednicky*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtModelWeightGeneratorLednicky*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtModelWeightGeneratorLednicky*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtModelWeightGeneratorLednicky_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtModelWeightGeneratorLednicky*>(nullptr))->GetClass();
      StHbtModelWeightGeneratorLednicky_TClassManip(theClass);
   return theClass;
   }

   static void StHbtModelWeightGeneratorLednicky_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtBaseTrackCut_Dictionary();
   static void StHbtBaseTrackCut_TClassManip(TClass*);
   static void delete_StHbtBaseTrackCut(void *p);
   static void deleteArray_StHbtBaseTrackCut(void *p);
   static void destruct_StHbtBaseTrackCut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtBaseTrackCut*)
   {
      ::StHbtBaseTrackCut *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtBaseTrackCut));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtBaseTrackCut", "StHbtBaseTrackCut.h", 20,
                  typeid(::StHbtBaseTrackCut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtBaseTrackCut_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtBaseTrackCut) );
      instance.SetDelete(&delete_StHbtBaseTrackCut);
      instance.SetDeleteArray(&deleteArray_StHbtBaseTrackCut);
      instance.SetDestructor(&destruct_StHbtBaseTrackCut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtBaseTrackCut*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtBaseTrackCut*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtBaseTrackCut*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtBaseTrackCut_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtBaseTrackCut*>(nullptr))->GetClass();
      StHbtBaseTrackCut_TClassManip(theClass);
   return theClass;
   }

   static void StHbtBaseTrackCut_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtMultiTrackCut_Dictionary();
   static void StHbtMultiTrackCut_TClassManip(TClass*);
   static void *new_StHbtMultiTrackCut(void *p = nullptr);
   static void *newArray_StHbtMultiTrackCut(Long_t size, void *p);
   static void delete_StHbtMultiTrackCut(void *p);
   static void deleteArray_StHbtMultiTrackCut(void *p);
   static void destruct_StHbtMultiTrackCut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtMultiTrackCut*)
   {
      ::StHbtMultiTrackCut *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtMultiTrackCut));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtMultiTrackCut", "StHbtMultiTrackCut.h", 22,
                  typeid(::StHbtMultiTrackCut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtMultiTrackCut_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtMultiTrackCut) );
      instance.SetNew(&new_StHbtMultiTrackCut);
      instance.SetNewArray(&newArray_StHbtMultiTrackCut);
      instance.SetDelete(&delete_StHbtMultiTrackCut);
      instance.SetDeleteArray(&deleteArray_StHbtMultiTrackCut);
      instance.SetDestructor(&destruct_StHbtMultiTrackCut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtMultiTrackCut*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtMultiTrackCut*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtMultiTrackCut*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtMultiTrackCut_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtMultiTrackCut*>(nullptr))->GetClass();
      StHbtMultiTrackCut_TClassManip(theClass);
   return theClass;
   }

   static void StHbtMultiTrackCut_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StHbtPicoEventCollectionVectorHideAway_Dictionary();
   static void StHbtPicoEventCollectionVectorHideAway_TClassManip(TClass*);
   static void *new_StHbtPicoEventCollectionVectorHideAway(void *p = nullptr);
   static void *newArray_StHbtPicoEventCollectionVectorHideAway(Long_t size, void *p);
   static void delete_StHbtPicoEventCollectionVectorHideAway(void *p);
   static void deleteArray_StHbtPicoEventCollectionVectorHideAway(void *p);
   static void destruct_StHbtPicoEventCollectionVectorHideAway(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StHbtPicoEventCollectionVectorHideAway*)
   {
      ::StHbtPicoEventCollectionVectorHideAway *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StHbtPicoEventCollectionVectorHideAway));
      static ::ROOT::TGenericClassInfo 
         instance("StHbtPicoEventCollectionVectorHideAway", "StHbtPicoEventCollectionVectorHideAway.h", 24,
                  typeid(::StHbtPicoEventCollectionVectorHideAway), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StHbtPicoEventCollectionVectorHideAway_Dictionary, isa_proxy, 4,
                  sizeof(::StHbtPicoEventCollectionVectorHideAway) );
      instance.SetNew(&new_StHbtPicoEventCollectionVectorHideAway);
      instance.SetNewArray(&newArray_StHbtPicoEventCollectionVectorHideAway);
      instance.SetDelete(&delete_StHbtPicoEventCollectionVectorHideAway);
      instance.SetDeleteArray(&deleteArray_StHbtPicoEventCollectionVectorHideAway);
      instance.SetDestructor(&destruct_StHbtPicoEventCollectionVectorHideAway);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StHbtPicoEventCollectionVectorHideAway*)
   {
      return GenerateInitInstanceLocal(static_cast<::StHbtPicoEventCollectionVectorHideAway*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StHbtPicoEventCollectionVectorHideAway*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StHbtPicoEventCollectionVectorHideAway_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StHbtPicoEventCollectionVectorHideAway*>(nullptr))->GetClass();
      StHbtPicoEventCollectionVectorHideAway_TClassManip(theClass);
   return theClass;
   }

   static void StHbtPicoEventCollectionVectorHideAway_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtHelix(void *p) {
      return  p ? new(p) ::StHbtHelix : new ::StHbtHelix;
   }
   static void *newArray_StHbtHelix(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtHelix[nElements] : new ::StHbtHelix[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtHelix(void *p) {
      delete (static_cast<::StHbtHelix*>(p));
   }
   static void deleteArray_StHbtHelix(void *p) {
      delete [] (static_cast<::StHbtHelix*>(p));
   }
   static void destruct_StHbtHelix(void *p) {
      typedef ::StHbtHelix current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtHelix

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtPhysicalHelix(void *p) {
      return  p ? new(p) ::StHbtPhysicalHelix : new ::StHbtPhysicalHelix;
   }
   static void *newArray_StHbtPhysicalHelix(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtPhysicalHelix[nElements] : new ::StHbtPhysicalHelix[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtPhysicalHelix(void *p) {
      delete (static_cast<::StHbtPhysicalHelix*>(p));
   }
   static void deleteArray_StHbtPhysicalHelix(void *p) {
      delete [] (static_cast<::StHbtPhysicalHelix*>(p));
   }
   static void destruct_StHbtPhysicalHelix(void *p) {
      typedef ::StHbtPhysicalHelix current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtPhysicalHelix

namespace ROOT {
   // Wrapper around operator delete
   static void delete_StHbtBaseAnalysis(void *p) {
      delete (static_cast<::StHbtBaseAnalysis*>(p));
   }
   static void deleteArray_StHbtBaseAnalysis(void *p) {
      delete [] (static_cast<::StHbtBaseAnalysis*>(p));
   }
   static void destruct_StHbtBaseAnalysis(void *p) {
      typedef ::StHbtBaseAnalysis current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtBaseAnalysis

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtTrack(void *p) {
      return  p ? new(p) ::StHbtTrack : new ::StHbtTrack;
   }
   static void *newArray_StHbtTrack(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtTrack[nElements] : new ::StHbtTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtTrack(void *p) {
      delete (static_cast<::StHbtTrack*>(p));
   }
   static void deleteArray_StHbtTrack(void *p) {
      delete [] (static_cast<::StHbtTrack*>(p));
   }
   static void destruct_StHbtTrack(void *p) {
      typedef ::StHbtTrack current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtTrack

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtV0(void *p) {
      return  p ? new(p) ::StHbtV0 : new ::StHbtV0;
   }
   static void *newArray_StHbtV0(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtV0[nElements] : new ::StHbtV0[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtV0(void *p) {
      delete (static_cast<::StHbtV0*>(p));
   }
   static void deleteArray_StHbtV0(void *p) {
      delete [] (static_cast<::StHbtV0*>(p));
   }
   static void destruct_StHbtV0(void *p) {
      typedef ::StHbtV0 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtV0

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtXi(void *p) {
      return  p ? new(p) ::StHbtXi : new ::StHbtXi;
   }
   static void *newArray_StHbtXi(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtXi[nElements] : new ::StHbtXi[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtXi(void *p) {
      delete (static_cast<::StHbtXi*>(p));
   }
   static void deleteArray_StHbtXi(void *p) {
      delete [] (static_cast<::StHbtXi*>(p));
   }
   static void destruct_StHbtXi(void *p) {
      typedef ::StHbtXi current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtXi

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtKink(void *p) {
      return  p ? new(p) ::StHbtKink : new ::StHbtKink;
   }
   static void *newArray_StHbtKink(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtKink[nElements] : new ::StHbtKink[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtKink(void *p) {
      delete (static_cast<::StHbtKink*>(p));
   }
   static void deleteArray_StHbtKink(void *p) {
      delete [] (static_cast<::StHbtKink*>(p));
   }
   static void destruct_StHbtKink(void *p) {
      typedef ::StHbtKink current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtKink

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtEvent(void *p) {
      return  p ? new(p) ::StHbtEvent : new ::StHbtEvent;
   }
   static void *newArray_StHbtEvent(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtEvent[nElements] : new ::StHbtEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtEvent(void *p) {
      delete (static_cast<::StHbtEvent*>(p));
   }
   static void deleteArray_StHbtEvent(void *p) {
      delete [] (static_cast<::StHbtEvent*>(p));
   }
   static void destruct_StHbtEvent(void *p) {
      typedef ::StHbtEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtEvent

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtParticle(void *p) {
      return  p ? new(p) ::StHbtParticle : new ::StHbtParticle;
   }
   static void *newArray_StHbtParticle(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtParticle[nElements] : new ::StHbtParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtParticle(void *p) {
      delete (static_cast<::StHbtParticle*>(p));
   }
   static void deleteArray_StHbtParticle(void *p) {
      delete [] (static_cast<::StHbtParticle*>(p));
   }
   static void destruct_StHbtParticle(void *p) {
      typedef ::StHbtParticle current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtParticle

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtPair(void *p) {
      return  p ? new(p) ::StHbtPair : new ::StHbtPair;
   }
   static void *newArray_StHbtPair(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtPair[nElements] : new ::StHbtPair[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtPair(void *p) {
      delete (static_cast<::StHbtPair*>(p));
   }
   static void deleteArray_StHbtPair(void *p) {
      delete [] (static_cast<::StHbtPair*>(p));
   }
   static void destruct_StHbtPair(void *p) {
      typedef ::StHbtPair current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtPair

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtBaseCutMonitor(void *p) {
      return  p ? new(p) ::StHbtBaseCutMonitor : new ::StHbtBaseCutMonitor;
   }
   static void *newArray_StHbtBaseCutMonitor(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtBaseCutMonitor[nElements] : new ::StHbtBaseCutMonitor[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtBaseCutMonitor(void *p) {
      delete (static_cast<::StHbtBaseCutMonitor*>(p));
   }
   static void deleteArray_StHbtBaseCutMonitor(void *p) {
      delete [] (static_cast<::StHbtBaseCutMonitor*>(p));
   }
   static void destruct_StHbtBaseCutMonitor(void *p) {
      typedef ::StHbtBaseCutMonitor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtBaseCutMonitor

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtCutMonitorHandler(void *p) {
      return  p ? new(p) ::StHbtCutMonitorHandler : new ::StHbtCutMonitorHandler;
   }
   static void *newArray_StHbtCutMonitorHandler(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtCutMonitorHandler[nElements] : new ::StHbtCutMonitorHandler[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtCutMonitorHandler(void *p) {
      delete (static_cast<::StHbtCutMonitorHandler*>(p));
   }
   static void deleteArray_StHbtCutMonitorHandler(void *p) {
      delete [] (static_cast<::StHbtCutMonitorHandler*>(p));
   }
   static void destruct_StHbtCutMonitorHandler(void *p) {
      typedef ::StHbtCutMonitorHandler current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtCutMonitorHandler

namespace ROOT {
   // Wrapper around operator delete
   static void delete_StHbtBasePairCut(void *p) {
      delete (static_cast<::StHbtBasePairCut*>(p));
   }
   static void deleteArray_StHbtBasePairCut(void *p) {
      delete [] (static_cast<::StHbtBasePairCut*>(p));
   }
   static void destruct_StHbtBasePairCut(void *p) {
      typedef ::StHbtBasePairCut current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtBasePairCut

namespace ROOT {
   // Wrapper around operator delete
   static void delete_StHbtBaseEventCut(void *p) {
      delete (static_cast<::StHbtBaseEventCut*>(p));
   }
   static void deleteArray_StHbtBaseEventCut(void *p) {
      delete [] (static_cast<::StHbtBaseEventCut*>(p));
   }
   static void destruct_StHbtBaseEventCut(void *p) {
      typedef ::StHbtBaseEventCut current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtBaseEventCut

namespace ROOT {
   // Wrapper around operator delete
   static void delete_StHbtBaseParticleCut(void *p) {
      delete (static_cast<::StHbtBaseParticleCut*>(p));
   }
   static void deleteArray_StHbtBaseParticleCut(void *p) {
      delete [] (static_cast<::StHbtBaseParticleCut*>(p));
   }
   static void destruct_StHbtBaseParticleCut(void *p) {
      typedef ::StHbtBaseParticleCut current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtBaseParticleCut

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtTriplet(void *p) {
      return  p ? new(p) ::StHbtTriplet : new ::StHbtTriplet;
   }
   static void *newArray_StHbtTriplet(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtTriplet[nElements] : new ::StHbtTriplet[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtTriplet(void *p) {
      delete (static_cast<::StHbtTriplet*>(p));
   }
   static void deleteArray_StHbtTriplet(void *p) {
      delete [] (static_cast<::StHbtTriplet*>(p));
   }
   static void destruct_StHbtTriplet(void *p) {
      typedef ::StHbtTriplet current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtTriplet

namespace ROOT {
   // Wrapper around operator delete
   static void delete_StHbtBaseCorrFctn(void *p) {
      delete (static_cast<::StHbtBaseCorrFctn*>(p));
   }
   static void deleteArray_StHbtBaseCorrFctn(void *p) {
      delete [] (static_cast<::StHbtBaseCorrFctn*>(p));
   }
   static void destruct_StHbtBaseCorrFctn(void *p) {
      typedef ::StHbtBaseCorrFctn current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtBaseCorrFctn

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtPicoEvent(void *p) {
      return  p ? new(p) ::StHbtPicoEvent : new ::StHbtPicoEvent;
   }
   static void *newArray_StHbtPicoEvent(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtPicoEvent[nElements] : new ::StHbtPicoEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtPicoEvent(void *p) {
      delete (static_cast<::StHbtPicoEvent*>(p));
   }
   static void deleteArray_StHbtPicoEvent(void *p) {
      delete [] (static_cast<::StHbtPicoEvent*>(p));
   }
   static void destruct_StHbtPicoEvent(void *p) {
      typedef ::StHbtPicoEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtPicoEvent

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtAnalysis(void *p) {
      return  p ? new(p) ::StHbtAnalysis : new ::StHbtAnalysis;
   }
   static void *newArray_StHbtAnalysis(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtAnalysis[nElements] : new ::StHbtAnalysis[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtAnalysis(void *p) {
      delete (static_cast<::StHbtAnalysis*>(p));
   }
   static void deleteArray_StHbtAnalysis(void *p) {
      delete [] (static_cast<::StHbtAnalysis*>(p));
   }
   static void destruct_StHbtAnalysis(void *p) {
      typedef ::StHbtAnalysis current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtAnalysis

namespace ROOT {
   // Wrapper around operator delete
   static void delete_StHbtBaseEventReader(void *p) {
      delete (static_cast<::StHbtBaseEventReader*>(p));
   }
   static void deleteArray_StHbtBaseEventReader(void *p) {
      delete [] (static_cast<::StHbtBaseEventReader*>(p));
   }
   static void destruct_StHbtBaseEventReader(void *p) {
      typedef ::StHbtBaseEventReader current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtBaseEventReader

namespace ROOT {
   // Wrapper around operator delete
   static void delete_StHbtBaseModelFreezeOutGenerator(void *p) {
      delete (static_cast<::StHbtBaseModelFreezeOutGenerator*>(p));
   }
   static void deleteArray_StHbtBaseModelFreezeOutGenerator(void *p) {
      delete [] (static_cast<::StHbtBaseModelFreezeOutGenerator*>(p));
   }
   static void destruct_StHbtBaseModelFreezeOutGenerator(void *p) {
      typedef ::StHbtBaseModelFreezeOutGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtBaseModelFreezeOutGenerator

namespace ROOT {
   // Wrapper around operator delete
   static void delete_StHbtBaseModelWeightGenerator(void *p) {
      delete (static_cast<::StHbtBaseModelWeightGenerator*>(p));
   }
   static void deleteArray_StHbtBaseModelWeightGenerator(void *p) {
      delete [] (static_cast<::StHbtBaseModelWeightGenerator*>(p));
   }
   static void destruct_StHbtBaseModelWeightGenerator(void *p) {
      typedef ::StHbtBaseModelWeightGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtBaseModelWeightGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtLikeSignAnalysis(void *p) {
      return  p ? new(p) ::StHbtLikeSignAnalysis : new ::StHbtLikeSignAnalysis;
   }
   static void *newArray_StHbtLikeSignAnalysis(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtLikeSignAnalysis[nElements] : new ::StHbtLikeSignAnalysis[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtLikeSignAnalysis(void *p) {
      delete (static_cast<::StHbtLikeSignAnalysis*>(p));
   }
   static void deleteArray_StHbtLikeSignAnalysis(void *p) {
      delete [] (static_cast<::StHbtLikeSignAnalysis*>(p));
   }
   static void destruct_StHbtLikeSignAnalysis(void *p) {
      typedef ::StHbtLikeSignAnalysis current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtLikeSignAnalysis

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtManager(void *p) {
      return  p ? new(p) ::StHbtManager : new ::StHbtManager;
   }
   static void *newArray_StHbtManager(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtManager[nElements] : new ::StHbtManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtManager(void *p) {
      delete (static_cast<::StHbtManager*>(p));
   }
   static void deleteArray_StHbtManager(void *p) {
      delete [] (static_cast<::StHbtManager*>(p));
   }
   static void destruct_StHbtManager(void *p) {
      typedef ::StHbtManager current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtManager

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtMaker(void *p) {
      return  p ? new(p) ::StHbtMaker : new ::StHbtMaker;
   }
   static void *newArray_StHbtMaker(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtMaker[nElements] : new ::StHbtMaker[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtMaker(void *p) {
      delete (static_cast<::StHbtMaker*>(p));
   }
   static void deleteArray_StHbtMaker(void *p) {
      delete [] (static_cast<::StHbtMaker*>(p));
   }
   static void destruct_StHbtMaker(void *p) {
      typedef ::StHbtMaker current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtMaker

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtModelGausLCMSFreezeOutGenerator(void *p) {
      return  p ? new(p) ::StHbtModelGausLCMSFreezeOutGenerator : new ::StHbtModelGausLCMSFreezeOutGenerator;
   }
   static void *newArray_StHbtModelGausLCMSFreezeOutGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtModelGausLCMSFreezeOutGenerator[nElements] : new ::StHbtModelGausLCMSFreezeOutGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtModelGausLCMSFreezeOutGenerator(void *p) {
      delete (static_cast<::StHbtModelGausLCMSFreezeOutGenerator*>(p));
   }
   static void deleteArray_StHbtModelGausLCMSFreezeOutGenerator(void *p) {
      delete [] (static_cast<::StHbtModelGausLCMSFreezeOutGenerator*>(p));
   }
   static void destruct_StHbtModelGausLCMSFreezeOutGenerator(void *p) {
      typedef ::StHbtModelGausLCMSFreezeOutGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtModelGausLCMSFreezeOutGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtModelHiddenInfo(void *p) {
      return  p ? new(p) ::StHbtModelHiddenInfo : new ::StHbtModelHiddenInfo;
   }
   static void *newArray_StHbtModelHiddenInfo(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtModelHiddenInfo[nElements] : new ::StHbtModelHiddenInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtModelHiddenInfo(void *p) {
      delete (static_cast<::StHbtModelHiddenInfo*>(p));
   }
   static void deleteArray_StHbtModelHiddenInfo(void *p) {
      delete [] (static_cast<::StHbtModelHiddenInfo*>(p));
   }
   static void destruct_StHbtModelHiddenInfo(void *p) {
      typedef ::StHbtModelHiddenInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtModelHiddenInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtModelManager(void *p) {
      return  p ? new(p) ::StHbtModelManager : new ::StHbtModelManager;
   }
   static void *newArray_StHbtModelManager(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtModelManager[nElements] : new ::StHbtModelManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtModelManager(void *p) {
      delete (static_cast<::StHbtModelManager*>(p));
   }
   static void deleteArray_StHbtModelManager(void *p) {
      delete [] (static_cast<::StHbtModelManager*>(p));
   }
   static void destruct_StHbtModelManager(void *p) {
      typedef ::StHbtModelManager current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtModelManager

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtModelWeightGeneratorLednicky(void *p) {
      return  p ? new(p) ::StHbtModelWeightGeneratorLednicky : new ::StHbtModelWeightGeneratorLednicky;
   }
   static void *newArray_StHbtModelWeightGeneratorLednicky(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtModelWeightGeneratorLednicky[nElements] : new ::StHbtModelWeightGeneratorLednicky[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtModelWeightGeneratorLednicky(void *p) {
      delete (static_cast<::StHbtModelWeightGeneratorLednicky*>(p));
   }
   static void deleteArray_StHbtModelWeightGeneratorLednicky(void *p) {
      delete [] (static_cast<::StHbtModelWeightGeneratorLednicky*>(p));
   }
   static void destruct_StHbtModelWeightGeneratorLednicky(void *p) {
      typedef ::StHbtModelWeightGeneratorLednicky current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtModelWeightGeneratorLednicky

namespace ROOT {
   // Wrapper around operator delete
   static void delete_StHbtBaseTrackCut(void *p) {
      delete (static_cast<::StHbtBaseTrackCut*>(p));
   }
   static void deleteArray_StHbtBaseTrackCut(void *p) {
      delete [] (static_cast<::StHbtBaseTrackCut*>(p));
   }
   static void destruct_StHbtBaseTrackCut(void *p) {
      typedef ::StHbtBaseTrackCut current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtBaseTrackCut

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtMultiTrackCut(void *p) {
      return  p ? new(p) ::StHbtMultiTrackCut : new ::StHbtMultiTrackCut;
   }
   static void *newArray_StHbtMultiTrackCut(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtMultiTrackCut[nElements] : new ::StHbtMultiTrackCut[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtMultiTrackCut(void *p) {
      delete (static_cast<::StHbtMultiTrackCut*>(p));
   }
   static void deleteArray_StHbtMultiTrackCut(void *p) {
      delete [] (static_cast<::StHbtMultiTrackCut*>(p));
   }
   static void destruct_StHbtMultiTrackCut(void *p) {
      typedef ::StHbtMultiTrackCut current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtMultiTrackCut

namespace ROOT {
   // Wrappers around operator new
   static void *new_StHbtPicoEventCollectionVectorHideAway(void *p) {
      return  p ? new(p) ::StHbtPicoEventCollectionVectorHideAway : new ::StHbtPicoEventCollectionVectorHideAway;
   }
   static void *newArray_StHbtPicoEventCollectionVectorHideAway(Long_t nElements, void *p) {
      return p ? new(p) ::StHbtPicoEventCollectionVectorHideAway[nElements] : new ::StHbtPicoEventCollectionVectorHideAway[nElements];
   }
   // Wrapper around operator delete
   static void delete_StHbtPicoEventCollectionVectorHideAway(void *p) {
      delete (static_cast<::StHbtPicoEventCollectionVectorHideAway*>(p));
   }
   static void deleteArray_StHbtPicoEventCollectionVectorHideAway(void *p) {
      delete [] (static_cast<::StHbtPicoEventCollectionVectorHideAway*>(p));
   }
   static void destruct_StHbtPicoEventCollectionVectorHideAway(void *p) {
      typedef ::StHbtPicoEventCollectionVectorHideAway current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StHbtPicoEventCollectionVectorHideAway

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
   static TClass *vectorlElistlEStHbtPicoEventmUgRmUgR_Dictionary();
   static void vectorlElistlEStHbtPicoEventmUgRmUgR_TClassManip(TClass*);
   static void *new_vectorlElistlEStHbtPicoEventmUgRmUgR(void *p = nullptr);
   static void *newArray_vectorlElistlEStHbtPicoEventmUgRmUgR(Long_t size, void *p);
   static void delete_vectorlElistlEStHbtPicoEventmUgRmUgR(void *p);
   static void deleteArray_vectorlElistlEStHbtPicoEventmUgRmUgR(void *p);
   static void destruct_vectorlElistlEStHbtPicoEventmUgRmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<list<StHbtPicoEvent*>*>*)
   {
      vector<list<StHbtPicoEvent*>*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<list<StHbtPicoEvent*>*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<list<StHbtPicoEvent*>*>", -2, "vector", 389,
                  typeid(vector<list<StHbtPicoEvent*>*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlElistlEStHbtPicoEventmUgRmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<list<StHbtPicoEvent*>*>) );
      instance.SetNew(&new_vectorlElistlEStHbtPicoEventmUgRmUgR);
      instance.SetNewArray(&newArray_vectorlElistlEStHbtPicoEventmUgRmUgR);
      instance.SetDelete(&delete_vectorlElistlEStHbtPicoEventmUgRmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlElistlEStHbtPicoEventmUgRmUgR);
      instance.SetDestructor(&destruct_vectorlElistlEStHbtPicoEventmUgRmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<list<StHbtPicoEvent*>*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<list<StHbtPicoEvent*>*>","std::vector<std::__cxx11::list<StHbtPicoEvent*, std::allocator<StHbtPicoEvent*> >*, std::allocator<std::__cxx11::list<StHbtPicoEvent*, std::allocator<StHbtPicoEvent*> >*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<list<StHbtPicoEvent*>*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElistlEStHbtPicoEventmUgRmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<list<StHbtPicoEvent*>*>*>(nullptr))->GetClass();
      vectorlElistlEStHbtPicoEventmUgRmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElistlEStHbtPicoEventmUgRmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElistlEStHbtPicoEventmUgRmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<list<StHbtPicoEvent*>*> : new vector<list<StHbtPicoEvent*>*>;
   }
   static void *newArray_vectorlElistlEStHbtPicoEventmUgRmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<list<StHbtPicoEvent*>*>[nElements] : new vector<list<StHbtPicoEvent*>*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElistlEStHbtPicoEventmUgRmUgR(void *p) {
      delete (static_cast<vector<list<StHbtPicoEvent*>*>*>(p));
   }
   static void deleteArray_vectorlElistlEStHbtPicoEventmUgRmUgR(void *p) {
      delete [] (static_cast<vector<list<StHbtPicoEvent*>*>*>(p));
   }
   static void destruct_vectorlElistlEStHbtPicoEventmUgRmUgR(void *p) {
      typedef vector<list<StHbtPicoEvent*>*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<list<StHbtPicoEvent*>*>

namespace ROOT {
   static TClass *vectorlEStHbtBaseCutMonitormUgR_Dictionary();
   static void vectorlEStHbtBaseCutMonitormUgR_TClassManip(TClass*);
   static void *new_vectorlEStHbtBaseCutMonitormUgR(void *p = nullptr);
   static void *newArray_vectorlEStHbtBaseCutMonitormUgR(Long_t size, void *p);
   static void delete_vectorlEStHbtBaseCutMonitormUgR(void *p);
   static void deleteArray_vectorlEStHbtBaseCutMonitormUgR(void *p);
   static void destruct_vectorlEStHbtBaseCutMonitormUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<StHbtBaseCutMonitor*>*)
   {
      vector<StHbtBaseCutMonitor*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<StHbtBaseCutMonitor*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<StHbtBaseCutMonitor*>", -2, "vector", 389,
                  typeid(vector<StHbtBaseCutMonitor*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEStHbtBaseCutMonitormUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<StHbtBaseCutMonitor*>) );
      instance.SetNew(&new_vectorlEStHbtBaseCutMonitormUgR);
      instance.SetNewArray(&newArray_vectorlEStHbtBaseCutMonitormUgR);
      instance.SetDelete(&delete_vectorlEStHbtBaseCutMonitormUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEStHbtBaseCutMonitormUgR);
      instance.SetDestructor(&destruct_vectorlEStHbtBaseCutMonitormUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<StHbtBaseCutMonitor*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<StHbtBaseCutMonitor*>","std::vector<StHbtBaseCutMonitor*, std::allocator<StHbtBaseCutMonitor*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<StHbtBaseCutMonitor*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEStHbtBaseCutMonitormUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<StHbtBaseCutMonitor*>*>(nullptr))->GetClass();
      vectorlEStHbtBaseCutMonitormUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEStHbtBaseCutMonitormUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEStHbtBaseCutMonitormUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<StHbtBaseCutMonitor*> : new vector<StHbtBaseCutMonitor*>;
   }
   static void *newArray_vectorlEStHbtBaseCutMonitormUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<StHbtBaseCutMonitor*>[nElements] : new vector<StHbtBaseCutMonitor*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEStHbtBaseCutMonitormUgR(void *p) {
      delete (static_cast<vector<StHbtBaseCutMonitor*>*>(p));
   }
   static void deleteArray_vectorlEStHbtBaseCutMonitormUgR(void *p) {
      delete [] (static_cast<vector<StHbtBaseCutMonitor*>*>(p));
   }
   static void destruct_vectorlEStHbtBaseCutMonitormUgR(void *p) {
      typedef vector<StHbtBaseCutMonitor*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<StHbtBaseCutMonitor*>

namespace ROOT {
   static TClass *listlEStHbtXimUgR_Dictionary();
   static void listlEStHbtXimUgR_TClassManip(TClass*);
   static void *new_listlEStHbtXimUgR(void *p = nullptr);
   static void *newArray_listlEStHbtXimUgR(Long_t size, void *p);
   static void delete_listlEStHbtXimUgR(void *p);
   static void deleteArray_listlEStHbtXimUgR(void *p);
   static void destruct_listlEStHbtXimUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const list<StHbtXi*>*)
   {
      list<StHbtXi*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(list<StHbtXi*>));
      static ::ROOT::TGenericClassInfo 
         instance("list<StHbtXi*>", -2, "list", 557,
                  typeid(list<StHbtXi*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &listlEStHbtXimUgR_Dictionary, isa_proxy, 0,
                  sizeof(list<StHbtXi*>) );
      instance.SetNew(&new_listlEStHbtXimUgR);
      instance.SetNewArray(&newArray_listlEStHbtXimUgR);
      instance.SetDelete(&delete_listlEStHbtXimUgR);
      instance.SetDeleteArray(&deleteArray_listlEStHbtXimUgR);
      instance.SetDestructor(&destruct_listlEStHbtXimUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< list<StHbtXi*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("list<StHbtXi*>","std::__cxx11::list<StHbtXi*, std::allocator<StHbtXi*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const list<StHbtXi*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *listlEStHbtXimUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const list<StHbtXi*>*>(nullptr))->GetClass();
      listlEStHbtXimUgR_TClassManip(theClass);
   return theClass;
   }

   static void listlEStHbtXimUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_listlEStHbtXimUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<StHbtXi*> : new list<StHbtXi*>;
   }
   static void *newArray_listlEStHbtXimUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<StHbtXi*>[nElements] : new list<StHbtXi*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_listlEStHbtXimUgR(void *p) {
      delete (static_cast<list<StHbtXi*>*>(p));
   }
   static void deleteArray_listlEStHbtXimUgR(void *p) {
      delete [] (static_cast<list<StHbtXi*>*>(p));
   }
   static void destruct_listlEStHbtXimUgR(void *p) {
      typedef list<StHbtXi*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class list<StHbtXi*>

namespace ROOT {
   static TClass *listlEStHbtV0mUgR_Dictionary();
   static void listlEStHbtV0mUgR_TClassManip(TClass*);
   static void *new_listlEStHbtV0mUgR(void *p = nullptr);
   static void *newArray_listlEStHbtV0mUgR(Long_t size, void *p);
   static void delete_listlEStHbtV0mUgR(void *p);
   static void deleteArray_listlEStHbtV0mUgR(void *p);
   static void destruct_listlEStHbtV0mUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const list<StHbtV0*>*)
   {
      list<StHbtV0*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(list<StHbtV0*>));
      static ::ROOT::TGenericClassInfo 
         instance("list<StHbtV0*>", -2, "list", 557,
                  typeid(list<StHbtV0*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &listlEStHbtV0mUgR_Dictionary, isa_proxy, 0,
                  sizeof(list<StHbtV0*>) );
      instance.SetNew(&new_listlEStHbtV0mUgR);
      instance.SetNewArray(&newArray_listlEStHbtV0mUgR);
      instance.SetDelete(&delete_listlEStHbtV0mUgR);
      instance.SetDeleteArray(&deleteArray_listlEStHbtV0mUgR);
      instance.SetDestructor(&destruct_listlEStHbtV0mUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< list<StHbtV0*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("list<StHbtV0*>","std::__cxx11::list<StHbtV0*, std::allocator<StHbtV0*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const list<StHbtV0*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *listlEStHbtV0mUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const list<StHbtV0*>*>(nullptr))->GetClass();
      listlEStHbtV0mUgR_TClassManip(theClass);
   return theClass;
   }

   static void listlEStHbtV0mUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_listlEStHbtV0mUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<StHbtV0*> : new list<StHbtV0*>;
   }
   static void *newArray_listlEStHbtV0mUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<StHbtV0*>[nElements] : new list<StHbtV0*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_listlEStHbtV0mUgR(void *p) {
      delete (static_cast<list<StHbtV0*>*>(p));
   }
   static void deleteArray_listlEStHbtV0mUgR(void *p) {
      delete [] (static_cast<list<StHbtV0*>*>(p));
   }
   static void destruct_listlEStHbtV0mUgR(void *p) {
      typedef list<StHbtV0*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class list<StHbtV0*>

namespace ROOT {
   static TClass *listlEStHbtTrackmUgR_Dictionary();
   static void listlEStHbtTrackmUgR_TClassManip(TClass*);
   static void *new_listlEStHbtTrackmUgR(void *p = nullptr);
   static void *newArray_listlEStHbtTrackmUgR(Long_t size, void *p);
   static void delete_listlEStHbtTrackmUgR(void *p);
   static void deleteArray_listlEStHbtTrackmUgR(void *p);
   static void destruct_listlEStHbtTrackmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const list<StHbtTrack*>*)
   {
      list<StHbtTrack*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(list<StHbtTrack*>));
      static ::ROOT::TGenericClassInfo 
         instance("list<StHbtTrack*>", -2, "list", 557,
                  typeid(list<StHbtTrack*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &listlEStHbtTrackmUgR_Dictionary, isa_proxy, 0,
                  sizeof(list<StHbtTrack*>) );
      instance.SetNew(&new_listlEStHbtTrackmUgR);
      instance.SetNewArray(&newArray_listlEStHbtTrackmUgR);
      instance.SetDelete(&delete_listlEStHbtTrackmUgR);
      instance.SetDeleteArray(&deleteArray_listlEStHbtTrackmUgR);
      instance.SetDestructor(&destruct_listlEStHbtTrackmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< list<StHbtTrack*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("list<StHbtTrack*>","std::__cxx11::list<StHbtTrack*, std::allocator<StHbtTrack*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const list<StHbtTrack*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *listlEStHbtTrackmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const list<StHbtTrack*>*>(nullptr))->GetClass();
      listlEStHbtTrackmUgR_TClassManip(theClass);
   return theClass;
   }

   static void listlEStHbtTrackmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_listlEStHbtTrackmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<StHbtTrack*> : new list<StHbtTrack*>;
   }
   static void *newArray_listlEStHbtTrackmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<StHbtTrack*>[nElements] : new list<StHbtTrack*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_listlEStHbtTrackmUgR(void *p) {
      delete (static_cast<list<StHbtTrack*>*>(p));
   }
   static void deleteArray_listlEStHbtTrackmUgR(void *p) {
      delete [] (static_cast<list<StHbtTrack*>*>(p));
   }
   static void destruct_listlEStHbtTrackmUgR(void *p) {
      typedef list<StHbtTrack*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class list<StHbtTrack*>

namespace ROOT {
   static TClass *listlEStHbtPicoEventmUgR_Dictionary();
   static void listlEStHbtPicoEventmUgR_TClassManip(TClass*);
   static void *new_listlEStHbtPicoEventmUgR(void *p = nullptr);
   static void *newArray_listlEStHbtPicoEventmUgR(Long_t size, void *p);
   static void delete_listlEStHbtPicoEventmUgR(void *p);
   static void deleteArray_listlEStHbtPicoEventmUgR(void *p);
   static void destruct_listlEStHbtPicoEventmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const list<StHbtPicoEvent*>*)
   {
      list<StHbtPicoEvent*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(list<StHbtPicoEvent*>));
      static ::ROOT::TGenericClassInfo 
         instance("list<StHbtPicoEvent*>", -2, "list", 557,
                  typeid(list<StHbtPicoEvent*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &listlEStHbtPicoEventmUgR_Dictionary, isa_proxy, 0,
                  sizeof(list<StHbtPicoEvent*>) );
      instance.SetNew(&new_listlEStHbtPicoEventmUgR);
      instance.SetNewArray(&newArray_listlEStHbtPicoEventmUgR);
      instance.SetDelete(&delete_listlEStHbtPicoEventmUgR);
      instance.SetDeleteArray(&deleteArray_listlEStHbtPicoEventmUgR);
      instance.SetDestructor(&destruct_listlEStHbtPicoEventmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< list<StHbtPicoEvent*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("list<StHbtPicoEvent*>","std::__cxx11::list<StHbtPicoEvent*, std::allocator<StHbtPicoEvent*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const list<StHbtPicoEvent*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *listlEStHbtPicoEventmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const list<StHbtPicoEvent*>*>(nullptr))->GetClass();
      listlEStHbtPicoEventmUgR_TClassManip(theClass);
   return theClass;
   }

   static void listlEStHbtPicoEventmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_listlEStHbtPicoEventmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<StHbtPicoEvent*> : new list<StHbtPicoEvent*>;
   }
   static void *newArray_listlEStHbtPicoEventmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<StHbtPicoEvent*>[nElements] : new list<StHbtPicoEvent*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_listlEStHbtPicoEventmUgR(void *p) {
      delete (static_cast<list<StHbtPicoEvent*>*>(p));
   }
   static void deleteArray_listlEStHbtPicoEventmUgR(void *p) {
      delete [] (static_cast<list<StHbtPicoEvent*>*>(p));
   }
   static void destruct_listlEStHbtPicoEventmUgR(void *p) {
      typedef list<StHbtPicoEvent*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class list<StHbtPicoEvent*>

namespace ROOT {
   static TClass *listlEStHbtParticlemUgR_Dictionary();
   static void listlEStHbtParticlemUgR_TClassManip(TClass*);
   static void *new_listlEStHbtParticlemUgR(void *p = nullptr);
   static void *newArray_listlEStHbtParticlemUgR(Long_t size, void *p);
   static void delete_listlEStHbtParticlemUgR(void *p);
   static void deleteArray_listlEStHbtParticlemUgR(void *p);
   static void destruct_listlEStHbtParticlemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const list<StHbtParticle*>*)
   {
      list<StHbtParticle*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(list<StHbtParticle*>));
      static ::ROOT::TGenericClassInfo 
         instance("list<StHbtParticle*>", -2, "list", 557,
                  typeid(list<StHbtParticle*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &listlEStHbtParticlemUgR_Dictionary, isa_proxy, 0,
                  sizeof(list<StHbtParticle*>) );
      instance.SetNew(&new_listlEStHbtParticlemUgR);
      instance.SetNewArray(&newArray_listlEStHbtParticlemUgR);
      instance.SetDelete(&delete_listlEStHbtParticlemUgR);
      instance.SetDeleteArray(&deleteArray_listlEStHbtParticlemUgR);
      instance.SetDestructor(&destruct_listlEStHbtParticlemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< list<StHbtParticle*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("list<StHbtParticle*>","std::__cxx11::list<StHbtParticle*, std::allocator<StHbtParticle*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const list<StHbtParticle*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *listlEStHbtParticlemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const list<StHbtParticle*>*>(nullptr))->GetClass();
      listlEStHbtParticlemUgR_TClassManip(theClass);
   return theClass;
   }

   static void listlEStHbtParticlemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_listlEStHbtParticlemUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<StHbtParticle*> : new list<StHbtParticle*>;
   }
   static void *newArray_listlEStHbtParticlemUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<StHbtParticle*>[nElements] : new list<StHbtParticle*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_listlEStHbtParticlemUgR(void *p) {
      delete (static_cast<list<StHbtParticle*>*>(p));
   }
   static void deleteArray_listlEStHbtParticlemUgR(void *p) {
      delete [] (static_cast<list<StHbtParticle*>*>(p));
   }
   static void destruct_listlEStHbtParticlemUgR(void *p) {
      typedef list<StHbtParticle*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class list<StHbtParticle*>

namespace ROOT {
   static TClass *listlEStHbtKinkmUgR_Dictionary();
   static void listlEStHbtKinkmUgR_TClassManip(TClass*);
   static void *new_listlEStHbtKinkmUgR(void *p = nullptr);
   static void *newArray_listlEStHbtKinkmUgR(Long_t size, void *p);
   static void delete_listlEStHbtKinkmUgR(void *p);
   static void deleteArray_listlEStHbtKinkmUgR(void *p);
   static void destruct_listlEStHbtKinkmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const list<StHbtKink*>*)
   {
      list<StHbtKink*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(list<StHbtKink*>));
      static ::ROOT::TGenericClassInfo 
         instance("list<StHbtKink*>", -2, "list", 557,
                  typeid(list<StHbtKink*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &listlEStHbtKinkmUgR_Dictionary, isa_proxy, 0,
                  sizeof(list<StHbtKink*>) );
      instance.SetNew(&new_listlEStHbtKinkmUgR);
      instance.SetNewArray(&newArray_listlEStHbtKinkmUgR);
      instance.SetDelete(&delete_listlEStHbtKinkmUgR);
      instance.SetDeleteArray(&deleteArray_listlEStHbtKinkmUgR);
      instance.SetDestructor(&destruct_listlEStHbtKinkmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< list<StHbtKink*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("list<StHbtKink*>","std::__cxx11::list<StHbtKink*, std::allocator<StHbtKink*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const list<StHbtKink*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *listlEStHbtKinkmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const list<StHbtKink*>*>(nullptr))->GetClass();
      listlEStHbtKinkmUgR_TClassManip(theClass);
   return theClass;
   }

   static void listlEStHbtKinkmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_listlEStHbtKinkmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<StHbtKink*> : new list<StHbtKink*>;
   }
   static void *newArray_listlEStHbtKinkmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<StHbtKink*>[nElements] : new list<StHbtKink*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_listlEStHbtKinkmUgR(void *p) {
      delete (static_cast<list<StHbtKink*>*>(p));
   }
   static void deleteArray_listlEStHbtKinkmUgR(void *p) {
      delete [] (static_cast<list<StHbtKink*>*>(p));
   }
   static void destruct_listlEStHbtKinkmUgR(void *p) {
      typedef list<StHbtKink*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class list<StHbtKink*>

namespace ROOT {
   static TClass *listlEStHbtBaseTrackCutmUgR_Dictionary();
   static void listlEStHbtBaseTrackCutmUgR_TClassManip(TClass*);
   static void *new_listlEStHbtBaseTrackCutmUgR(void *p = nullptr);
   static void *newArray_listlEStHbtBaseTrackCutmUgR(Long_t size, void *p);
   static void delete_listlEStHbtBaseTrackCutmUgR(void *p);
   static void deleteArray_listlEStHbtBaseTrackCutmUgR(void *p);
   static void destruct_listlEStHbtBaseTrackCutmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const list<StHbtBaseTrackCut*>*)
   {
      list<StHbtBaseTrackCut*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(list<StHbtBaseTrackCut*>));
      static ::ROOT::TGenericClassInfo 
         instance("list<StHbtBaseTrackCut*>", -2, "list", 557,
                  typeid(list<StHbtBaseTrackCut*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &listlEStHbtBaseTrackCutmUgR_Dictionary, isa_proxy, 0,
                  sizeof(list<StHbtBaseTrackCut*>) );
      instance.SetNew(&new_listlEStHbtBaseTrackCutmUgR);
      instance.SetNewArray(&newArray_listlEStHbtBaseTrackCutmUgR);
      instance.SetDelete(&delete_listlEStHbtBaseTrackCutmUgR);
      instance.SetDeleteArray(&deleteArray_listlEStHbtBaseTrackCutmUgR);
      instance.SetDestructor(&destruct_listlEStHbtBaseTrackCutmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< list<StHbtBaseTrackCut*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("list<StHbtBaseTrackCut*>","std::__cxx11::list<StHbtBaseTrackCut*, std::allocator<StHbtBaseTrackCut*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const list<StHbtBaseTrackCut*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *listlEStHbtBaseTrackCutmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const list<StHbtBaseTrackCut*>*>(nullptr))->GetClass();
      listlEStHbtBaseTrackCutmUgR_TClassManip(theClass);
   return theClass;
   }

   static void listlEStHbtBaseTrackCutmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_listlEStHbtBaseTrackCutmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<StHbtBaseTrackCut*> : new list<StHbtBaseTrackCut*>;
   }
   static void *newArray_listlEStHbtBaseTrackCutmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<StHbtBaseTrackCut*>[nElements] : new list<StHbtBaseTrackCut*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_listlEStHbtBaseTrackCutmUgR(void *p) {
      delete (static_cast<list<StHbtBaseTrackCut*>*>(p));
   }
   static void deleteArray_listlEStHbtBaseTrackCutmUgR(void *p) {
      delete [] (static_cast<list<StHbtBaseTrackCut*>*>(p));
   }
   static void destruct_listlEStHbtBaseTrackCutmUgR(void *p) {
      typedef list<StHbtBaseTrackCut*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class list<StHbtBaseTrackCut*>

namespace ROOT {
   static TClass *listlEStHbtBaseEventReadermUgR_Dictionary();
   static void listlEStHbtBaseEventReadermUgR_TClassManip(TClass*);
   static void *new_listlEStHbtBaseEventReadermUgR(void *p = nullptr);
   static void *newArray_listlEStHbtBaseEventReadermUgR(Long_t size, void *p);
   static void delete_listlEStHbtBaseEventReadermUgR(void *p);
   static void deleteArray_listlEStHbtBaseEventReadermUgR(void *p);
   static void destruct_listlEStHbtBaseEventReadermUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const list<StHbtBaseEventReader*>*)
   {
      list<StHbtBaseEventReader*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(list<StHbtBaseEventReader*>));
      static ::ROOT::TGenericClassInfo 
         instance("list<StHbtBaseEventReader*>", -2, "list", 557,
                  typeid(list<StHbtBaseEventReader*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &listlEStHbtBaseEventReadermUgR_Dictionary, isa_proxy, 0,
                  sizeof(list<StHbtBaseEventReader*>) );
      instance.SetNew(&new_listlEStHbtBaseEventReadermUgR);
      instance.SetNewArray(&newArray_listlEStHbtBaseEventReadermUgR);
      instance.SetDelete(&delete_listlEStHbtBaseEventReadermUgR);
      instance.SetDeleteArray(&deleteArray_listlEStHbtBaseEventReadermUgR);
      instance.SetDestructor(&destruct_listlEStHbtBaseEventReadermUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< list<StHbtBaseEventReader*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("list<StHbtBaseEventReader*>","std::__cxx11::list<StHbtBaseEventReader*, std::allocator<StHbtBaseEventReader*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const list<StHbtBaseEventReader*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *listlEStHbtBaseEventReadermUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const list<StHbtBaseEventReader*>*>(nullptr))->GetClass();
      listlEStHbtBaseEventReadermUgR_TClassManip(theClass);
   return theClass;
   }

   static void listlEStHbtBaseEventReadermUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_listlEStHbtBaseEventReadermUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<StHbtBaseEventReader*> : new list<StHbtBaseEventReader*>;
   }
   static void *newArray_listlEStHbtBaseEventReadermUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<StHbtBaseEventReader*>[nElements] : new list<StHbtBaseEventReader*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_listlEStHbtBaseEventReadermUgR(void *p) {
      delete (static_cast<list<StHbtBaseEventReader*>*>(p));
   }
   static void deleteArray_listlEStHbtBaseEventReadermUgR(void *p) {
      delete [] (static_cast<list<StHbtBaseEventReader*>*>(p));
   }
   static void destruct_listlEStHbtBaseEventReadermUgR(void *p) {
      typedef list<StHbtBaseEventReader*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class list<StHbtBaseEventReader*>

namespace ROOT {
   static TClass *listlEStHbtBaseCorrFctnmUgR_Dictionary();
   static void listlEStHbtBaseCorrFctnmUgR_TClassManip(TClass*);
   static void *new_listlEStHbtBaseCorrFctnmUgR(void *p = nullptr);
   static void *newArray_listlEStHbtBaseCorrFctnmUgR(Long_t size, void *p);
   static void delete_listlEStHbtBaseCorrFctnmUgR(void *p);
   static void deleteArray_listlEStHbtBaseCorrFctnmUgR(void *p);
   static void destruct_listlEStHbtBaseCorrFctnmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const list<StHbtBaseCorrFctn*>*)
   {
      list<StHbtBaseCorrFctn*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(list<StHbtBaseCorrFctn*>));
      static ::ROOT::TGenericClassInfo 
         instance("list<StHbtBaseCorrFctn*>", -2, "list", 557,
                  typeid(list<StHbtBaseCorrFctn*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &listlEStHbtBaseCorrFctnmUgR_Dictionary, isa_proxy, 0,
                  sizeof(list<StHbtBaseCorrFctn*>) );
      instance.SetNew(&new_listlEStHbtBaseCorrFctnmUgR);
      instance.SetNewArray(&newArray_listlEStHbtBaseCorrFctnmUgR);
      instance.SetDelete(&delete_listlEStHbtBaseCorrFctnmUgR);
      instance.SetDeleteArray(&deleteArray_listlEStHbtBaseCorrFctnmUgR);
      instance.SetDestructor(&destruct_listlEStHbtBaseCorrFctnmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< list<StHbtBaseCorrFctn*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("list<StHbtBaseCorrFctn*>","std::__cxx11::list<StHbtBaseCorrFctn*, std::allocator<StHbtBaseCorrFctn*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const list<StHbtBaseCorrFctn*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *listlEStHbtBaseCorrFctnmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const list<StHbtBaseCorrFctn*>*>(nullptr))->GetClass();
      listlEStHbtBaseCorrFctnmUgR_TClassManip(theClass);
   return theClass;
   }

   static void listlEStHbtBaseCorrFctnmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_listlEStHbtBaseCorrFctnmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<StHbtBaseCorrFctn*> : new list<StHbtBaseCorrFctn*>;
   }
   static void *newArray_listlEStHbtBaseCorrFctnmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<StHbtBaseCorrFctn*>[nElements] : new list<StHbtBaseCorrFctn*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_listlEStHbtBaseCorrFctnmUgR(void *p) {
      delete (static_cast<list<StHbtBaseCorrFctn*>*>(p));
   }
   static void deleteArray_listlEStHbtBaseCorrFctnmUgR(void *p) {
      delete [] (static_cast<list<StHbtBaseCorrFctn*>*>(p));
   }
   static void destruct_listlEStHbtBaseCorrFctnmUgR(void *p) {
      typedef list<StHbtBaseCorrFctn*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class list<StHbtBaseCorrFctn*>

namespace ROOT {
   static TClass *listlEStHbtBaseAnalysismUgR_Dictionary();
   static void listlEStHbtBaseAnalysismUgR_TClassManip(TClass*);
   static void *new_listlEStHbtBaseAnalysismUgR(void *p = nullptr);
   static void *newArray_listlEStHbtBaseAnalysismUgR(Long_t size, void *p);
   static void delete_listlEStHbtBaseAnalysismUgR(void *p);
   static void deleteArray_listlEStHbtBaseAnalysismUgR(void *p);
   static void destruct_listlEStHbtBaseAnalysismUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const list<StHbtBaseAnalysis*>*)
   {
      list<StHbtBaseAnalysis*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(list<StHbtBaseAnalysis*>));
      static ::ROOT::TGenericClassInfo 
         instance("list<StHbtBaseAnalysis*>", -2, "list", 557,
                  typeid(list<StHbtBaseAnalysis*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &listlEStHbtBaseAnalysismUgR_Dictionary, isa_proxy, 0,
                  sizeof(list<StHbtBaseAnalysis*>) );
      instance.SetNew(&new_listlEStHbtBaseAnalysismUgR);
      instance.SetNewArray(&newArray_listlEStHbtBaseAnalysismUgR);
      instance.SetDelete(&delete_listlEStHbtBaseAnalysismUgR);
      instance.SetDeleteArray(&deleteArray_listlEStHbtBaseAnalysismUgR);
      instance.SetDestructor(&destruct_listlEStHbtBaseAnalysismUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< list<StHbtBaseAnalysis*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("list<StHbtBaseAnalysis*>","std::__cxx11::list<StHbtBaseAnalysis*, std::allocator<StHbtBaseAnalysis*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const list<StHbtBaseAnalysis*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *listlEStHbtBaseAnalysismUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const list<StHbtBaseAnalysis*>*>(nullptr))->GetClass();
      listlEStHbtBaseAnalysismUgR_TClassManip(theClass);
   return theClass;
   }

   static void listlEStHbtBaseAnalysismUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_listlEStHbtBaseAnalysismUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<StHbtBaseAnalysis*> : new list<StHbtBaseAnalysis*>;
   }
   static void *newArray_listlEStHbtBaseAnalysismUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<StHbtBaseAnalysis*>[nElements] : new list<StHbtBaseAnalysis*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_listlEStHbtBaseAnalysismUgR(void *p) {
      delete (static_cast<list<StHbtBaseAnalysis*>*>(p));
   }
   static void deleteArray_listlEStHbtBaseAnalysismUgR(void *p) {
      delete [] (static_cast<list<StHbtBaseAnalysis*>*>(p));
   }
   static void destruct_listlEStHbtBaseAnalysismUgR(void *p) {
      typedef list<StHbtBaseAnalysis*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class list<StHbtBaseAnalysis*>

namespace {
  void TriggerDictionaryInitialization_libStHbtMaker_Impl() {
    static const char* headers[] = {
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtAnalysis.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtBaseCorrFctn.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtBaseCutMonitor.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtBaseEventReader.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtBaseModelFreezeOutGenerator.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtBaseModelWeightGenerator.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtCutMonitorHandler.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtEvent.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtHelix.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtKink.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtLikeSignAnalysis.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtMaker.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtManager.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtModelGausLCMSFreezeOutGenerator.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtModelHiddenInfo.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtModelManager.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtModelWeightGeneratorLednicky.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtMultiTrackCut.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtPair.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtParticle.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtPhysicalHelix.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtPicoEvent.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtPicoEventCollectionVectorHideAway.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtTrack.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtTriplet.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtV0.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtXi.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/TpcLocalTransform.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/ubuntu/Vinh/root_v6.30.02/include",
"/home/ubuntu/Vinh/sthbtmaker/StRoot",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker",
"/home/ubuntu/Vinh/root_v6.30.02/include/",
"/home/ubuntu/Vinh/sthbtmaker/build/StHbtMaker/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libStHbtMaker dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$StHbtHelix.h")))  __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtAnalysis.h")))  StHbtHelix;
class __attribute__((annotate("$clingAutoload$StHbtPhysicalHelix.h")))  __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtAnalysis.h")))  StHbtPhysicalHelix;
class __attribute__((annotate("$clingAutoload$StHbtBaseAnalysis.h")))  __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtAnalysis.h")))  StHbtBaseAnalysis;
class __attribute__((annotate("$clingAutoload$StHbtTrack.h")))  __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtAnalysis.h")))  StHbtTrack;
class __attribute__((annotate("$clingAutoload$StHbtV0.h")))  __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtAnalysis.h")))  StHbtV0;
class __attribute__((annotate("$clingAutoload$StHbtXi.h")))  __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtAnalysis.h")))  StHbtXi;
class __attribute__((annotate("$clingAutoload$StHbtKink.h")))  __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtAnalysis.h")))  StHbtKink;
class __attribute__((annotate("$clingAutoload$StHbtEvent.h")))  __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtAnalysis.h")))  StHbtEvent;
class __attribute__((annotate("$clingAutoload$StHbtParticle.h")))  __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtAnalysis.h")))  StHbtParticle;
class __attribute__((annotate("$clingAutoload$StHbtPair.h")))  __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtAnalysis.h")))  StHbtPair;
class __attribute__((annotate("$clingAutoload$StHbtBaseCutMonitor.h")))  __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtAnalysis.h")))  StHbtBaseCutMonitor;
class __attribute__((annotate("$clingAutoload$StHbtCutMonitorHandler.h")))  __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtAnalysis.h")))  StHbtCutMonitorHandler;
class __attribute__((annotate("$clingAutoload$StHbtBasePairCut.h")))  __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtAnalysis.h")))  StHbtBasePairCut;
class __attribute__((annotate("$clingAutoload$StHbtBaseEventCut.h")))  __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtAnalysis.h")))  StHbtBaseEventCut;
class __attribute__((annotate("$clingAutoload$StHbtBaseParticleCut.h")))  __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtAnalysis.h")))  StHbtBaseParticleCut;
class __attribute__((annotate("$clingAutoload$StHbtTriplet.h")))  __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtAnalysis.h")))  StHbtTriplet;
class __attribute__((annotate("$clingAutoload$StHbtBaseCorrFctn.h")))  __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtAnalysis.h")))  StHbtBaseCorrFctn;
class __attribute__((annotate("$clingAutoload$StHbtPicoEvent.h")))  __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtAnalysis.h")))  StHbtPicoEvent;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtAnalysis.h")))  StHbtAnalysis;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtBaseEventReader.h")))  StHbtBaseEventReader;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtBaseModelFreezeOutGenerator.h")))  StHbtBaseModelFreezeOutGenerator;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtBaseModelWeightGenerator.h")))  StHbtBaseModelWeightGenerator;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtLikeSignAnalysis.h")))  StHbtLikeSignAnalysis;
class __attribute__((annotate("$clingAutoload$StHbtManager.h")))  __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtMaker.h")))  StHbtManager;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtMaker.h")))  StHbtMaker;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtModelGausLCMSFreezeOutGenerator.h")))  StHbtModelGausLCMSFreezeOutGenerator;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtModelHiddenInfo.h")))  StHbtModelHiddenInfo;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtModelManager.h")))  StHbtModelManager;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtModelWeightGeneratorLednicky.h")))  StHbtModelWeightGeneratorLednicky;
class __attribute__((annotate("$clingAutoload$StHbtBaseTrackCut.h")))  __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtMultiTrackCut.h")))  StHbtBaseTrackCut;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtMultiTrackCut.h")))  StHbtMultiTrackCut;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtPicoEventCollectionVectorHideAway.h")))  StHbtPicoEventCollectionVectorHideAway;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libStHbtMaker dictionary payload"

#ifndef _VANILLA_ROOT_
  #define _VANILLA_ROOT_ 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtAnalysis.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtBaseCorrFctn.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtBaseCutMonitor.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtBaseEventReader.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtBaseModelFreezeOutGenerator.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtBaseModelWeightGenerator.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtCutMonitorHandler.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtEvent.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtHelix.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtKink.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtLikeSignAnalysis.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtMaker.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtManager.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtModelGausLCMSFreezeOutGenerator.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtModelHiddenInfo.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtModelManager.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtModelWeightGeneratorLednicky.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtMultiTrackCut.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtPair.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtParticle.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtPhysicalHelix.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtPicoEvent.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtPicoEventCollectionVectorHideAway.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtTrack.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtTriplet.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtV0.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/StHbtXi.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StHbtMaker/TpcLocalTransform.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"StHbtAnalysis", payloadCode, "@",
"StHbtBaseAnalysis", payloadCode, "@",
"StHbtBaseCorrFctn", payloadCode, "@",
"StHbtBaseCutMonitor", payloadCode, "@",
"StHbtBaseEventCut", payloadCode, "@",
"StHbtBaseEventReader", payloadCode, "@",
"StHbtBaseModelFreezeOutGenerator", payloadCode, "@",
"StHbtBaseModelWeightGenerator", payloadCode, "@",
"StHbtBasePairCut", payloadCode, "@",
"StHbtBaseParticleCut", payloadCode, "@",
"StHbtBaseTrackCut", payloadCode, "@",
"StHbtCutMonitorHandler", payloadCode, "@",
"StHbtEvent", payloadCode, "@",
"StHbtHelix", payloadCode, "@",
"StHbtKink", payloadCode, "@",
"StHbtLikeSignAnalysis", payloadCode, "@",
"StHbtMaker", payloadCode, "@",
"StHbtManager", payloadCode, "@",
"StHbtModelGausLCMSFreezeOutGenerator", payloadCode, "@",
"StHbtModelHiddenInfo", payloadCode, "@",
"StHbtModelManager", payloadCode, "@",
"StHbtModelWeightGeneratorLednicky", payloadCode, "@",
"StHbtMultiTrackCut", payloadCode, "@",
"StHbtPair", payloadCode, "@",
"StHbtParticle", payloadCode, "@",
"StHbtPhysicalHelix", payloadCode, "@",
"StHbtPicoEvent", payloadCode, "@",
"StHbtPicoEventCollectionVectorHideAway", payloadCode, "@",
"StHbtTrack", payloadCode, "@",
"StHbtTriplet", payloadCode, "@",
"StHbtV0", payloadCode, "@",
"StHbtXi", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libStHbtMaker",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libStHbtMaker_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libStHbtMaker_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libStHbtMaker() {
  TriggerDictionaryInitialization_libStHbtMaker_Impl();
}
