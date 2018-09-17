//
// Created by Rian on 9/14/2018.
//

#ifndef ROBINOS_MEMORYMANAGER_HPP
#define ROBINOS_MEMORYMANAGER_HPP


class MemoryManager {
private:
    unsigned int levelTwoCache = 192000; //Size of Level Two cache in bits (24KB)
    static const unsigned char levelTwoCacheHitRatio = 80; //80 out of 100 times the word will be present in L2 cache.
    static const unsigned char levelTwoCacheAccessTime = 9; // 9 nanoseconds
    unsigned long mainMemory = 8000000000‬; //Size of mainMemory in bits (1GB)
    static const unsigned char mainMemoryHitRatio = 75;
    static const unsigned char mainMemoryAccessTime = 70; //70 nanoseconds
    unsigned int averageMemoryAccessTime;
};


#endif //ROBINOS_MEMORYMANAGER_HPP
