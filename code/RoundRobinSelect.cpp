#include "RoundRobinSelect.hpp"
#include <iostream>

using namespace std;

Robin::Robin(int i) {
	this.i = i;
}

int Robin::call() {
	return i;
}

RoundRobin::RoundRobin(list<Robin> list) {
	this.list = list;
	pointer = list.iterator();
}

int RoundRobin::next() {
	if (!it.hasNext()) {
		it = list.iterator();
	}
	Robin robin = it.next();
	return robin.call();
}
