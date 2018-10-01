#include <iostream>
#include "CodeObject.hpp"
#include "Processor.hpp"
#include "MemoryManager.hpp"
#include "Scheduler.h"
#include "CodeUtilities.hpp"
#include "GlobalVariables.hpp"
#include "RoundRobin.hpp"


void loggingStart(){
    freopen("audit.log", "w", stderr);
}

unsigned long clockCycles;
int main() {
    clockCycles = 0;
    loggingStart();
    Processor mainProcessor = Processor();
    MemoryManager mainMemoryManager = MemoryManager();
    mainMemoryManager.populateInitialList();
    mainProcessor.setInput(listToDeque(mainMemoryManager.getInitialList()));
    RoundRobin scheduler = RoundRobin(mainProcessor, 75);
    scheduler.scheduler();
    return 0;
}