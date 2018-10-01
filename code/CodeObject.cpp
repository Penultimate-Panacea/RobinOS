//
// Created by Rian on 9/14/2018.
//

#include "CodeObject.hpp"
#include "GlobalVariables.hpp"
#include <iostream>


void CodeObject::setMemOps(unsigned int memOps) {
    CodeObject::memOps = memOps;
}

void CodeObject::setProcOps(unsigned int procOps) {
    CodeObject::procOps = procOps;
}

std::ostream &operator<<(std::ostream &os, const CodeObject &object) {
    os << "memOps: " << object.memOps << " procOps: " << object.procOps;
    return os;
}

unsigned int CodeObject::getMemOps() const {
    return memOps;
}

unsigned long CodeObject::getProcessId() const {
    return processId;
}

unsigned int CodeObject::getProcOps() const {
    return procOps;
}

CodeObject::CodeObject(unsigned int memOps, unsigned int procOps) : memOps(memOps), procOps(procOps) {
    this->processId = GlobalVariables::processId;
    std::cerr << "New Code Object" << this->processId <<"made with " << procOps << " Processor Operations and " << memOps
    << " Memory Operations" << std::endl;
    GlobalVariables::processId++;
}

CodeObject::~CodeObject() = default;
