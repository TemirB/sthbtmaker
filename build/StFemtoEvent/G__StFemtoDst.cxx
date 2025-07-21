// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__StFemtoDst
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
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoArrays.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoDst.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoDstReader.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoEvent.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoHelix.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoPhysicalHelix.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoTrack.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoV0.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoXi.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoKFP.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoEpdHit.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_StFemtoEvent(void *p = nullptr);
   static void *newArray_StFemtoEvent(Long_t size, void *p);
   static void delete_StFemtoEvent(void *p);
   static void deleteArray_StFemtoEvent(void *p);
   static void destruct_StFemtoEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StFemtoEvent*)
   {
      ::StFemtoEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::StFemtoEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("StFemtoEvent", ::StFemtoEvent::Class_Version(), "StFemtoEvent.h", 25,
                  typeid(::StFemtoEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::StFemtoEvent::Dictionary, isa_proxy, 4,
                  sizeof(::StFemtoEvent) );
      instance.SetNew(&new_StFemtoEvent);
      instance.SetNewArray(&newArray_StFemtoEvent);
      instance.SetDelete(&delete_StFemtoEvent);
      instance.SetDeleteArray(&deleteArray_StFemtoEvent);
      instance.SetDestructor(&destruct_StFemtoEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StFemtoEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::StFemtoEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StFemtoEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_StFemtoDstReader(void *p);
   static void deleteArray_StFemtoDstReader(void *p);
   static void destruct_StFemtoDstReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StFemtoDstReader*)
   {
      ::StFemtoDstReader *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::StFemtoDstReader >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("StFemtoDstReader", ::StFemtoDstReader::Class_Version(), "StFemtoDstReader.h", 31,
                  typeid(::StFemtoDstReader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::StFemtoDstReader::Dictionary, isa_proxy, 4,
                  sizeof(::StFemtoDstReader) );
      instance.SetDelete(&delete_StFemtoDstReader);
      instance.SetDeleteArray(&deleteArray_StFemtoDstReader);
      instance.SetDestructor(&destruct_StFemtoDstReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StFemtoDstReader*)
   {
      return GenerateInitInstanceLocal(static_cast<::StFemtoDstReader*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StFemtoDstReader*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_StFemtoHelix(void *p = nullptr);
   static void *newArray_StFemtoHelix(Long_t size, void *p);
   static void delete_StFemtoHelix(void *p);
   static void deleteArray_StFemtoHelix(void *p);
   static void destruct_StFemtoHelix(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StFemtoHelix*)
   {
      ::StFemtoHelix *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::StFemtoHelix >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("StFemtoHelix", ::StFemtoHelix::Class_Version(), "StFemtoHelix.h", 39,
                  typeid(::StFemtoHelix), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::StFemtoHelix::Dictionary, isa_proxy, 4,
                  sizeof(::StFemtoHelix) );
      instance.SetNew(&new_StFemtoHelix);
      instance.SetNewArray(&newArray_StFemtoHelix);
      instance.SetDelete(&delete_StFemtoHelix);
      instance.SetDeleteArray(&deleteArray_StFemtoHelix);
      instance.SetDestructor(&destruct_StFemtoHelix);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StFemtoHelix*)
   {
      return GenerateInitInstanceLocal(static_cast<::StFemtoHelix*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StFemtoHelix*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_StFemtoPhysicalHelix(void *p = nullptr);
   static void *newArray_StFemtoPhysicalHelix(Long_t size, void *p);
   static void delete_StFemtoPhysicalHelix(void *p);
   static void deleteArray_StFemtoPhysicalHelix(void *p);
   static void destruct_StFemtoPhysicalHelix(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StFemtoPhysicalHelix*)
   {
      ::StFemtoPhysicalHelix *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::StFemtoPhysicalHelix >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("StFemtoPhysicalHelix", ::StFemtoPhysicalHelix::Class_Version(), "StFemtoPhysicalHelix.h", 22,
                  typeid(::StFemtoPhysicalHelix), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::StFemtoPhysicalHelix::Dictionary, isa_proxy, 4,
                  sizeof(::StFemtoPhysicalHelix) );
      instance.SetNew(&new_StFemtoPhysicalHelix);
      instance.SetNewArray(&newArray_StFemtoPhysicalHelix);
      instance.SetDelete(&delete_StFemtoPhysicalHelix);
      instance.SetDeleteArray(&deleteArray_StFemtoPhysicalHelix);
      instance.SetDestructor(&destruct_StFemtoPhysicalHelix);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StFemtoPhysicalHelix*)
   {
      return GenerateInitInstanceLocal(static_cast<::StFemtoPhysicalHelix*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StFemtoPhysicalHelix*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_StFemtoTrack(void *p = nullptr);
   static void *newArray_StFemtoTrack(Long_t size, void *p);
   static void delete_StFemtoTrack(void *p);
   static void deleteArray_StFemtoTrack(void *p);
   static void destruct_StFemtoTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StFemtoTrack*)
   {
      ::StFemtoTrack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::StFemtoTrack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("StFemtoTrack", ::StFemtoTrack::Class_Version(), "StFemtoTrack.h", 35,
                  typeid(::StFemtoTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::StFemtoTrack::Dictionary, isa_proxy, 4,
                  sizeof(::StFemtoTrack) );
      instance.SetNew(&new_StFemtoTrack);
      instance.SetNewArray(&newArray_StFemtoTrack);
      instance.SetDelete(&delete_StFemtoTrack);
      instance.SetDeleteArray(&deleteArray_StFemtoTrack);
      instance.SetDestructor(&destruct_StFemtoTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StFemtoTrack*)
   {
      return GenerateInitInstanceLocal(static_cast<::StFemtoTrack*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StFemtoTrack*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_StFemtoV0(void *p = nullptr);
   static void *newArray_StFemtoV0(Long_t size, void *p);
   static void delete_StFemtoV0(void *p);
   static void deleteArray_StFemtoV0(void *p);
   static void destruct_StFemtoV0(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StFemtoV0*)
   {
      ::StFemtoV0 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::StFemtoV0 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("StFemtoV0", ::StFemtoV0::Class_Version(), "StFemtoV0.h", 19,
                  typeid(::StFemtoV0), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::StFemtoV0::Dictionary, isa_proxy, 4,
                  sizeof(::StFemtoV0) );
      instance.SetNew(&new_StFemtoV0);
      instance.SetNewArray(&newArray_StFemtoV0);
      instance.SetDelete(&delete_StFemtoV0);
      instance.SetDeleteArray(&deleteArray_StFemtoV0);
      instance.SetDestructor(&destruct_StFemtoV0);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StFemtoV0*)
   {
      return GenerateInitInstanceLocal(static_cast<::StFemtoV0*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StFemtoV0*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_StFemtoXi(void *p = nullptr);
   static void *newArray_StFemtoXi(Long_t size, void *p);
   static void delete_StFemtoXi(void *p);
   static void deleteArray_StFemtoXi(void *p);
   static void destruct_StFemtoXi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StFemtoXi*)
   {
      ::StFemtoXi *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::StFemtoXi >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("StFemtoXi", ::StFemtoXi::Class_Version(), "StFemtoXi.h", 20,
                  typeid(::StFemtoXi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::StFemtoXi::Dictionary, isa_proxy, 4,
                  sizeof(::StFemtoXi) );
      instance.SetNew(&new_StFemtoXi);
      instance.SetNewArray(&newArray_StFemtoXi);
      instance.SetDelete(&delete_StFemtoXi);
      instance.SetDeleteArray(&deleteArray_StFemtoXi);
      instance.SetDestructor(&destruct_StFemtoXi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StFemtoXi*)
   {
      return GenerateInitInstanceLocal(static_cast<::StFemtoXi*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StFemtoXi*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_StFemtoKFP(void *p = nullptr);
   static void *newArray_StFemtoKFP(Long_t size, void *p);
   static void delete_StFemtoKFP(void *p);
   static void deleteArray_StFemtoKFP(void *p);
   static void destruct_StFemtoKFP(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StFemtoKFP*)
   {
      ::StFemtoKFP *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::StFemtoKFP >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("StFemtoKFP", ::StFemtoKFP::Class_Version(), "StFemtoKFP.h", 24,
                  typeid(::StFemtoKFP), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::StFemtoKFP::Dictionary, isa_proxy, 4,
                  sizeof(::StFemtoKFP) );
      instance.SetNew(&new_StFemtoKFP);
      instance.SetNewArray(&newArray_StFemtoKFP);
      instance.SetDelete(&delete_StFemtoKFP);
      instance.SetDeleteArray(&deleteArray_StFemtoKFP);
      instance.SetDestructor(&destruct_StFemtoKFP);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StFemtoKFP*)
   {
      return GenerateInitInstanceLocal(static_cast<::StFemtoKFP*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StFemtoKFP*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_StFemtoEpdHit(void *p = nullptr);
   static void *newArray_StFemtoEpdHit(Long_t size, void *p);
   static void delete_StFemtoEpdHit(void *p);
   static void deleteArray_StFemtoEpdHit(void *p);
   static void destruct_StFemtoEpdHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StFemtoEpdHit*)
   {
      ::StFemtoEpdHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::StFemtoEpdHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("StFemtoEpdHit", ::StFemtoEpdHit::Class_Version(), "StFemtoEpdHit.h", 47,
                  typeid(::StFemtoEpdHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::StFemtoEpdHit::Dictionary, isa_proxy, 4,
                  sizeof(::StFemtoEpdHit) );
      instance.SetNew(&new_StFemtoEpdHit);
      instance.SetNewArray(&newArray_StFemtoEpdHit);
      instance.SetDelete(&delete_StFemtoEpdHit);
      instance.SetDeleteArray(&deleteArray_StFemtoEpdHit);
      instance.SetDestructor(&destruct_StFemtoEpdHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StFemtoEpdHit*)
   {
      return GenerateInitInstanceLocal(static_cast<::StFemtoEpdHit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StFemtoEpdHit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr StFemtoEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *StFemtoEvent::Class_Name()
{
   return "StFemtoEvent";
}

//______________________________________________________________________________
const char *StFemtoEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::StFemtoEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int StFemtoEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::StFemtoEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *StFemtoEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::StFemtoEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *StFemtoEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::StFemtoEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr StFemtoDstReader::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *StFemtoDstReader::Class_Name()
{
   return "StFemtoDstReader";
}

//______________________________________________________________________________
const char *StFemtoDstReader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::StFemtoDstReader*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int StFemtoDstReader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::StFemtoDstReader*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *StFemtoDstReader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::StFemtoDstReader*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *StFemtoDstReader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::StFemtoDstReader*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr StFemtoHelix::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *StFemtoHelix::Class_Name()
{
   return "StFemtoHelix";
}

//______________________________________________________________________________
const char *StFemtoHelix::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::StFemtoHelix*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int StFemtoHelix::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::StFemtoHelix*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *StFemtoHelix::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::StFemtoHelix*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *StFemtoHelix::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::StFemtoHelix*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr StFemtoPhysicalHelix::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *StFemtoPhysicalHelix::Class_Name()
{
   return "StFemtoPhysicalHelix";
}

//______________________________________________________________________________
const char *StFemtoPhysicalHelix::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::StFemtoPhysicalHelix*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int StFemtoPhysicalHelix::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::StFemtoPhysicalHelix*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *StFemtoPhysicalHelix::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::StFemtoPhysicalHelix*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *StFemtoPhysicalHelix::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::StFemtoPhysicalHelix*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr StFemtoTrack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *StFemtoTrack::Class_Name()
{
   return "StFemtoTrack";
}

//______________________________________________________________________________
const char *StFemtoTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::StFemtoTrack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int StFemtoTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::StFemtoTrack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *StFemtoTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::StFemtoTrack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *StFemtoTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::StFemtoTrack*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr StFemtoV0::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *StFemtoV0::Class_Name()
{
   return "StFemtoV0";
}

//______________________________________________________________________________
const char *StFemtoV0::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::StFemtoV0*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int StFemtoV0::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::StFemtoV0*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *StFemtoV0::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::StFemtoV0*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *StFemtoV0::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::StFemtoV0*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr StFemtoXi::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *StFemtoXi::Class_Name()
{
   return "StFemtoXi";
}

//______________________________________________________________________________
const char *StFemtoXi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::StFemtoXi*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int StFemtoXi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::StFemtoXi*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *StFemtoXi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::StFemtoXi*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *StFemtoXi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::StFemtoXi*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr StFemtoKFP::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *StFemtoKFP::Class_Name()
{
   return "StFemtoKFP";
}

//______________________________________________________________________________
const char *StFemtoKFP::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::StFemtoKFP*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int StFemtoKFP::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::StFemtoKFP*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *StFemtoKFP::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::StFemtoKFP*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *StFemtoKFP::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::StFemtoKFP*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr StFemtoEpdHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *StFemtoEpdHit::Class_Name()
{
   return "StFemtoEpdHit";
}

//______________________________________________________________________________
const char *StFemtoEpdHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::StFemtoEpdHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int StFemtoEpdHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::StFemtoEpdHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *StFemtoEpdHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::StFemtoEpdHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *StFemtoEpdHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::StFemtoEpdHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void StFemtoEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class StFemtoEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(StFemtoEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(StFemtoEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_StFemtoEvent(void *p) {
      return  p ? new(p) ::StFemtoEvent : new ::StFemtoEvent;
   }
   static void *newArray_StFemtoEvent(Long_t nElements, void *p) {
      return p ? new(p) ::StFemtoEvent[nElements] : new ::StFemtoEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_StFemtoEvent(void *p) {
      delete (static_cast<::StFemtoEvent*>(p));
   }
   static void deleteArray_StFemtoEvent(void *p) {
      delete [] (static_cast<::StFemtoEvent*>(p));
   }
   static void destruct_StFemtoEvent(void *p) {
      typedef ::StFemtoEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StFemtoEvent

//______________________________________________________________________________
void StFemtoDstReader::Streamer(TBuffer &R__b)
{
   // Stream an object of class StFemtoDstReader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(StFemtoDstReader::Class(),this);
   } else {
      R__b.WriteClassBuffer(StFemtoDstReader::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_StFemtoDstReader(void *p) {
      delete (static_cast<::StFemtoDstReader*>(p));
   }
   static void deleteArray_StFemtoDstReader(void *p) {
      delete [] (static_cast<::StFemtoDstReader*>(p));
   }
   static void destruct_StFemtoDstReader(void *p) {
      typedef ::StFemtoDstReader current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StFemtoDstReader

//______________________________________________________________________________
void StFemtoHelix::Streamer(TBuffer &R__b)
{
   // Stream an object of class StFemtoHelix.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(StFemtoHelix::Class(),this);
   } else {
      R__b.WriteClassBuffer(StFemtoHelix::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_StFemtoHelix(void *p) {
      return  p ? new(p) ::StFemtoHelix : new ::StFemtoHelix;
   }
   static void *newArray_StFemtoHelix(Long_t nElements, void *p) {
      return p ? new(p) ::StFemtoHelix[nElements] : new ::StFemtoHelix[nElements];
   }
   // Wrapper around operator delete
   static void delete_StFemtoHelix(void *p) {
      delete (static_cast<::StFemtoHelix*>(p));
   }
   static void deleteArray_StFemtoHelix(void *p) {
      delete [] (static_cast<::StFemtoHelix*>(p));
   }
   static void destruct_StFemtoHelix(void *p) {
      typedef ::StFemtoHelix current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StFemtoHelix

//______________________________________________________________________________
void StFemtoPhysicalHelix::Streamer(TBuffer &R__b)
{
   // Stream an object of class StFemtoPhysicalHelix.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(StFemtoPhysicalHelix::Class(),this);
   } else {
      R__b.WriteClassBuffer(StFemtoPhysicalHelix::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_StFemtoPhysicalHelix(void *p) {
      return  p ? new(p) ::StFemtoPhysicalHelix : new ::StFemtoPhysicalHelix;
   }
   static void *newArray_StFemtoPhysicalHelix(Long_t nElements, void *p) {
      return p ? new(p) ::StFemtoPhysicalHelix[nElements] : new ::StFemtoPhysicalHelix[nElements];
   }
   // Wrapper around operator delete
   static void delete_StFemtoPhysicalHelix(void *p) {
      delete (static_cast<::StFemtoPhysicalHelix*>(p));
   }
   static void deleteArray_StFemtoPhysicalHelix(void *p) {
      delete [] (static_cast<::StFemtoPhysicalHelix*>(p));
   }
   static void destruct_StFemtoPhysicalHelix(void *p) {
      typedef ::StFemtoPhysicalHelix current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StFemtoPhysicalHelix

//______________________________________________________________________________
void StFemtoTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class StFemtoTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(StFemtoTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(StFemtoTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_StFemtoTrack(void *p) {
      return  p ? new(p) ::StFemtoTrack : new ::StFemtoTrack;
   }
   static void *newArray_StFemtoTrack(Long_t nElements, void *p) {
      return p ? new(p) ::StFemtoTrack[nElements] : new ::StFemtoTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_StFemtoTrack(void *p) {
      delete (static_cast<::StFemtoTrack*>(p));
   }
   static void deleteArray_StFemtoTrack(void *p) {
      delete [] (static_cast<::StFemtoTrack*>(p));
   }
   static void destruct_StFemtoTrack(void *p) {
      typedef ::StFemtoTrack current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StFemtoTrack

//______________________________________________________________________________
void StFemtoV0::Streamer(TBuffer &R__b)
{
   // Stream an object of class StFemtoV0.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(StFemtoV0::Class(),this);
   } else {
      R__b.WriteClassBuffer(StFemtoV0::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_StFemtoV0(void *p) {
      return  p ? new(p) ::StFemtoV0 : new ::StFemtoV0;
   }
   static void *newArray_StFemtoV0(Long_t nElements, void *p) {
      return p ? new(p) ::StFemtoV0[nElements] : new ::StFemtoV0[nElements];
   }
   // Wrapper around operator delete
   static void delete_StFemtoV0(void *p) {
      delete (static_cast<::StFemtoV0*>(p));
   }
   static void deleteArray_StFemtoV0(void *p) {
      delete [] (static_cast<::StFemtoV0*>(p));
   }
   static void destruct_StFemtoV0(void *p) {
      typedef ::StFemtoV0 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StFemtoV0

//______________________________________________________________________________
void StFemtoXi::Streamer(TBuffer &R__b)
{
   // Stream an object of class StFemtoXi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(StFemtoXi::Class(),this);
   } else {
      R__b.WriteClassBuffer(StFemtoXi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_StFemtoXi(void *p) {
      return  p ? new(p) ::StFemtoXi : new ::StFemtoXi;
   }
   static void *newArray_StFemtoXi(Long_t nElements, void *p) {
      return p ? new(p) ::StFemtoXi[nElements] : new ::StFemtoXi[nElements];
   }
   // Wrapper around operator delete
   static void delete_StFemtoXi(void *p) {
      delete (static_cast<::StFemtoXi*>(p));
   }
   static void deleteArray_StFemtoXi(void *p) {
      delete [] (static_cast<::StFemtoXi*>(p));
   }
   static void destruct_StFemtoXi(void *p) {
      typedef ::StFemtoXi current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StFemtoXi

//______________________________________________________________________________
void StFemtoKFP::Streamer(TBuffer &R__b)
{
   // Stream an object of class StFemtoKFP.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(StFemtoKFP::Class(),this);
   } else {
      R__b.WriteClassBuffer(StFemtoKFP::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_StFemtoKFP(void *p) {
      return  p ? new(p) ::StFemtoKFP : new ::StFemtoKFP;
   }
   static void *newArray_StFemtoKFP(Long_t nElements, void *p) {
      return p ? new(p) ::StFemtoKFP[nElements] : new ::StFemtoKFP[nElements];
   }
   // Wrapper around operator delete
   static void delete_StFemtoKFP(void *p) {
      delete (static_cast<::StFemtoKFP*>(p));
   }
   static void deleteArray_StFemtoKFP(void *p) {
      delete [] (static_cast<::StFemtoKFP*>(p));
   }
   static void destruct_StFemtoKFP(void *p) {
      typedef ::StFemtoKFP current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StFemtoKFP

//______________________________________________________________________________
void StFemtoEpdHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class StFemtoEpdHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(StFemtoEpdHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(StFemtoEpdHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_StFemtoEpdHit(void *p) {
      return  p ? new(p) ::StFemtoEpdHit : new ::StFemtoEpdHit;
   }
   static void *newArray_StFemtoEpdHit(Long_t nElements, void *p) {
      return p ? new(p) ::StFemtoEpdHit[nElements] : new ::StFemtoEpdHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_StFemtoEpdHit(void *p) {
      delete (static_cast<::StFemtoEpdHit*>(p));
   }
   static void deleteArray_StFemtoEpdHit(void *p) {
      delete [] (static_cast<::StFemtoEpdHit*>(p));
   }
   static void destruct_StFemtoEpdHit(void *p) {
      typedef ::StFemtoEpdHit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StFemtoEpdHit

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
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = nullptr);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 389,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<int>","std::vector<int, std::allocator<int> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<int>*>(nullptr))->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete (static_cast<vector<int>*>(p));
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] (static_cast<vector<int>*>(p));
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace {
  void TriggerDictionaryInitialization_libStFemtoDst_Impl() {
    static const char* headers[] = {
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoArrays.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoDst.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoDstReader.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoEvent.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoHelix.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoPhysicalHelix.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoTrack.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoV0.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoXi.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoKFP.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoEpdHit.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/ubuntu/Vinh/root_v6.30.02/include",
"/home/ubuntu/Vinh/sthbtmaker/StRoot",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent",
"/home/ubuntu/Vinh/root_v6.30.02/include/",
"/home/ubuntu/Vinh/sthbtmaker/build/StFemtoEvent/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libStFemtoDst dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$StFemtoEvent.h")))  __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoDstReader.h")))  StFemtoEvent;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoDstReader.h")))  StFemtoDstReader;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoHelix.h")))  StFemtoHelix;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoPhysicalHelix.h")))  StFemtoPhysicalHelix;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoTrack.h")))  StFemtoTrack;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoV0.h")))  StFemtoV0;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoXi.h")))  StFemtoXi;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoKFP.h")))  StFemtoKFP;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoEpdHit.h")))  StFemtoEpdHit;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libStFemtoDst dictionary payload"

#ifndef _VANILLA_ROOT_
  #define _VANILLA_ROOT_ 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoArrays.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoDst.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoDstReader.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoEvent.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoHelix.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoPhysicalHelix.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoTrack.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoV0.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoXi.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoKFP.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/StFemtoEvent/StFemtoEpdHit.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"StFemtoDstReader", payloadCode, "@",
"StFemtoEpdHit", payloadCode, "@",
"StFemtoEvent", payloadCode, "@",
"StFemtoHelix", payloadCode, "@",
"StFemtoKFP", payloadCode, "@",
"StFemtoPhysicalHelix", payloadCode, "@",
"StFemtoTrack", payloadCode, "@",
"StFemtoV0", payloadCode, "@",
"StFemtoXi", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libStFemtoDst",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libStFemtoDst_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libStFemtoDst_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libStFemtoDst() {
  TriggerDictionaryInitialization_libStFemtoDst_Impl();
}
