#include <iostream>
#include "CodeObject.hpp"
#include "Processor.hpp"
#include "MemoryManager.hpp"


int main() {
    CodeObject simple = CodeObject(15,324);
    CodeObject bigComp = CodeObject(8192,256);
    CodeObject bigMem = CodeObject(256, 8192);
    CodeObject justHuge = CodeObject(12365536, 12365536);
    Processor mainProcessor = Processor();
    MemoryManager mainMemoryManager = MemoryManager();
    mainMemoryManager.populateInitialList();
}