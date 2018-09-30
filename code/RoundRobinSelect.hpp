//
// Created by Rian on 9/14/2018.
//
// Modified by Linh on 9/20/2018

#ifndef ROBINOS_ROUNDROBINSELECT_HPP
#define ROBINOS_ROUNDROBINSELECT_HPP

#include<iostream>
#include<list>
#include<iterator>
using namespace std;

class Robin {
public:
	Robin(int);
	int call();
private:
	int i;
};
class RoundRobin{
public:
	RoundRobin(list<Robin>);
	int next();
private:
	iterator<Robin> it;
	list<Robin> list;
};

#endif //ROBINOS_ROUNDROBINSELECT_HPP
