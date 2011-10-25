; ModuleID = 'ord_cla.cpp'
target datalayout = "e-p:32:32:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:32:64-f32:32:32-f64:32:64-v64:64:64-v128:128:128-a0:0:64-f80:32:32-n8:16:32"
target triple = "i386-pc-linux-gnu"

%0 = type { i32, void ()* }
%struct..1__pthread_mutex_s = type { i32, i32, i32, i32, i32, %union..0._10 }
%struct.hello = type <{ i8 }>
%union..0._10 = type { i32 }
%union.pthread_attr_t = type { i32, [8 x i32] }
%union.pthread_mutex_t = type { %struct..1__pthread_mutex_s }

@_ZStL8__ioinit = internal global %struct.hello zeroinitializer
@__dso_handle = external global i8*
@llvm.global_ctors = appending global [1 x %0] [%0 { i32 65535, void ()* @_GLOBAL__I_main }]

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

define i32 @main() nounwind readnone {
entry:
  ret i32 0
}

define internal void @_GLOBAL__I_main() {
entry:
  tail call void @_ZNSt8ios_base4InitC1Ev(%struct.hello* @_ZStL8__ioinit)
  %0 = tail call i32 @__cxa_atexit(void (i8*)* @__tcf_0, i8* null, i8* bitcast (i8** @__dso_handle to i8*)) nounwind
  ret void
}

declare void @_ZNSt8ios_base4InitC1Ev(%struct.hello*)

declare i32 @__cxa_atexit(void (i8*)*, i8*, i8*) nounwind

define internal void @__tcf_0(i8* nocapture %unnamed_arg) {
entry:
  tail call void @_ZNSt8ios_base4InitD1Ev(%struct.hello* @_ZStL8__ioinit)
  ret void
}

declare void @_ZNSt8ios_base4InitD1Ev(%struct.hello*)

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
