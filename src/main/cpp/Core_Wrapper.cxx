/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.12
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */


#ifndef SWIGJAVA
#define SWIGJAVA
#endif



#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if defined(__GNUC__)
#  if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#    ifndef GCC_HASCLASSVISIBILITY
#      define GCC_HASCLASSVISIBILITY
#    endif
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif

/* Deal with Apple's deprecated 'AssertMacros.h' from Carbon-framework */
#if defined(__APPLE__) && !defined(__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES)
# define __ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES 0
#endif

/* Intel's compiler complains if a variable which was never initialised is
 * cast to void, which is a common idiom which we use to indicate that we
 * are aware a variable isn't used.  So we just silence that warning.
 * See: https://github.com/swig/swig/issues/192 for more discussion.
 */
#ifdef __INTEL_COMPILER
# pragma warning disable 592
#endif


/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1, 
  SWIG_JavaIOException, 
  SWIG_JavaRuntimeException, 
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  jenv->ExceptionClear();
  excep = jenv->FindClass(except_ptr->java_exception);
  if (excep)
    jenv->ThrowNew(excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else


#include "ValueHolder.hpp"
#include "TrackerCore.hpp"
#include "ContentsTrackerCore.hpp"


#include <string>


#include <typeinfo>
#include <stdexcept>


#include <map>
#include <algorithm>
#include <stdexcept>


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jdouble JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_OBSERVATION_1TIME_1get(JNIEnv *jenv, jclass jcls) {
  jdouble jresult = 0 ;
  double result;
  
  (void)jenv;
  (void)jcls;
  result = (double)(2.0);
  jresult = (jdouble)result; 
  return jresult;
}


SWIGEXPORT jdouble JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_HEARTBEAT_1COUNT_1get(JNIEnv *jenv, jclass jcls) {
  jdouble jresult = 0 ;
  double result;
  
  (void)jenv;
  (void)jcls;
  result = (double)((25.0/2.0));
  jresult = (jdouble)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_new_1TrackerCore(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  TrackerCore *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (TrackerCore *)new TrackerCore();
  *(TrackerCore **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_delete_1TrackerCore(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(TrackerCore **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_TrackerCore_1state(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  CoreTrackerState result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TrackerCore **)&jarg1; 
  result = (arg1)->state();
  *(CoreTrackerState **)&jresult = new CoreTrackerState((const CoreTrackerState &)result); 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_TrackerCore_1updateAttribute_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jlong jarg3, jstring jarg4) {
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  std::string arg2 ;
  ValueHolder arg3 ;
  std::string arg4 ;
  ValueHolder *argp3 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TrackerCore **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  } 
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return ;
  (&arg2)->assign(arg2_pstr);
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  argp3 = *(ValueHolder **)&jarg3; 
  if (!argp3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null ValueHolder");
    return ;
  }
  arg3 = *argp3; 
  if(!jarg4) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  } 
  const char *arg4_pstr = (const char *)jenv->GetStringUTFChars(jarg4, 0); 
  if (!arg4_pstr) return ;
  (&arg4)->assign(arg4_pstr);
  jenv->ReleaseStringUTFChars(jarg4, arg4_pstr); 
  (arg1)->updateAttribute(arg2,arg3,arg4);
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_TrackerCore_1updateAttribute_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jlong jarg3) {
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  std::string arg2 ;
  ValueHolder arg3 ;
  ValueHolder *argp3 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TrackerCore **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  } 
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return ;
  (&arg2)->assign(arg2_pstr);
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  argp3 = *(ValueHolder **)&jarg3; 
  if (!argp3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null ValueHolder");
    return ;
  }
  arg3 = *argp3; 
  (arg1)->updateAttribute(arg2,arg3);
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_TrackerCore_1reset(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TrackerCore **)&jarg1; 
  (arg1)->reset();
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_TrackerCore_1setup(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TrackerCore **)&jarg1; 
  (arg1)->setup();
}


SWIGEXPORT jstring JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_TrackerCore_1getViewId(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  std::string result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TrackerCore **)&jarg1; 
  result = (arg1)->getViewId();
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_TrackerCore_1getNumberOfVideos(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TrackerCore **)&jarg1; 
  result = (int)(arg1)->getNumberOfVideos();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_TrackerCore_1getCoreVersion(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  std::string result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TrackerCore **)&jarg1; 
  result = (arg1)->getCoreVersion();
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_TrackerCore_1getViewSession(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  std::string result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TrackerCore **)&jarg1; 
  result = (arg1)->getViewSession();
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_TrackerCore_1getNumberOfErrors(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TrackerCore **)&jarg1; 
  result = (int)(arg1)->getNumberOfErrors();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_TrackerCore_1sendRequest(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TrackerCore **)&jarg1; 
  (arg1)->sendRequest();
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_TrackerCore_1sendStart(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TrackerCore **)&jarg1; 
  (arg1)->sendStart();
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_TrackerCore_1sendEnd(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TrackerCore **)&jarg1; 
  (arg1)->sendEnd();
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_TrackerCore_1sendPause(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TrackerCore **)&jarg1; 
  (arg1)->sendPause();
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_TrackerCore_1sendResume(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TrackerCore **)&jarg1; 
  (arg1)->sendResume();
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_TrackerCore_1sendSeekStart(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TrackerCore **)&jarg1; 
  (arg1)->sendSeekStart();
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_TrackerCore_1sendSeekEnd(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TrackerCore **)&jarg1; 
  (arg1)->sendSeekEnd();
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_TrackerCore_1sendBufferStart(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TrackerCore **)&jarg1; 
  (arg1)->sendBufferStart();
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_TrackerCore_1sendBufferEnd(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TrackerCore **)&jarg1; 
  (arg1)->sendBufferEnd();
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_TrackerCore_1sendHeartbeat(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TrackerCore **)&jarg1; 
  (arg1)->sendHeartbeat();
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_TrackerCore_1sendRenditionChange(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TrackerCore **)&jarg1; 
  (arg1)->sendRenditionChange();
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_TrackerCore_1sendError(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  std::string arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TrackerCore **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  } 
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return ;
  (&arg2)->assign(arg2_pstr);
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  (arg1)->sendError(arg2);
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_TrackerCore_1sendPlayerReady(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TrackerCore **)&jarg1; 
  (arg1)->sendPlayerReady();
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_TrackerCore_1sendDownload(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TrackerCore **)&jarg1; 
  (arg1)->sendDownload();
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_TrackerCore_1sendCustomAction_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  std::string arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TrackerCore **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  } 
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return ;
  (&arg2)->assign(arg2_pstr);
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  (arg1)->sendCustomAction(arg2);
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_TrackerCore_1sendCustomAction_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jlong jarg3) {
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  std::string arg2 ;
  SwigValueWrapper< std::map< std::string,ValueHolder > > arg3 ;
  std::map< std::string,ValueHolder > *argp3 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TrackerCore **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  } 
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return ;
  (&arg2)->assign(arg2_pstr);
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  argp3 = *(std::map< std::string,ValueHolder > **)&jarg3; 
  if (!argp3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null std::map< std::string,ValueHolder >");
    return ;
  }
  arg3 = *argp3; 
  (arg1)->sendCustomAction(arg2,arg3);
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_TrackerCore_1setOptions_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  SwigValueWrapper< std::map< std::string,ValueHolder > > arg2 ;
  std::map< std::string,ValueHolder > *argp2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TrackerCore **)&jarg1; 
  argp2 = *(std::map< std::string,ValueHolder > **)&jarg2; 
  if (!argp2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null std::map< std::string,ValueHolder >");
    return ;
  }
  arg2 = *argp2; 
  (arg1)->setOptions(arg2);
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_TrackerCore_1setOptions_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jstring jarg3) {
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  SwigValueWrapper< std::map< std::string,ValueHolder > > arg2 ;
  std::string arg3 ;
  std::map< std::string,ValueHolder > *argp2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TrackerCore **)&jarg1; 
  argp2 = *(std::map< std::string,ValueHolder > **)&jarg2; 
  if (!argp2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null std::map< std::string,ValueHolder >");
    return ;
  }
  arg2 = *argp2; 
  if(!jarg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  } 
  const char *arg3_pstr = (const char *)jenv->GetStringUTFChars(jarg3, 0); 
  if (!arg3_pstr) return ;
  (&arg3)->assign(arg3_pstr);
  jenv->ReleaseStringUTFChars(jarg3, arg3_pstr); 
  (arg1)->setOptions(arg2,arg3);
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_TrackerCore_1startTimerEvent(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TrackerCore **)&jarg1; 
  (arg1)->startTimerEvent();
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_TrackerCore_1abortTimerEvent(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TrackerCore **)&jarg1; 
  (arg1)->abortTimerEvent();
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_TrackerCore_1trackerTimeEvent(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TrackerCore **)&jarg1; 
  (arg1)->trackerTimeEvent();
}


