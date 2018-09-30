//
// Created by Rian on 9/22/2018.
//
//edited by Alyssa 9/22/2018 fleshing out the cpp file more

#include "MasterController.hpp"

unsigned int MasterController::calculateResponseTime(){
  
}

unsigned int MasterController::calculateAdvgThroughput(){
  
}

void MasterController::setProcess(Process Proc){
  this->Process = Proc;
}

void MasterController::setMemory(MemoryManager mem){
  this->Memory = mem;
}

MemoryManager MasterController::getMemory(){
  return this->MemoryManager;
}

Process MasterController::getProcess(){
 return this->Process; 
}
