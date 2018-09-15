//
// Created by Rian on 9/13/2018.
//

#ifndef ROBINOS_PROCESSOR_HPP
#define ROBINOS_PROCESSOR_HPP

#include "Process.hpp"
class Processor {
    /*!
    * Simulates a Processor by importing Processes/Threads and running CodeObjects contained within them
    */
private:
    //Default Values set as Intel 80486SX 1989-09-16
    unsigned int clockSpeed = 25000000; //Speed of the Clock in Hz
    unsigned int instructionsPerSecond = 12000000;//Instructions per Second
    unsigned int levelOneCache = 64000; //Size of L1 Cache in bits
    static const unsigned int cacheAccessTime = 5; //Access time in nanoseconds
    static const unsigned char priorLevelOneHitRatio = 90; //90 out of 100 times the word will be located in the L1 Cache
    unsigned char dataBusWidth = 32; //Size of data Bus
    unsigned char addrBusWidth = 32; //Size of address Bus
    Process activeProcess;
public:
    //Constructors:
    Processor(unsigned int clockSpeed, unsigned int instructionsPerSecond, unsigned int levelOneCache,
            unsigned char dataBusWidth, unsigned char addrBusWidth);

    //Destructors
    virtual ~Processor();

    //Getters & Setters:

    unsigned int getClockSpeed() const;

    void setClockSpeed(unsigned int clockSpeed);

    unsigned int getInstructionsPerSecond() const;

    void setInstructionsPerSecond(unsigned int instructionsPerSecond);

    unsigned int getLevelOneCache() const;

    void setLevelOneCache(unsigned int levelOneCache);

    unsigned char getDataBusWidth() const;

    void setDataBusWidth(unsigned char dataBusWidth);

    unsigned char getAddrBusWidth() const;

    void setAddrBusWidth(unsigned char addrBusWidth);

    const unsigned int getCacheAccessTime() const;

    const Process &getActiveProcess() const;

    void setActiveProcess(const Process &activeProcess);
};


#endif //ROBINOS_PROCESSOR_HPP
