#include <string>
#include <windows.h>
#include "Include.h"
#include "iostream"


std::string userName() {

    std::string result;
    char buffer[128];

    FILE* pipe = _popen("echo %USERNAME%", "r");
    if (pipe) {
        while (fgets(buffer, sizeof(buffer), pipe) != nullptr) {
            result += buffer;
        }
        _pclose(pipe);

        result.erase(std::remove(result.begin(), result.end(), '\n'), result.end());
    }

    return result;

}