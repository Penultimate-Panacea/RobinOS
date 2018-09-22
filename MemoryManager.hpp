//
// Created by Rian on 9/14/2018.
//

#ifndef ROBINOS_MEMORYMANAGER_HPP
#define ROBINOS_MEMORYMANAGER_HPP

#include <list>
#include "CodeObject.hpp"

using namespace std;

class MemoryManager {
    /*!
     * Handles the interactions with memory as well as holds all programs that may be run.
     */
private:
    unsigned int levelTwoCache = 192000; //Size of Level Two cache in bits (24KB)
    static const unsigned char levelTwoCacheHitRatio = 80; //80 out of 100 times the word will be present in L2 cache.
    static const unsigned char levelTwoCacheAccessTime = 9; // 9 nanoseconds
    unsigned long mainMemory = 8000000000; //Size of mainMemory in bits (1GB)
    static const unsigned char mainMemoryHitRatio = 75;
    static const unsigned char mainMemoryAccessTime = 70; //70 nanoseconds
    static const unsigned int diskAccessTime = 2000000; //2 ms
    unsigned int averageMemoryAccessTime;
    list<CodeObject> initialList;
public:
    MemoryManager(unsigned int levelTwoCache, unsigned long mainMemory);
     //MemoryManager(unsigned int levelTwoCache = , unsigned long mainMemory);

    unsigned int getLevelTwoCache() const;

    void setLevelTwoCache(unsigned int levelTwoCache);

    static const unsigned char getLevelTwoCacheHitRatio();

    static const unsigned char getLevelTwoCacheAccessTime();

    unsigned long getMainMemory() const;

    void setMainMemory(unsigned long mainMemory);

    static const unsigned char getMainMemoryHitRatio();

    static const unsigned char getMainMemoryAccessTime();

    static const unsigned int getDiskAccessTime();

    unsigned int getAverageMemoryAccessTime() const;

    void setAverageMemoryAccessTime();

    virtual ~MemoryManager();

    void populateInitialList();
};


#endif //ROBINOS_MEMORYMANAGER_HPP
