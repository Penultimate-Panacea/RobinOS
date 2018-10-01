//
// Created by Rian on 9/30/2018.
//

#include <iostream>
#include "RoundRobin.hpp"
#include "GlobalVariables.hpp"


RoundRobin::RoundRobin(const Processor &activeProcessor, unsigned int allowedTime) : activeProcessor(activeProcessor),
                                                                                     allowedTime(allowedTime) {}

RoundRobin::~RoundRobin() {

}

const Processor &RoundRobin::getActiveProcessor() const {
    return activeProcessor;
}

void RoundRobin::setActiveProcessor(const Processor &activeProcessor) {
    RoundRobin::activeProcessor = activeProcessor;
}

unsigned int RoundRobin::getAllowedTime() const {
    return allowedTime;
}

void RoundRobin::setAllowedTime(unsigned int allowedTime) {
    RoundRobin::allowedTime = allowedTime;
}

void RoundRobin::scheduler() {
    std::cerr << "Process moved from input" << std::endl;
    activeProcessor.setActiveProcess(activeProcessor.input.front());
    activeProcessor.input.pop_front();
    do{
        std::cerr << "Process running" << std::endl;
        activeProcessor.runProcess();
    } while (GlobalVariables::clockCycles % allowedTime != 0);
    std::cerr << "Process moved to wait" << std::endl;
    activeProcessor.wait.emplace_back(activeProcessor.getActiveProcess());
}