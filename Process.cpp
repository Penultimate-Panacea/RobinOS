//
// Created by Rian on 9/14/2018.
//

#include "Process.hpp"

unsigned long Process::getProcessId() const {
    return processId;
}

void Process::setProcessId(unsigned long processId) {
    Process::processId = processId;
}

const string &Process::getSecurityStatus() const {
    return securityStatus;
}

void Process::setSecurityStatus(const string &securityStatus) {
    Process::securityStatus = securityStatus;
}

unsigned char Process::getBasePriority() const {
    return basePriority;
}

void Process::setBasePriority(unsigned char basePriority) {
    Process::basePriority = basePriority;
}

unsigned long Process::getExecutionTime() const {
    return executionTime;
}

void Process::setExecutionTime(unsigned long executionTime) {
    Process::executionTime = executionTime;
}

unsigned char Process::getStatusCode() const {
    return statusCode;
}

void Process::setStatusCode(unsigned char statusCode) {
    Process::statusCode = statusCode;
}

const stack<CodeObject> &Process::getCodeObjectList() const {
    return codeObjectList;
}

void Process::setCodeObjectList(const stack<CodeObject> &codeObjectList) {
    Process::codeObjectList = codeObjectList;
}

Process::Process(unsigned long processId, const string &securityStatus, unsigned char basePriority,
                 unsigned long executionTime, const stack<CodeObject> &codeObjectList, unsigned char statusCode)
        : processId(processId), securityStatus(securityStatus), basePriority(basePriority),
          executionTime(executionTime), codeObjectList(codeObjectList), statusCode(statusCode) {}


Process::~Process() = default;


