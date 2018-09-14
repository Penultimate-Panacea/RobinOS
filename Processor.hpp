//
// Created by Rian on 9/13/2018.
//

#ifndef ROBINOS_PROCESSOR_HPP
#define ROBINOS_PROCESSOR_HPP


class Processor {
    /*!
    * Simulates a Processor by importing Processes/Threads and running CodeObjects contained within them
    */
private:
    //Default Values set as Intel 80486SX 1989-09-16
    unsigned int clockSpeed = 25000000; //Speed of the Clock in Hz
    unsigned int instructionsPerSecond = 12000000;//Instructions per Second
    unsigned int levelOneCache = 64000; //Size of L1 Cache in bits
    unsigned char dataBusWidth = 32; //Size of data Bus
    unsigned char addrBusWidth = 32; //Size of Address Bus

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
};


#endif //ROBINOS_PROCESSOR_HPP
