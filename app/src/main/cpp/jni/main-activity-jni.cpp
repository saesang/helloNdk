#include "main-activity-jni.hpp"
#include "../source/hello.hpp"

using namespace std;
using namespace HelloStrings;

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_hellondk_MainActivity_getHelloWorld(JNIEnv *env, jobject obj) {
    string str = getHelloWorld();
    return env->NewStringUTF(str.c_str());
}
extern "C" JNIEXPORT jstring JNICALL
Java_com_example_hellondk_MainActivity_getHelloNdk(JNIEnv *env, jobject obj) {
    string str = getHelloNdk();
    return env->NewStringUTF(str.c_str());
}
extern "C" JNIEXPORT jstring JNICALL
Java_com_example_hellondk_MainActivity_getHelloUser(JNIEnv *env, jobject obj, jstring username) {
    // jstring을 const char*로 변환
    const char *usernameChars = env->GetStringUTFChars(username, nullptr);
    // const char* -> string으로 변환
    string usernameC(usernameChars);
    // 메모리 해제 (반드시 호출)
    env->ReleaseStringUTFChars(username, usernameChars);

    // 변환된 문자열로 getHelloUser 호출
    string str = getHelloUser(usernameC);
    return env->NewStringUTF(str.c_str());
}
