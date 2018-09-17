//
// Created by Rian on 9/14/2018.
//

#ifndef ROBINOS_CODEOBJECT_HPP
#define ROBINOS_CODEOBJECT_HPP


#include <ostream>

class CodeObject {
    /*!
    * Creates an object of processor and I/O operations for simulating the different stages of real world processes
    */
private:
    unsigned int memOps; //Amount of memory needing transfered in bits
    unsigned int procOps; //Amount of CPU operations needed in instructions

public:
    void setMemOps(unsigned int memOps);
    void setProcOps(unsigned int procOps);
    unsigned int getMemOps() const;
    unsigned int getProcOps() const;
    friend std::ostream &operator<<(std::ostream &os, const CodeObject &object);

    CodeObject(unsigned int memOps, unsigned int procOps);

    virtual ~CodeObject();
};


#endif //ROBINOS_CODEOBJECT_HPP
