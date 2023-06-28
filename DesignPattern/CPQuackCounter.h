#pragma once
#include "Quackable.h"
// this class will count all quacks had been called in the whole system
class CPQuackCounter : public Quackable {
	static int numberOfQuacks;// shared data between CPQuackCounter objects
	shared_ptr<Quackable> duck = nullptr;
public:
	CPQuackCounter(shared_ptr<Quackable> obj) {
		duck = obj;
	}
	void quack() {
		duck->quack();
		numberOfQuacks++;
	}
	static int getQuacks() {
		return numberOfQuacks;
	}
	~CPQuackCounter() {}
};
int CPQuackCounter::numberOfQuacks = 0;// need to define it
