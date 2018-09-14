//
// Created by Rian on 9/13/2018.
//

#ifndef ROBINOS_PROCESSOR_HPP
#define ROBINOS_PROCESSOR_HPP


class Processor {
private:
    long clockSpeed = 1333000000000; //Speed of the Clock in Hz
    long levelOneCache = 14; //Size of L1 Cache in bytes
    long levelTwoCache = 28; //Size of L2 Cache in bytes
public:
    Processor(long clockSpeed, long levelOneCache, long levelTwoCache);

    long getLevelOneCache() const;

    void setLevelOneCache(long levelOneCache);

    long getLevelTwoCache() const;

    void setLevelTwoCache(long levelTwoCache);

    long getClockSpeed() const;

    void setClockSpeed(long clockSpeed);
};


#endif //ROBINOS_PROCESSOR_HPP
