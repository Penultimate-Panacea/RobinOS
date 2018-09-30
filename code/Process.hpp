//
// Created by Rian on 9/14/2018.
//


#include <string>
#include <stack>
#include "CodeObject.hpp"
#include "Strand.hpp"
#ifndef ROBINOS_PROCESS_HPP
#define ROBINOS_PROCESS_HPP

using namespace std;

class Process{
private:
    unsigned long processId;
    string securityStatus;
    unsigned char basePriority;
    unsigned long executionTime;
    stack<CodeObject> codeObjectList;
    unsigned char statusCode;

public:
    unsigned long getProcessId() const;

    void setProcessId(unsigned long processId);

    const string &getSecurityStatus() const;

    void setSecurityStatus(const string &securityStatus);

    unsigned char getBasePriority() const;

    void setBasePriority(unsigned char basePriority);

    unsigned long getExecutionTime() const;

    void setExecutionTime(unsigned long executionTime);

    unsigned char getStatusCode() const;

    void setStatusCode(unsigned char statusCode);

    const stack<CodeObject> &getCodeObjectList() const;

    void setCodeObjectList(const stack<CodeObject> &codeObjectList);

    Process(unsigned long processId, const string &securityStatus, unsigned char basePriority,
            unsigned long executionTime, const stack<CodeObject> &codeObjectList, unsigned char statusCode);

    virtual ~Process();
};


#endif //ROBINOS_PROCESS_HPP
