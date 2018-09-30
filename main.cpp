#include <iostream>
#include "CodeObject.hpp"
#include "Processor.hpp"
#include "MemoryManager.hpp"


int main() {
    Processor mainProcessor = Processor();
    MemoryManager mainMemoryManager = MemoryManager();
    mainMemoryManager.populateInitialList();
}