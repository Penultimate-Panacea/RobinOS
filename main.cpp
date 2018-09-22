#include <iostream>
#include "CodeObject.hpp"


int main() {
    CodeObject simple = CodeObject(15,324);
    CodeObject bigComp = CodeObject(8192,256);
    CodeObject bigMem = CodeObject(256, 8192);
    CodeObject justHuge = CodeObject(65536, 65536)
}