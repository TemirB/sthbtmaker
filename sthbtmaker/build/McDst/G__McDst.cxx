// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__McDst
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
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McArrays.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McDst.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McDstCut.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McDstQA.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McDstReader.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McEvent.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McPIDConverter.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McParticle.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McRun.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *McDst_Dictionary();
   static void McDst_TClassManip(TClass*);
   static void *new_McDst(void *p = nullptr);
   static void *newArray_McDst(Long_t size, void *p);
   static void delete_McDst(void *p);
   static void deleteArray_McDst(void *p);
   static void destruct_McDst(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::McDst*)
   {
      ::McDst *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::McDst));
      static ::ROOT::TGenericClassInfo 
         instance("McDst", "McDst.h", 23,
                  typeid(::McDst), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &McDst_Dictionary, isa_proxy, 4,
                  sizeof(::McDst) );
      instance.SetNew(&new_McDst);
      instance.SetNewArray(&newArray_McDst);
      instance.SetDelete(&delete_McDst);
      instance.SetDeleteArray(&deleteArray_McDst);
      instance.SetDestructor(&destruct_McDst);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::McDst*)
   {
      return GenerateInitInstanceLocal(static_cast<::McDst*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::McDst*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *McDst_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::McDst*>(nullptr))->GetClass();
      McDst_TClassManip(theClass);
   return theClass;
   }

   static void McDst_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *McRun_Dictionary();
   static void McRun_TClassManip(TClass*);
   static void *new_McRun(void *p = nullptr);
   static void *newArray_McRun(Long_t size, void *p);
   static void delete_McRun(void *p);
   static void deleteArray_McRun(void *p);
   static void destruct_McRun(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::McRun*)
   {
      ::McRun *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::McRun));
      static ::ROOT::TGenericClassInfo 
         instance("McRun", "McRun.h", 20,
                  typeid(::McRun), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &McRun_Dictionary, isa_proxy, 4,
                  sizeof(::McRun) );
      instance.SetNew(&new_McRun);
      instance.SetNewArray(&newArray_McRun);
      instance.SetDelete(&delete_McRun);
      instance.SetDeleteArray(&deleteArray_McRun);
      instance.SetDestructor(&destruct_McRun);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::McRun*)
   {
      return GenerateInitInstanceLocal(static_cast<::McRun*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::McRun*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *McRun_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::McRun*>(nullptr))->GetClass();
      McRun_TClassManip(theClass);
   return theClass;
   }

   static void McRun_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *McDstReader_Dictionary();
   static void McDstReader_TClassManip(TClass*);
   static void delete_McDstReader(void *p);
   static void deleteArray_McDstReader(void *p);
   static void destruct_McDstReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::McDstReader*)
   {
      ::McDstReader *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::McDstReader));
      static ::ROOT::TGenericClassInfo 
         instance("McDstReader", "McDstReader.h", 28,
                  typeid(::McDstReader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &McDstReader_Dictionary, isa_proxy, 4,
                  sizeof(::McDstReader) );
      instance.SetDelete(&delete_McDstReader);
      instance.SetDeleteArray(&deleteArray_McDstReader);
      instance.SetDestructor(&destruct_McDstReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::McDstReader*)
   {
      return GenerateInitInstanceLocal(static_cast<::McDstReader*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::McDstReader*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *McDstReader_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::McDstReader*>(nullptr))->GetClass();
      McDstReader_TClassManip(theClass);
   return theClass;
   }

   static void McDstReader_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *McParticle_Dictionary();
   static void McParticle_TClassManip(TClass*);
   static void *new_McParticle(void *p = nullptr);
   static void *newArray_McParticle(Long_t size, void *p);
   static void delete_McParticle(void *p);
   static void deleteArray_McParticle(void *p);
   static void destruct_McParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::McParticle*)
   {
      ::McParticle *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::McParticle));
      static ::ROOT::TGenericClassInfo 
         instance("McParticle", "McParticle.h", 23,
                  typeid(::McParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &McParticle_Dictionary, isa_proxy, 4,
                  sizeof(::McParticle) );
      instance.SetNew(&new_McParticle);
      instance.SetNewArray(&newArray_McParticle);
      instance.SetDelete(&delete_McParticle);
      instance.SetDeleteArray(&deleteArray_McParticle);
      instance.SetDestructor(&destruct_McParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::McParticle*)
   {
      return GenerateInitInstanceLocal(static_cast<::McParticle*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::McParticle*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *McParticle_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::McParticle*>(nullptr))->GetClass();
      McParticle_TClassManip(theClass);
   return theClass;
   }

   static void McParticle_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *McEvent_Dictionary();
   static void McEvent_TClassManip(TClass*);
   static void *new_McEvent(void *p = nullptr);
   static void *newArray_McEvent(Long_t size, void *p);
   static void delete_McEvent(void *p);
   static void deleteArray_McEvent(void *p);
   static void destruct_McEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::McEvent*)
   {
      ::McEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::McEvent));
      static ::ROOT::TGenericClassInfo 
         instance("McEvent", "McEvent.h", 24,
                  typeid(::McEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &McEvent_Dictionary, isa_proxy, 4,
                  sizeof(::McEvent) );
      instance.SetNew(&new_McEvent);
      instance.SetNewArray(&newArray_McEvent);
      instance.SetDelete(&delete_McEvent);
      instance.SetDeleteArray(&deleteArray_McEvent);
      instance.SetDestructor(&destruct_McEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::McEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::McEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::McEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *McEvent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::McEvent*>(nullptr))->GetClass();
      McEvent_TClassManip(theClass);
   return theClass;
   }

   static void McEvent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_McDstQA(void *p);
   static void deleteArray_McDstQA(void *p);
   static void destruct_McDstQA(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::McDstQA*)
   {
      ::McDstQA *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::McDstQA >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("McDstQA", ::McDstQA::Class_Version(), "McDstQA.h", 33,
                  typeid(::McDstQA), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::McDstQA::Dictionary, isa_proxy, 4,
                  sizeof(::McDstQA) );
      instance.SetDelete(&delete_McDstQA);
      instance.SetDeleteArray(&deleteArray_McDstQA);
      instance.SetDestructor(&destruct_McDstQA);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::McDstQA*)
   {
      return GenerateInitInstanceLocal(static_cast<::McDstQA*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::McDstQA*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *McPIDConverter_Dictionary();
   static void McPIDConverter_TClassManip(TClass*);
   static void *new_McPIDConverter(void *p = nullptr);
   static void *newArray_McPIDConverter(Long_t size, void *p);
   static void delete_McPIDConverter(void *p);
   static void deleteArray_McPIDConverter(void *p);
   static void destruct_McPIDConverter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::McPIDConverter*)
   {
      ::McPIDConverter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::McPIDConverter));
      static ::ROOT::TGenericClassInfo 
         instance("McPIDConverter", "McPIDConverter.h", 19,
                  typeid(::McPIDConverter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &McPIDConverter_Dictionary, isa_proxy, 4,
                  sizeof(::McPIDConverter) );
      instance.SetNew(&new_McPIDConverter);
      instance.SetNewArray(&newArray_McPIDConverter);
      instance.SetDelete(&delete_McPIDConverter);
      instance.SetDeleteArray(&deleteArray_McPIDConverter);
      instance.SetDestructor(&destruct_McPIDConverter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::McPIDConverter*)
   {
      return GenerateInitInstanceLocal(static_cast<::McPIDConverter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::McPIDConverter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *McPIDConverter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::McPIDConverter*>(nullptr))->GetClass();
      McPIDConverter_TClassManip(theClass);
   return theClass;
   }

   static void McPIDConverter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr McDstQA::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *McDstQA::Class_Name()
{
   return "McDstQA";
}

//______________________________________________________________________________
const char *McDstQA::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::McDstQA*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int McDstQA::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::McDstQA*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *McDstQA::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::McDstQA*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *McDstQA::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::McDstQA*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_McDst(void *p) {
      return  p ? new(p) ::McDst : new ::McDst;
   }
   static void *newArray_McDst(Long_t nElements, void *p) {
      return p ? new(p) ::McDst[nElements] : new ::McDst[nElements];
   }
   // Wrapper around operator delete
   static void delete_McDst(void *p) {
      delete (static_cast<::McDst*>(p));
   }
   static void deleteArray_McDst(void *p) {
      delete [] (static_cast<::McDst*>(p));
   }
   static void destruct_McDst(void *p) {
      typedef ::McDst current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::McDst

namespace ROOT {
   // Wrappers around operator new
   static void *new_McRun(void *p) {
      return  p ? new(p) ::McRun : new ::McRun;
   }
   static void *newArray_McRun(Long_t nElements, void *p) {
      return p ? new(p) ::McRun[nElements] : new ::McRun[nElements];
   }
   // Wrapper around operator delete
   static void delete_McRun(void *p) {
      delete (static_cast<::McRun*>(p));
   }
   static void deleteArray_McRun(void *p) {
      delete [] (static_cast<::McRun*>(p));
   }
   static void destruct_McRun(void *p) {
      typedef ::McRun current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::McRun

namespace ROOT {
   // Wrapper around operator delete
   static void delete_McDstReader(void *p) {
      delete (static_cast<::McDstReader*>(p));
   }
   static void deleteArray_McDstReader(void *p) {
      delete [] (static_cast<::McDstReader*>(p));
   }
   static void destruct_McDstReader(void *p) {
      typedef ::McDstReader current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::McDstReader

namespace ROOT {
   // Wrappers around operator new
   static void *new_McParticle(void *p) {
      return  p ? new(p) ::McParticle : new ::McParticle;
   }
   static void *newArray_McParticle(Long_t nElements, void *p) {
      return p ? new(p) ::McParticle[nElements] : new ::McParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_McParticle(void *p) {
      delete (static_cast<::McParticle*>(p));
   }
   static void deleteArray_McParticle(void *p) {
      delete [] (static_cast<::McParticle*>(p));
   }
   static void destruct_McParticle(void *p) {
      typedef ::McParticle current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::McParticle

namespace ROOT {
   // Wrappers around operator new
   static void *new_McEvent(void *p) {
      return  p ? new(p) ::McEvent : new ::McEvent;
   }
   static void *newArray_McEvent(Long_t nElements, void *p) {
      return p ? new(p) ::McEvent[nElements] : new ::McEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_McEvent(void *p) {
      delete (static_cast<::McEvent*>(p));
   }
   static void deleteArray_McEvent(void *p) {
      delete [] (static_cast<::McEvent*>(p));
   }
   static void destruct_McEvent(void *p) {
      typedef ::McEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::McEvent

//______________________________________________________________________________
void McDstQA::Streamer(TBuffer &R__b)
{
   // Stream an object of class McDstQA.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(McDstQA::Class(),this);
   } else {
      R__b.WriteClassBuffer(McDstQA::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_McDstQA(void *p) {
      delete (static_cast<::McDstQA*>(p));
   }
   static void deleteArray_McDstQA(void *p) {
      delete [] (static_cast<::McDstQA*>(p));
   }
   static void destruct_McDstQA(void *p) {
      typedef ::McDstQA current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::McDstQA

namespace ROOT {
   // Wrappers around operator new
   static void *new_McPIDConverter(void *p) {
      return  p ? new(p) ::McPIDConverter : new ::McPIDConverter;
   }
   static void *newArray_McPIDConverter(Long_t nElements, void *p) {
      return p ? new(p) ::McPIDConverter[nElements] : new ::McPIDConverter[nElements];
   }
   // Wrapper around operator delete
   static void delete_McPIDConverter(void *p) {
      delete (static_cast<::McPIDConverter*>(p));
   }
   static void deleteArray_McPIDConverter(void *p) {
      delete [] (static_cast<::McPIDConverter*>(p));
   }
   static void destruct_McPIDConverter(void *p) {
      typedef ::McPIDConverter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::McPIDConverter

namespace ROOT {
   static TClass *maplEunsignedsPintcOmaplEintcOintgRsPgR_Dictionary();
   static void maplEunsignedsPintcOmaplEintcOintgRsPgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOmaplEintcOintgRsPgR(void *p = nullptr);
   static void *newArray_maplEunsignedsPintcOmaplEintcOintgRsPgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOmaplEintcOintgRsPgR(void *p);
   static void deleteArray_maplEunsignedsPintcOmaplEintcOintgRsPgR(void *p);
   static void destruct_maplEunsignedsPintcOmaplEintcOintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,map<int,int> >*)
   {
      map<unsigned int,map<int,int> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,map<int,int> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,map<int,int> >", -2, "map", 100,
                  typeid(map<unsigned int,map<int,int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOmaplEintcOintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,map<int,int> >) );
      instance.SetNew(&new_maplEunsignedsPintcOmaplEintcOintgRsPgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOmaplEintcOintgRsPgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOmaplEintcOintgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOmaplEintcOintgRsPgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOmaplEintcOintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,map<int,int> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<unsigned int,map<int,int> >","std::map<unsigned int, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<unsigned int,map<int,int> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOmaplEintcOintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<unsigned int,map<int,int> >*>(nullptr))->GetClass();
      maplEunsignedsPintcOmaplEintcOintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOmaplEintcOintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOmaplEintcOintgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<unsigned int,map<int,int> > : new map<unsigned int,map<int,int> >;
   }
   static void *newArray_maplEunsignedsPintcOmaplEintcOintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<unsigned int,map<int,int> >[nElements] : new map<unsigned int,map<int,int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOmaplEintcOintgRsPgR(void *p) {
      delete (static_cast<map<unsigned int,map<int,int> >*>(p));
   }
   static void deleteArray_maplEunsignedsPintcOmaplEintcOintgRsPgR(void *p) {
      delete [] (static_cast<map<unsigned int,map<int,int> >*>(p));
   }
   static void destruct_maplEunsignedsPintcOmaplEintcOintgRsPgR(void *p) {
      typedef map<unsigned int,map<int,int> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,map<int,int> >

namespace ROOT {
   static TClass *maplEintcOintgR_Dictionary();
   static void maplEintcOintgR_TClassManip(TClass*);
   static void *new_maplEintcOintgR(void *p = nullptr);
   static void *newArray_maplEintcOintgR(Long_t size, void *p);
   static void delete_maplEintcOintgR(void *p);
   static void deleteArray_maplEintcOintgR(void *p);
   static void destruct_maplEintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,int>*)
   {
      map<int,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,int>", -2, "map", 100,
                  typeid(map<int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,int>) );
      instance.SetNew(&new_maplEintcOintgR);
      instance.SetNewArray(&newArray_maplEintcOintgR);
      instance.SetDelete(&delete_maplEintcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOintgR);
      instance.SetDestructor(&destruct_maplEintcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<int,int>","std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<int,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<int,int>*>(nullptr))->GetClass();
      maplEintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,int> : new map<int,int>;
   }
   static void *newArray_maplEintcOintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,int>[nElements] : new map<int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOintgR(void *p) {
      delete (static_cast<map<int,int>*>(p));
   }
   static void deleteArray_maplEintcOintgR(void *p) {
      delete [] (static_cast<map<int,int>*>(p));
   }
   static void destruct_maplEintcOintgR(void *p) {
      typedef map<int,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<int,int>

namespace {
  void TriggerDictionaryInitialization_libMcDst_Impl() {
    static const char* headers[] = {
"/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McArrays.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McDst.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McDstCut.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McDstQA.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McDstReader.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McEvent.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McPIDConverter.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McParticle.h",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McRun.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/ubuntu/Vinh/root_v6.30.02/include",
"/home/ubuntu/Vinh/sthbtmaker/StRoot",
"/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst",
"/home/ubuntu/Vinh/root_v6.30.02/include/",
"/home/ubuntu/Vinh/sthbtmaker/build/McDst/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libMcDst dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McDst.h")))  McDst;
class __attribute__((annotate("$clingAutoload$McRun.h")))  __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McDstQA.h")))  McRun;
class __attribute__((annotate("$clingAutoload$McDstReader.h")))  __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McDstQA.h")))  McDstReader;
class __attribute__((annotate("$clingAutoload$McParticle.h")))  __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McDstQA.h")))  McParticle;
class __attribute__((annotate("$clingAutoload$McEvent.h")))  __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McDstQA.h")))  McEvent;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McDstQA.h")))  McDstQA;
class __attribute__((annotate("$clingAutoload$/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McPIDConverter.h")))  McPIDConverter;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libMcDst dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McArrays.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McDst.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McDstCut.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McDstQA.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McDstReader.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McEvent.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McPIDConverter.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McParticle.h"
#include "/home/ubuntu/Vinh/sthbtmaker/StRoot/McDst/McRun.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"McDst", payloadCode, "@",
"McDstQA", payloadCode, "@",
"McDstReader", payloadCode, "@",
"McEvent", payloadCode, "@",
"McPIDConverter", payloadCode, "@",
"McParticle", payloadCode, "@",
"McRun", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libMcDst",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libMcDst_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libMcDst_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libMcDst() {
  TriggerDictionaryInitialization_libMcDst_Impl();
}
