#pragma once
#include "Quackable.h"
class CPAbstractFactory {
public:
	virtual shared_ptr<Quackable> createMallardDuck() = 0;
	virtual shared_ptr<Quackable> createRedheadDuck() = 0;
	virtual shared_ptr<Quackable> createDuckCall() = 0;
	virtual shared_ptr<Quackable> createRubberDuck() = 0;
	~CPAbstractFactory() {}
};
