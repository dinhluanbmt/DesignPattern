#pragma once
#include "CPAbstractFactory.h"
#include "CPMallardDuck.h"
#include "CPRedheadDuck.h"
#include "CPRubberDuck.h"
#include "CPDuckCall.h"
#include "CPQuackCounter.h"
class CPCountingDuckFactory : public CPAbstractFactory {
public:
	shared_ptr<Quackable> createMallardDuck() {
		return shared_ptr<Quackable>(new CPQuackCounter(shared_ptr<Quackable>(new CPMallardDuck())));
	}
	shared_ptr<Quackable> createRedheadDuck() {
		return shared_ptr<Quackable>(new CPQuackCounter(shared_ptr<Quackable>(new CPRedheadDuck())));
	}
	shared_ptr<Quackable> createDuckCall() {
		return shared_ptr<Quackable>(new CPQuackCounter(shared_ptr<Quackable>(new CPDuckCall())));
	}
	shared_ptr<Quackable> createRubberDuck() {
		return shared_ptr<Quackable>(new CPQuackCounter(shared_ptr<Quackable>(new CPRubberDuck())));
	}
	~CPCountingDuckFactory() {}

};
