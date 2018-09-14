//
// Created by Rian on 9/14/2018.
//

#include "Strand.hpp"

unsigned long Strand::getThreadId() const {
    return threadId;
}

void Strand::setThreadId(unsigned long threadId) {
    Strand::threadId = threadId;
}

unsigned char Strand::getPriority() const {
    return priority;
}

void Strand::setPriority(unsigned char priority) {
    Strand::priority = priority;
}

unsigned long Strand::getExecutionTime() const {
    return executionTime;
}

void Strand::setExecutionTime(unsigned long executionTime) {
    Strand::executionTime = executionTime;
}

unsigned char Strand::getAlertStatus() const {
    return alertStatus;
}

void Strand::setAlertStatus(unsigned char alertStatus) {
    Strand::alertStatus = alertStatus;
}

unsigned int Strand::getSuspensionCount() const {
    return suspensionCount;
}

void Strand::setSuspensionCount(unsigned int suspensionCount) {
    Strand::suspensionCount = suspensionCount;
}

const unsigned long Strand::getHostProcessId() const {
    return hostProcessId;
}

unsigned char Strand::getExitStatus() const {
    return exitStatus;
}

void Strand::setExitStatus(unsigned char exitStatus) {
    Strand::exitStatus = exitStatus;
}

Strand::Strand(unsigned long threadId, unsigned char priority, unsigned long executionTime, unsigned char alertStatus,
               unsigned int suspensionCount, const unsigned long hostProcessId) : threadId(threadId),
                                                                                  priority(priority),
                                                                                  executionTime(executionTime),
                                                                                  alertStatus(alertStatus),
                                                                                  suspensionCount(suspensionCount),
                                                                                  hostProcessId(hostProcessId) {}

Strand::~Strand() = default;
