#pragma once
#include <iostream>
#include <string>
#include <memory>
using namespace std;
class GumballMachine;
class State {
public:
	virtual void insertQuarter() = 0;
	virtual void ejectQuarter() = 0;
	virtual void turnCrank() = 0;
	virtual void dispense() = 0;
	virtual void setGumballMachine(shared_ptr<GumballMachine> obj) = 0;
	virtual ~State() {}
};
