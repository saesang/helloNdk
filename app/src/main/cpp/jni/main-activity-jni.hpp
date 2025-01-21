#ifndef MAIN_ACTIVITY_JNI_HPP
#define MAIN_ACTIVITY_JNI_HPP

#include <jni.h>

#ifdef __cplusplus  // c++ 환경이면 괄호 열기
extern "C" {
#endif

JNIEXPORT jstring JNICALL
Java_com_example_hellondk_MainActivity_getHelloWorld(JNIEnv *env, jobject obj);
JNIEXPORT jstring JNICALL
Java_com_example_hellondk_MainActivity_getHelloNdk(JNIEnv *env, jobject obj);
JNIEXPORT jstring JNICALL
Java_com_example_hellondk_MainActivity_getHelloUser(JNIEnv *env, jobject obj, jstring username);

#ifdef __cplusplus // c++ 환경이면 괄호 닫기
}
#endif

#endif