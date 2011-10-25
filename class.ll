; ModuleID = 'class.cpp'
target datalayout = "e-p:32:32:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:32:64-f32:32:32-f64:32:64-v64:64:64-v128:128:128-a0:0:64-f80:32:32-n8:16:32"
target triple = "i386-pc-linux-gnu"

%0 = type { i32, void ()* }
%struct..1__pthread_mutex_s = type { i32, i32, i32, i32, i32, %union..0._10 }
%struct.__class_type_info_pseudo = type { %struct.__type_info_pseudo }
%struct.__type_info_pseudo = type { i8*, i8* }
%struct.num = type { i32 (...)**, i32, i32, i32 }
%"struct.std::basic_ios<char,std::char_traits<char> >" = type { %"struct.std::ios_base", %"struct.std::basic_ostream<char,std::char_traits<char> >"*, i8, i8, %"struct.std::basic_streambuf<char,std::char_traits<char> >"*, %"struct.std::ctype<char>"*, %"struct.std::num_get<char,std::istreambuf_iterator<char, std::char_traits<char> > >"*, %"struct.std::num_get<char,std::istreambuf_iterator<char, std::char_traits<char> > >"* }
%"struct.std::basic_istream<char,std::char_traits<char> >" = type { i32 (...)**, i32, %"struct.std::basic_ios<char,std::char_traits<char> >" }
%"struct.std::basic_ostream<char,std::char_traits<char> >" = type { i32 (...)**, %"struct.std::basic_ios<char,std::char_traits<char> >" }
%"struct.std::basic_streambuf<char,std::char_traits<char> >" = type { i32 (...)**, i8*, i8*, i8*, i8*, i8*, i8*, %"struct.std::locale" }
%"struct.std::ctype<char>" = type { %"struct.std::locale::facet", i32*, i8, i32*, i32*, i16*, i8, [256 x i8], [256 x i8], i8 }
%"struct.std::ios_base" = type { i32 (...)**, i32, i32, i32, i32, i32, %"struct.std::ios_base::_Callback_list"*, %"struct.std::ios_base::_Words", [8 x %"struct.std::ios_base::_Words"], i32, %"struct.std::ios_base::_Words"*, %"struct.std::locale" }
%"struct.std::ios_base::Init" = type <{ i8 }>
%"struct.std::ios_base::_Callback_list" = type { %"struct.std::ios_base::_Callback_list"*, void (i32, %"struct.std::ios_base"*, i32)*, i32, i32 }
%"struct.std::ios_base::_Words" = type { i8*, i32 }
%"struct.std::locale" = type { %"struct.std::locale::_Impl"* }
%"struct.std::locale::_Impl" = type { i32, %"struct.std::locale::facet"**, i32, %"struct.std::locale::facet"**, i8** }
%"struct.std::locale::facet" = type { i32 (...)**, i32 }
%"struct.std::num_get<char,std::istreambuf_iterator<char, std::char_traits<char> > >" = type { %"struct.std::locale::facet" }
%union..0._10 = type { i32 }
%union.pthread_attr_t = type { i32, [8 x i32] }
%union.pthread_mutex_t = type { %struct..1__pthread_mutex_s }

@_ZTV3num = weak_odr constant [4 x i32 (...)*] [i32 (...)* null, i32 (...)* bitcast (%struct.__class_type_info_pseudo* @_ZTI3num to i32 (...)*), i32 (...)* bitcast (void (%struct.num*)* @_ZN3numD1Ev to i32 (...)*), i32 (...)* bitcast (void (%struct.num*)* @_ZN3numD0Ev to i32 (...)*)], align 8
@_ZTI3num = weak_odr constant %struct.__class_type_info_pseudo { %struct.__type_info_pseudo { i8* inttoptr (i32 add (i32 ptrtoint ([0 x i32 (...)*]* @_ZTVN10__cxxabiv117__class_type_infoE to i32), i32 8) to i8*), i8* getelementptr inbounds ([5 x i8]* @_ZTS3num, i32 0, i32 0) } }
@_ZTVN10__cxxabiv117__class_type_infoE = external constant [0 x i32 (...)*]
@_ZTS3num = weak_odr constant [5 x i8] c"3num\00"
@_ZStL8__ioinit = internal global %"struct.std::ios_base::Init" zeroinitializer
@__dso_handle = external global i8*
@_ZSt3cin = external global %"struct.std::basic_istream<char,std::char_traits<char> >"
@_ZSt4cout = external global %"struct.std::basic_ostream<char,std::char_traits<char> >"
@.str = private constant [12 x i8] c"The sum is \00", align 1
@llvm.global_ctors = appending global [1 x %0] [%0 { i32 65535, void ()* @_GLOBAL__I__ZN3numC2Eii }]

