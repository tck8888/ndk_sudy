/* DO NOT EDIT THIS FILE - it is machine generated */
#include "jni.h"
/* Header for class com_tck_NdkSimple1 */

#ifndef _Included_com_tck_NdkSimple1
#define _Included_com_tck_NdkSimple1
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_tck_NdkSimple1
 * Method:    changeName
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_tck_NdkSimple1_changeName
  (JNIEnv *, jobject);

/*
 * Class:     com_tck_NdkSimple1
 * Method:    changeAge
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_tck_NdkSimple1_changeAge
  (JNIEnv *, jclass);

/*
 * Class:     com_tck_NdkSimple1
 * Method:    callAddMethod
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_tck_NdkSimple1_callAddMethod
  (JNIEnv *, jobject);

/*
 * Class:     com_tck_NdkSimple1
 * Method:    callGetUUID
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_tck_NdkSimple1_callGetUUID
  (JNIEnv *, jclass);

/*
 * Class:     com_tck_NdkSimple1
 * Method:    createPoint
 * Signature: ()Lcom/tck/Point;
 */
JNIEXPORT jobject JNICALL Java_com_tck_NdkSimple1_createPoint
  (JNIEnv *, jclass);

/*
 * Class:     com_tck_NdkSimple1
 * Method:    sort
 * Signature: ([I)V
 */
JNIEXPORT void JNICALL Java_com_tck_NdkSimple1_sort
  (JNIEnv *, jclass, jintArray);

/*
 * Class:     com_tck_NdkSimple1
 * Method:    localRef
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_tck_NdkSimple1_localRef
  (JNIEnv *, jclass);

/*
 * Class:     com_tck_NdkSimple1
 * Method:    saveGlobalRef
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_tck_NdkSimple1_saveGlobalRef
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_tck_NdkSimple1
 * Method:    getGlobalRef
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tck_NdkSimple1_getGlobalRef
  (JNIEnv *, jclass);

/*
 * Class:     com_tck_NdkSimple1
 * Method:    delGlobalRef
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_tck_NdkSimple1_delGlobalRef
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
