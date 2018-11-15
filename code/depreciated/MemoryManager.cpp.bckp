//
// Created by Rian on 9/14/2018.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <list>
#include "MemoryManager.hpp"

using namespace std;

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

MemoryManager::MemoryManager(unsigned int levelTwoCache=192000, unsigned long mainMemory=8000000000) :
levelTwoCache(levelTwoCache), mainMemory(mainMemory) {
    setAverageMemoryAccessTime();
}

MemoryManager::~MemoryManager() = default;

MemoryManager::MemoryManager() {}

void MemoryManager::populateInitialList(){
    if (!initialList.empty()){
        return;
    }
    unsigned long numberOfObjects;
    cout << "Initial Code Object list is empty. Please enter the number of code objects you wish to test.";
    cin >> numberOfObjects;
    for (int i = 0; i < numberOfObjects; ++i) {
        unsigned int numberOfMemoryOperations;
        srand(static_cast<unsigned int>(clock()));
        //numberOfMemoryOperations = static_cast<unsigned int>(abs(random()));
        numberOfMemoryOperations = 0; //memOps set to 0 as per Design Assumptions
        unsigned char numberOfProcessorOperations;
        numberOfProcessorOperations = static_cast<unsigned char>(abs(random())%255);
        CodeObject newCodeObject = CodeObject(numberOfMemoryOperations, numberOfProcessorOperations);
        initialList.push_back(newCodeObject);
    }
}

const list<CodeObject> &MemoryManager::getInitialList() const {
    return initialList;
}
