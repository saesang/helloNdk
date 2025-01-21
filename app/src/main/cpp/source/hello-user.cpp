#include "hello.hpp"

namespace HelloStrings {
    string getHelloUser(const string &username) {
        return "Hello, " + username + "!";
    }
}