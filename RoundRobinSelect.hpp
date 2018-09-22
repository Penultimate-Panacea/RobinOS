//
// Created by Rian on 9/14/2018.
//
// Modified by Linh on 9/20/2018

#ifndef ROBINOS_ROUNDROBINSELECT_HPP
#define ROBINOS_ROUNDROBINSELECT_HPP

#include<iostream>
using namespace std;

class RoundRobin{
public:
	RoundRobin();
	void findWaitingTime();
	void findTurnAroundTime();
private:
	int processes[20];
	int burst_time[20];
	int quantum;



};

#endif //ROBINOS_ROUNDROBINSELECT_HPP
