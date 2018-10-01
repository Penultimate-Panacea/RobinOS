//
// Created by Rian on 9/30/2018.
//

#include <deque>
#include <list>
#include "CodeObject.hpp"

#ifndef ROBINOS_UTILITIES_HPP
#define ROBINOS_UTILITIES_HPP
using namespace std;

deque<CodeObject> listToDequeCO(list<CodeObject> list1) {
    deque<CodeObject> deque1;
    for (const CodeObject &codeObject: list1) {
        deque1.push_back(codeObject);
    }
    return deque1;
}

#endif //ROBINOS_UTILITIES_HPP
