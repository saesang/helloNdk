#include <jni.h> // JNI(Java Native Interface)를 사용하기 위한 헤더 파일을 포함합니다.
#include <string>

using namespace std;

// extern "C"는 C++ 컴파일러가 함수 이름을 C 방식으로 내보내도록 지정합니다.
// JNIEXPORT와 JNICALL은 JNI 함수의 호출 규약을 지정하는 매크로입니다.
extern "C" JNIEXPORT jstring JNICALL

// C++ 문자열을 Java의 String 객체로 변환하여 반환하는 메소드
Java_com_example_hellondk_MainActivity_stringFromJNI(
        JNIEnv* env, // JNIEnv*는 JNI 환경 포인터로, Java와 네이티브 코드 간의 상호작용을 관리합니다.
        jobject /* this */) { // jobject는 이 함수를 호출한 Java 객체(MainActivity)입니다. 여기서는 사용되지 않으므로 주석 처리합니다.

    // C++ 표준 라이브러리에서 string 타입으로 "Hello from C++" 문자열을 생성합니다.
    string hello = "Hello from C++";

    // JNIEnv 포인터(env)를 사용하여 C++ 문자열을 Java 문자열로 변환합니다.
    // NewStringUTF은 UTF-8 인코딩된 C 문자열을 Java의 jstring 객체로 변환합니다.
    return env->NewStringUTF(hello.c_str());
}