@_ZL20__gthrw_pthread_oncePiPFvvE = alias weak i32 (i32*, void ()*)* @pthread_once
@_ZL27__gthrw_pthread_getspecificj = alias weak i8* (i32)* @pthread_getspecific
@_ZL27__gthrw_pthread_setspecificjPKv = alias weak i32 (i32, i8*)* @pthread_setspecific
@_ZL22__gthrw_pthread_createPmPK14pthread_attr_tPFPvS3_ES3_ = alias weak i32 (i32*, %union.pthread_attr_t*, i8* (i8*)*, i8*)* @pthread_create
@_ZL22__gthrw_pthread_cancelm = alias weak i32 (i32)* @pthread_cancel
@_ZL26__gthrw_pthread_mutex_lockP15pthread_mutex_t = alias weak i32 (%union.pthread_mutex_t*)* @pthread_mutex_lock
@_ZL29__gthrw_pthread_mutex_trylockP15pthread_mutex_t = alias weak i32 (%union.pthread_mutex_t*)* @pthread_mutex_trylock
@_ZL28__gthrw_pthread_mutex_unlockP15pthread_mutex_t = alias weak i32 (%union.pthread_mutex_t*)* @pthread_mutex_unlock
@_ZL26__gthrw_pthread_mutex_initP15pthread_mutex_tPK19pthread_mutexattr_t = alias weak i32 (%union.pthread_mutex_t*, %union..0._10*)* @pthread_mutex_init
@_ZL26__gthrw_pthread_key_createPjPFvPvE = alias weak i32 (i32*, void (i8*)*)* @pthread_key_create
@_ZL26__gthrw_pthread_key_deletej = alias weak i32 (i32)* @pthread_key_delete
@_ZL30__gthrw_pthread_mutexattr_initP19pthread_mutexattr_t = alias weak i32 (%union..0._10*)* @pthread_mutexattr_init
@_ZL33__gthrw_pthread_mutexattr_settypeP19pthread_mutexattr_ti = alias weak i32 (%union..0._10*, i32)* @pthread_mutexattr_settype
@_ZL33__gthrw_pthread_mutexattr_destroyP19pthread_mutexattr_t = alias weak i32 (%union..0._10*)* @pthread_mutexattr_destroy

define void @_ZN3numC2Eii(%struct.num* nocapture %this, i32 %a, i32 %b) nounwind align 2 {
entry:
  %0 = getelementptr inbounds %struct.num* %this, i32 0, i32 0
  store i32 (...)** getelementptr inbounds ([4 x i32 (...)*]* @_ZTV3num, i32 0, i32 2), i32 (...)*** %0, align 4
  %1 = getelementptr inbounds %struct.num* %this, i32 0, i32 1
  store i32 %a, i32* %1, align 4
  %2 = getelementptr inbounds %struct.num* %this, i32 0, i32 2
  store i32 %b, i32* %2, align 4
  ret void
}

define internal void @_GLOBAL__I__ZN3numC2Eii() {
entry:
  tail call void @_ZNSt8ios_base4InitC1Ev(%"struct.std::ios_base::Init"* @_ZStL8__ioinit)
  %0 = tail call i32 @__cxa_atexit(void (i8*)* @__tcf_0, i8* null, i8* bitcast (i8** @__dso_handle to i8*)) nounwind
  ret void
}

define void @_ZN3numD1Ev(%struct.num* nocapture %this) nounwind align 2 {
entry:
  %0 = getelementptr inbounds %struct.num* %this, i32 0, i32 0
  store i32 (...)** getelementptr inbounds ([4 x i32 (...)*]* @_ZTV3num, i32 0, i32 2), i32 (...)*** %0, align 4
  ret void
}

define void @_ZN3numD0Ev(%struct.num* %this) nounwind align 2 {
entry:
  %0 = getelementptr inbounds %struct.num* %this, i32 0, i32 0
  store i32 (...)** getelementptr inbounds ([4 x i32 (...)*]* @_ZTV3num, i32 0, i32 2), i32 (...)*** %0, align 4
  %1 = bitcast %struct.num* %this to i8*
  tail call void @_ZdlPv(i8* %1) nounwind
  ret void
}

define void @_ZN3numC1Eii(%struct.num* nocapture %this, i32 %a, i32 %b) nounwind align 2 {
entry:
  %0 = getelementptr inbounds %struct.num* %this, i32 0, i32 0
  store i32 (...)** getelementptr inbounds ([4 x i32 (...)*]* @_ZTV3num, i32 0, i32 2), i32 (...)*** %0, align 4
  %1 = getelementptr inbounds %struct.num* %this, i32 0, i32 1
  store i32 %a, i32* %1, align 4
  %2 = getelementptr inbounds %struct.num* %this, i32 0, i32 2
  store i32 %b, i32* %2, align 4
  ret void
}

define i32 @_ZN3num3addERS_(%struct.num* nocapture %this, %struct.num* nocapture %addcl) nounwind align 2 {
entry:
  %0 = getelementptr inbounds %struct.num* %addcl, i32 0, i32 1
  %1 = load i32* %0, align 4
  %2 = getelementptr inbounds %struct.num* %addcl, i32 0, i32 2
  %3 = load i32* %2, align 4
  %4 = add nsw i32 %3, %1
  %5 = getelementptr inbounds %struct.num* %addcl, i32 0, i32 3
  store i32 %4, i32* %5, align 4
  ret i32 %4
}

