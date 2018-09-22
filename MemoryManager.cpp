//
// Created by Rian on 9/14/2018.
//

#include "MemoryManager.hpp"

unsigned int MemoryManager::getLevelTwoCache() const {
    return levelTwoCache;
}

void MemoryManager::setLevelTwoCache(unsigned int levelTwoCache) {
    MemoryManager::levelTwoCache = levelTwoCache;
}

const unsigned char MemoryManager::getLevelTwoCacheHitRatio() {
    return levelTwoCacheHitRatio;
}

const unsigned char MemoryManager::getLevelTwoCacheAccessTime() {
    return levelTwoCacheAccessTime;
}

unsigned long MemoryManager::getMainMemory() const {
    return mainMemory;
}

void MemoryManager::setMainMemory(unsigned long mainMemory) {
    MemoryManager::mainMemory = mainMemory;
}

const unsigned char MemoryManager::getMainMemoryHitRatio() {
    return mainMemoryHitRatio;
}

const unsigned char MemoryManager::getMainMemoryAccessTime() {
    return mainMemoryAccessTime;
}

unsigned int MemoryManager::getAverageMemoryAccessTime() const {
    return averageMemoryAccessTime;
}

const unsigned int MemoryManager::getDiskAccessTime(){
    return diskAccessTime;
}


void MemoryManager::setAverageMemoryAccessTime() {
    unsigned int amta;
    amta  = levelTwoCacheAccessTime+(1- levelTwoCacheHitRatio)*mainMemoryAccessTime+(1-mainMemoryHitRatio)*diskAccessTime;
    MemoryManager::averageMemoryAccessTime = amta;
}
