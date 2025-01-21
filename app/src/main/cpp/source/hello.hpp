#ifndef HELLO_HPP
#define HELLO_HPP   // header 파일 정의

#include <string>

using namespace std;

namespace HelloStrings {
    string getHelloWorld();

    string getHelloNdk();

    string getHelloUser(const string &username);
}

#endif