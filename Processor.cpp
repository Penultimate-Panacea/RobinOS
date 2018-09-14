//
// Created by Rian on 9/13/2018.
//

#include "Processor.hpp"

long Processor::getClockSpeed() const {
    return clockSpeed;
}

void Processor::setClockSpeed(long clockSpeed) {
    Processor::clockSpeed = clockSpeed;
}

int Processor::getLevelOneCache() const {
    return levelOneCache;
}

void Processor::setLevelOneCache(int levelOneCache) {
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

Processor::Processor(long clockSpeed, int levelOneCache, unsigned char dataBusWidth, unsigned char addrBusWidth)
        : clockSpeed(clockSpeed), levelOneCache(levelOneCache), dataBusWidth(dataBusWidth),
          addrBusWidth(addrBusWidth) {}