SWIGEXPORT jboolean JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_TrackerCore_1setTimestamp(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jdouble jarg2, jstring jarg3) {
  jboolean jresult = 0 ;
  TrackerCore *arg1 = (TrackerCore *) 0 ;
  double arg2 ;
  std::string arg3 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TrackerCore **)&jarg1; 
  arg2 = (double)jarg2; 
  if(!jarg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg3_pstr = (const char *)jenv->GetStringUTFChars(jarg3, 0); 
  if (!arg3_pstr) return 0;
  (&arg3)->assign(arg3_pstr);
  jenv->ReleaseStringUTFChars(jarg3, arg3_pstr); 
  result = (bool)(arg1)->setTimestamp(arg2,arg3);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_new_1ContentsTrackerCore(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  ContentsTrackerCore *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (ContentsTrackerCore *)new ContentsTrackerCore();
  *(ContentsTrackerCore **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_delete_1ContentsTrackerCore(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  ContentsTrackerCore *arg1 = (ContentsTrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(ContentsTrackerCore **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_ContentsTrackerCore_1reset(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  ContentsTrackerCore *arg1 = (ContentsTrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ContentsTrackerCore **)&jarg1; 
  (arg1)->reset();
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_ContentsTrackerCore_1setup(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  ContentsTrackerCore *arg1 = (ContentsTrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ContentsTrackerCore **)&jarg1; 
  (arg1)->setup();
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_ContentsTrackerCore_1sendRequest(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  ContentsTrackerCore *arg1 = (ContentsTrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ContentsTrackerCore **)&jarg1; 
  (arg1)->sendRequest();
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_ContentsTrackerCore_1sendStart(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  ContentsTrackerCore *arg1 = (ContentsTrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ContentsTrackerCore **)&jarg1; 
  (arg1)->sendStart();
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_ContentsTrackerCore_1sendEnd(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  ContentsTrackerCore *arg1 = (ContentsTrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ContentsTrackerCore **)&jarg1; 
  (arg1)->sendEnd();
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_ContentsTrackerCore_1sendPause(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  ContentsTrackerCore *arg1 = (ContentsTrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ContentsTrackerCore **)&jarg1; 
  (arg1)->sendPause();
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_ContentsTrackerCore_1sendResume(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  ContentsTrackerCore *arg1 = (ContentsTrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ContentsTrackerCore **)&jarg1; 
  (arg1)->sendResume();
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_ContentsTrackerCore_1sendSeekStart(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  ContentsTrackerCore *arg1 = (ContentsTrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ContentsTrackerCore **)&jarg1; 
  (arg1)->sendSeekStart();
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_ContentsTrackerCore_1sendSeekEnd(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  ContentsTrackerCore *arg1 = (ContentsTrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ContentsTrackerCore **)&jarg1; 
  (arg1)->sendSeekEnd();
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_ContentsTrackerCore_1sendBufferStart(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  ContentsTrackerCore *arg1 = (ContentsTrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ContentsTrackerCore **)&jarg1; 
  (arg1)->sendBufferStart();
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_ContentsTrackerCore_1sendBufferEnd(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  ContentsTrackerCore *arg1 = (ContentsTrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ContentsTrackerCore **)&jarg1; 
  (arg1)->sendBufferEnd();
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_ContentsTrackerCore_1sendHeartbeat(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  ContentsTrackerCore *arg1 = (ContentsTrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ContentsTrackerCore **)&jarg1; 
  (arg1)->sendHeartbeat();
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_ContentsTrackerCore_1sendRenditionChange(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  ContentsTrackerCore *arg1 = (ContentsTrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ContentsTrackerCore **)&jarg1; 
  (arg1)->sendRenditionChange();
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_ContentsTrackerCore_1sendError(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  ContentsTrackerCore *arg1 = (ContentsTrackerCore *) 0 ;
  std::string arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ContentsTrackerCore **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  } 
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return ;
  (&arg2)->assign(arg2_pstr);
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  (arg1)->sendError(arg2);
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_ContentsTrackerCore_1sendPlayerReady(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  ContentsTrackerCore *arg1 = (ContentsTrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ContentsTrackerCore **)&jarg1; 
  (arg1)->sendPlayerReady();
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_ContentsTrackerCore_1sendDownload(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  ContentsTrackerCore *arg1 = (ContentsTrackerCore *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ContentsTrackerCore **)&jarg1; 
  (arg1)->sendDownload();
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_ContentsTrackerCore_1sendCustomAction_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  ContentsTrackerCore *arg1 = (ContentsTrackerCore *) 0 ;
  std::string arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ContentsTrackerCore **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  } 
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return ;
  (&arg2)->assign(arg2_pstr);
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  (arg1)->sendCustomAction(arg2);
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_ContentsTrackerCore_1sendCustomAction_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jlong jarg3) {
  ContentsTrackerCore *arg1 = (ContentsTrackerCore *) 0 ;
  std::string arg2 ;
  SwigValueWrapper< std::map< std::string,ValueHolder > > arg3 ;
  std::map< std::string,ValueHolder > *argp3 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ContentsTrackerCore **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  } 
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return ;
  (&arg2)->assign(arg2_pstr);
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  argp3 = *(std::map< std::string,ValueHolder > **)&jarg3; 
  if (!argp3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null std::map< std::string,ValueHolder >");
    return ;
  }
  arg3 = *argp3; 
  (arg1)->sendCustomAction(arg2,arg3);
}


SWIGEXPORT jboolean JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_ContentsTrackerCore_1setTimestamp(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jdouble jarg2, jstring jarg3) {
  jboolean jresult = 0 ;
  ContentsTrackerCore *arg1 = (ContentsTrackerCore *) 0 ;
  double arg2 ;
  std::string arg3 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ContentsTrackerCore **)&jarg1; 
  arg2 = (double)jarg2; 
  if(!jarg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg3_pstr = (const char *)jenv->GetStringUTFChars(jarg3, 0); 
  if (!arg3_pstr) return 0;
  (&arg3)->assign(arg3_pstr);
  jenv->ReleaseStringUTFChars(jarg3, arg3_pstr); 
  result = (bool)(arg1)->setTimestamp(arg2,arg3);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_ContentsTrackerCore_1adHappened(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jdouble jarg2) {
  ContentsTrackerCore *arg1 = (ContentsTrackerCore *) 0 ;
  double arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ContentsTrackerCore **)&jarg1; 
  arg2 = (double)jarg2; 
  (arg1)->adHappened(arg2);
}


SWIGEXPORT jlong JNICALL Java_com_newrelic_videoagent_swig_Core_1WrapperJNI_ContentsTrackerCore_1SWIGUpcast(JNIEnv *jenv, jclass jcls, jlong jarg1) {
    jlong baseptr = 0;
    (void)jenv;
    (void)jcls;
    *(TrackerCore **)&baseptr = *(ContentsTrackerCore **)&jarg1;
    return baseptr;
}

#ifdef __cplusplus
}
#endif

