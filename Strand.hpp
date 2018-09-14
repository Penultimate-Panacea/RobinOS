//
// Created by Rian on 9/14/2018.
//



#ifndef ROBINOS_STRAND_HPP
#define ROBINOS_STRAND_HPP

#include <stack>
#include "CodeObject.hpp"

class Strand {
private:
    unsigned long strandId;
    unsigned char priority;
    unsigned long executionTime;
    unsigned char alertStatus;
    unsigned int suspensionCount;
    const unsigned long hostProcessId;
    unsigned char exitStatus;
    std::stack<CodeObject> codeObjectList;
public:
    unsigned long getStrandId() const;

    void setStrandId(unsigned long strandId);

    unsigned char getPriority() const;

    void setPriority(unsigned char priority);

    unsigned long getExecutionTime() const;

    void setExecutionTime(unsigned long executionTime);

    unsigned char getAlertStatus() const;

    void setAlertStatus(unsigned char alertStatus);

    unsigned int getSuspensionCount() const;

    void setSuspensionCount(unsigned int suspensionCount);

    const unsigned long getHostProcessId() const;

    unsigned char getExitStatus() const;

    void setExitStatus(unsigned char exitStatus);

    Strand(unsigned long strandId, unsigned char priority, unsigned long executionTime, unsigned char alertStatus,
           unsigned int suspensionCount, const unsigned long hostProcessId);

    virtual ~Strand();
};


#endif //ROBINOS_STRAND_HPP
