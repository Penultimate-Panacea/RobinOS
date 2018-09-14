//
// Created by Rian on 9/13/2018.
//

#ifndef ROBINOS_PROCESSOR_HPP
#define ROBINOS_PROCESSOR_HPP


class Processor {
private:
    //Default Values set as Intel 80386DX 1988-04-04
    long clockSpeed = 25000000; //Speed of the Clock in Hz
    int levelOneCache = 64000; //Size of L1 Cache in bits
    unsigned char dataBusWidth = 32; //Size of data Bus
    unsigned char addrBusWidth = 32; //Size of Address Bus

public:
    //Constructors:
    Processor(long clockSpeed, int levelOneCache, unsigned char dataBusWidth, unsigned char addrBusWidth);

    //Getters & Setters:
    long getClockSpeed() const;

    void setClockSpeed(long clockSpeed);

    int getLevelOneCache() const;

    void setLevelOneCache(int levelOneCache);

    unsigned char getDataBusWidth() const;

    void setDataBusWidth(unsigned char dataBusWidth);

    unsigned char getAddrBusWidth() const;

    void setAddrBusWidth(unsigned char addrBusWidth);
};


#endif //ROBINOS_PROCESSOR_HPP