declare void @_ZNSt8ios_base4InitC1Ev(%"struct.std::ios_base::Init"*)

declare i32 @__cxa_atexit(void (i8*)*, i8*, i8*) nounwind

define internal void @__tcf_0(i8* nocapture %unnamed_arg) {
entry:
  tail call void @_ZNSt8ios_base4InitD1Ev(%"struct.std::ios_base::Init"* @_ZStL8__ioinit)
  ret void
}

declare void @_ZNSt8ios_base4InitD1Ev(%"struct.std::ios_base::Init"*)

define i32 @main() {
entry:
  %a = alloca i32, align 4
  %b = alloca i32, align 4
  %0 = call %"struct.std::basic_istream<char,std::char_traits<char> >"* @_ZNSirsERi(%"struct.std::basic_istream<char,std::char_traits<char> >"* @_ZSt3cin, i32* %a)
  %1 = call %"struct.std::basic_istream<char,std::char_traits<char> >"* @_ZNSirsERi(%"struct.std::basic_istream<char,std::char_traits<char> >"* %0, i32* %b)
  %2 = load i32* %b, align 4
  %3 = load i32* %a, align 4
  %4 = add nsw i32 %3, %2
  %5 = call %"struct.std::basic_ostream<char,std::char_traits<char> >"* @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%"struct.std::basic_ostream<char,std::char_traits<char> >"* @_ZSt4cout, i8* getelementptr inbounds ([12 x i8]* @.str, i32 0, i32 0))
  %6 = call %"struct.std::basic_ostream<char,std::char_traits<char> >"* @_ZNSolsEi(%"struct.std::basic_ostream<char,std::char_traits<char> >"* %5, i32 %4)
  %7 = call %"struct.std::basic_ostream<char,std::char_traits<char> >"* @_ZNSolsEPFRSoS_E(%"struct.std::basic_ostream<char,std::char_traits<char> >"* %6, %"struct.std::basic_ostream<char,std::char_traits<char> >"* (%"struct.std::basic_ostream<char,std::char_traits<char> >"*)* @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_)
  ret i32 0
}

declare %"struct.std::basic_istream<char,std::char_traits<char> >"* @_ZNSirsERi(%"struct.std::basic_istream<char,std::char_traits<char> >"*, i32*)

declare %"struct.std::basic_ostream<char,std::char_traits<char> >"* @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%"struct.std::basic_ostream<char,std::char_traits<char> >"*, i8*)

declare %"struct.std::basic_ostream<char,std::char_traits<char> >"* @_ZNSolsEi(%"struct.std::basic_ostream<char,std::char_traits<char> >"*, i32)

declare %"struct.std::basic_ostream<char,std::char_traits<char> >"* @_ZNSolsEPFRSoS_E(%"struct.std::basic_ostream<char,std::char_traits<char> >"*, %"struct.std::basic_ostream<char,std::char_traits<char> >"* (%"struct.std::basic_ostream<char,std::char_traits<char> >"*)*)

declare %"struct.std::basic_ostream<char,std::char_traits<char> >"* @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%"struct.std::basic_ostream<char,std::char_traits<char> >"*)

declare void @_ZdlPv(i8*) nounwind

define void @_ZN3numD2Ev(%struct.num* nocapture %this) nounwind align 2 {
entry:
  %0 = getelementptr inbounds %struct.num* %this, i32 0, i32 0
  store i32 (...)** getelementptr inbounds ([4 x i32 (...)*]* @_ZTV3num, i32 0, i32 2), i32 (...)*** %0, align 4
  ret void
}

declare extern_weak i32 @pthread_once(i32*, void ()*)

declare extern_weak i8* @pthread_getspecific(i32)

declare extern_weak i32 @pthread_setspecific(i32, i8*)

declare extern_weak i32 @pthread_create(i32*, %union.pthread_attr_t*, i8* (i8*)*, i8*)

declare extern_weak i32 @pthread_cancel(i32)

declare extern_weak i32 @pthread_mutex_lock(%union.pthread_mutex_t*)

declare extern_weak i32 @pthread_mutex_trylock(%union.pthread_mutex_t*)

declare extern_weak i32 @pthread_mutex_unlock(%union.pthread_mutex_t*)

declare extern_weak i32 @pthread_mutex_init(%union.pthread_mutex_t*, %union..0._10*)

declare extern_weak i32 @pthread_key_create(i32*, void (i8*)*)

declare extern_weak i32 @pthread_key_delete(i32)

declare extern_weak i32 @pthread_mutexattr_init(%union..0._10*)

declare extern_weak i32 @pthread_mutexattr_settype(%union..0._10*, i32)

declare extern_weak i32 @pthread_mutexattr_destroy(%union..0._10*)
