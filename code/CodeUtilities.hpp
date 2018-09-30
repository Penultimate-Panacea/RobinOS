//
// Created by Rian on 9/30/2018.
//

#include <deque>
#include <list>

#ifndef ROBINOS_CODEUTILITIES_HPP
#define ROBINOS_CODEUTILITIES_HPP

deque<CodeObject> listToDeque(list<CodeObject> list ){
    deque<CodeObject> deque;
    for (it = list.begin(); it != list.end(); it++)
    {
        int id = it->id;
        std::string name = it->name;
        deque.append(id);
    }
    return deque;
}

#endif //ROBINOS_CODEUTILITIES_HPP
