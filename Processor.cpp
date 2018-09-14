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

long Processor::getLevelOneCache() const {
    return levelOneCache;
}

void Processor::setLevelOneCache(long levelOneCache) {
    Processor::levelOneCache = levelOneCache;
}

long Processor::getLevelTwoCache() const {
    return levelTwoCache;
}

void Processor::setLevelTwoCache(long levelTwoCache) {
    Processor::levelTwoCache = levelTwoCache;
}

Processor::Processor(long clockSpeed, long levelOneCache, long levelTwoCache) : clockSpeed(clockSpeed),
                                                                                levelOneCache(levelOneCache),
                                                                                levelTwoCache(levelTwoCache) {}
