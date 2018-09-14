//
// Created by Rian on 9/13/2018.
//
#include "CodeObject.hpp"
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



Processor::Processor(unsigned int clockSpeed, unsigned int instructionsPerSecond, unsigned int levelOneCache,
                     const unsigned int cacheAccessTime, const std::stack<CodeObject> &codeObjectList,
                     unsigned char dataBusWidth, unsigned char addrBusWidth) : clockSpeed(clockSpeed),
                                                                               instructionsPerSecond(
                                                                                       instructionsPerSecond),
                                                                               levelOneCache(levelOneCache),
                                                                               cacheAccessTime(cacheAccessTime),
                                                                               codeObjectList(codeObjectList),
                                                                               dataBusWidth(dataBusWidth),
                                                                               addrBusWidth(addrBusWidth) {}

void Processor::setCodeObjectList(const std::stack<CodeObject> &codeObjectList) {
    Processor::codeObjectList = codeObjectList;
}

Processor::Processor(unsigned int clockSpeed, unsigned int instructionsPerSecond, unsigned int levelOneCache,
                     const unsigned int cacheAccessTime, const CodeObject &codeObjectList, unsigned char dataBusWidth,
                     unsigned char addrBusWidth) : clockSpeed(clockSpeed), instructionsPerSecond(instructionsPerSecond),
                                                   levelOneCache(levelOneCache), cacheAccessTime(cacheAccessTime),
                                                   codeObjectList(codeObjectList), dataBusWidth(dataBusWidth),
                                                   addrBusWidth(addrBusWidth) {}

Processor::~Processor() = default;
