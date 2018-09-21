#include "RoundRobinSelect.hpp"
#include <iostream>

using namespace std;

RoundRobin::RoundRobin() {

}

void RoundRobin::calWaitingTime(int processor[], int n, int busTime[], int waitTime[], int quantum) {
	int rem_busTime[n];
	for (int i = 0; i < n; i++)
		rem_busTime[i] = busTime[i];

	int t = 0;

	while (1)
	{
		bool done = true;
		for (int i = 0; i < n; i++)
		{
			if (rem_busTime[i] > 0)
			{
				done = false;
				if (rem_busTime[i] > quantum)
				{
					t += quantum;
					rem_busTime[i] -= quantum;
				}
				else
				{
					t = t + rem_busTime[i];
					waitTime[i] = t - busTime[i];
					rem_busTime[i] = 0;
				}
			}
		}
		if (done)
			break;
	}
}

// 
// 
	

