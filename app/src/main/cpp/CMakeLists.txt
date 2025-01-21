cmake_minimum_required(VERSION 3.22.1)

# 프로젝트 이름
project("hellondk")

# 추가할 c++ 소스파일 및 헤더파일, JNI 파일
# 라이브러리 생성
add_library(${CMAKE_PROJECT_NAME} SHARED
        source/hello.hpp
        source/hello-ndk.cpp
        source/hello-user.cpp
        jni/main-activity-jni.hpp
        jni/main-activity-jni.cpp
)

# 라이브러리 연결 == 안드로이드 build.gradle에서의 라이브러리 의존성 추가
target_link_libraries(${CMAKE_PROJECT_NAME}
        android
        log)