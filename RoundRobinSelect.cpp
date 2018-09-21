#include "RoundRobinSelect.hpp"
#include <iostream>

using namespace std;

RoundRobin::RoundRobin() {

}

void RoundRobin::calWaitingTime(int processor[], int n, int bt[], int wt[], int quantum) {
	int rem_bt[n];
	for (int i = 0; i < n; i++)
		rem_bt[i] = bt[i];

	int t = 0;

	while (1)
	{
		bool done = true;
		for (int i = 0; i < n; i++)
		{
			if (rem_bt[i] > 0)
			{
				done = false;
				if (rem_bt[i] > quantum)
				{
					t += quantum;
					rem_bt[i] -= quantum;
				}
				else
				{
					t = t + rem_bt[i];
					wt[i] = t - bt[i];
					rem_bt[i] = 0;
				}
			}
		}
		if (done == true)
			break;
	}
}

// 
// 
	

