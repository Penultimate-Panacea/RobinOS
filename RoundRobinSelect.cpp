#include <iostream>

using namespace std;

void findWaitingTime(int processes[], int n, int burstTime[], int waitTime[], int quantum) {
	int remember_burstTime[n];
	for (int i = 0; i < n; i++) {
		remember_burstTime[i] = burstTime[i];
	}
	int t = 0;
	bool finish;
	while (true) {
		for (int i = 0; i < n; i++) {
			finish = false;
			if (remember_burstTime[i] < quantum && remember_burstTime[i] > 0) {
				t += remember_burstTime[i];
				remember_burstTime[i] = 0;
				waitTime[i] = t - burstTime[i];
			}
			if (remember_burstTime[i] > quantum) {
				t = t + quantum;
				remember_burstTime[i] = remember_burstTime[i] - quantum;
			}
		}
		if (finish == true) {
			break;
		}
	}
	return waitTime;
}

void findTurnAroundTime(int processes[], int n, int burstTime[], int waitTime[], int turnAroundTime[]) {
	for (int i = 0; i < n; i++) {
		turnAroundTime[i] = burstTime[i] + waitTime[i];
	}
	return turnAroundTime;
}