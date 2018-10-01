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

int main() {
    loggingStart();
    Processor mainProcessor = Processor();
    MemoryManager mainMemoryManager = MemoryManager();
    mainMemoryManager.populateInitialList();
    mainProcessor.setInput(listToDeque(mainMemoryManager.getInitialList()));
    RoundRobin scheduler = RoundRobin(mainProcessor, 15000);
    do{scheduler.scheduler();}
    while (mainMemoryManager.getInitialList().size() != mainProcessor.output.size());
    return 0;
}