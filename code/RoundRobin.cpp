//
// Created by Rian on 9/30/2018.
//

#include "RoundRobin.hpp"
#include "GlobalVariables.hpp"

unsigned long clockCycles;
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
    activeProcessor.setActiveProcess(activeProcessor.input.front());
    activeProcessor.input.pop_front();
    do{
        activeProcessor.runProcess();
    } while (clockCycles % allowedTime != 0);
    activeProcessor.wait.emplace_back(activeProcessor.getActiveProcess());
}