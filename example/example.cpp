#include "spacelogs.hpp"
#include <fstream>
int main(){
    SpaceLogs log;
    "Hello world from SpaceLogs!\nSpaceLogs is an easy to use logging library for C++ developers.">>log;
    std::ofstream ofile("test.log");
    ofile<<log;
    return 0;
}