//
// Created by Rian on 9/22/2018.
//
// Edited by Alyssa on 9/26/2018

#include "RoundRobinSelect.hpp"
#include "Process.hpp"
#include "MemoryManager.hpp"

#ifndef ROBINOS_MASTERCONTROLLER_HPP
#define ROBINOS_MASTERCONTROLLER_HPP


class MasterController {
    /*!
    * Master controller of the Operating System Simulation. Can switch between processes and Algorithms
    */
private:
  unsigned int advgResponseTime;
  unsigned int advgThroughput;
  
public:
// MasterController( Process proc, MemoryManager Mem);
 void setProcess(Process proc);
 Process getProcess();
 void setMemoryManager(MemoryManager Mem);
 MemoryManager getMemory();
 unsigned int calculateResponseTime();
 unsigned int calculateAdvgThroughput();
 //void changeAlgorythm(Algorithm alg) 
};


#endif //ROBINOS_MASTERCONTROLLER_HPP
