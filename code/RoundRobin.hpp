//
// Created by Rian on 9/30/2018.
//

//Rian's implementaiton of Round Robin



#ifndef ROBINOS_ROUNDROBIN_HPP
#define ROBINOS_ROUNDROBIN_HPP


#include "Processor.hpp"
#include "GlobalVariables.hpp"

class RoundRobin {
private:
    Processor activeProcessor;
    unsigned int allowedTime;
public:
    RoundRobin(const Processor &activeProcessor, unsigned int allowedTime);

    virtual ~RoundRobin();

    const Processor &getActiveProcessor() const;

    void setActiveProcessor(const Processor &activeProcessor);

    unsigned int getAllowedTime() const;

    void setAllowedTime(unsigned int allowedTime);

    void scheduler();
};


#endif //ROBINOS_ROUNDROBIN_HPP
