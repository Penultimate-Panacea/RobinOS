//
// Created by Rian on 9/13/2018.
//

#include "Processor.hpp"

unsigned int Processor::getClockSpeed() const {
    return clockSpeed;
}

void Processor::setClockSpeed(unsigned int clockSpeed) {
    Processor::clockSpeed = clockSpeed;
}

unsigned int Processor::getLevelOneCache() const {
    return levelOneCache;
}

void Processor::setLevelOneCache(unsigned int levelOneCache) {
    Processor::levelOneCache = levelOneCache;
}

unsigned char Processor::getDataBusWidth() const {
    return dataBusWidth;
}

void Processor::setDataBusWidth(unsigned char dataBusWidth) {
    Processor::dataBusWidth = dataBusWidth;
}

unsigned char Processor::getAddrBusWidth() const {
    return addrBusWidth;
}

void Processor::setAddrBusWidth(unsigned char addrBusWidth) {
    Processor::addrBusWidth = addrBusWidth;
}


unsigned int Processor::getInstructionsPerSecond() const {
    return instructionsPerSecond;
}

void Processor::setInstructionsPerSecond(unsigned int instructionsPerSecond) {
    Processor::instructionsPerSecond = instructionsPerSecond;
}

const unsigned int Processor::getCacheAccessTime() const {
    return cacheAccessTime;
}

Processor::Processor() {
    this->setAddrBusWidth(64);
    this->setClockSpeed(25000000);
    this->setInstructionsPerSecond(12000000);
    this->setLevelOneCache(64000);
    this->setAddrBusWidth(64);
    this->setDataBusWidth(64);
}

Processor::Processor(unsigned int clockSpeed, unsigned int instructionsPerSecond, unsigned int levelOneCache,
        unsigned char dataBusWidth, unsigned char addrBusWidth)
        : clockSpeed(clockSpeed), instructionsPerSecond(instructionsPerSecond), levelOneCache(levelOneCache),
        dataBusWidth(dataBusWidth), addrBusWidth(addrBusWidth) {}


const CodeObject &Processor::getActiveProcess() const {
    return activeProcess;
}

void Processor::setActiveProcess(const CodeObject &activeProcess) {
    Processor::activeProcess = activeProcess;
}

Processor::~Processor() = default;
