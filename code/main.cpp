#include <iostream>
#include "CodeObject.hpp"
#include "Processor.hpp"
#include "MemoryManager.hpp"
#include "Scheduler.h"

void loggingStart(){
    freopen("output2.csv", "w", stdout);
    freopen("audit.log", "w", stderr);
}

int main() {
    loggingStart();
    Processor mainProcessor = Processor();
    MemoryManager mainMemoryManager = MemoryManager();
    mainMemoryManager.populateInitialList();
    Scheduler roundRobin = Scheduler();

    return 0;
}