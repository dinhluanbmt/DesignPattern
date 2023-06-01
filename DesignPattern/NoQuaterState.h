#pragma once
#include "State.h"
class GumballMachine;
class NoQuaterState : public State
{
	weak_ptr<GumballMachine> my_Machine;
public:
	NoQuaterState();
	void setGumballMachine(shared_ptr<GumballMachine> obj);
	void insertQuarter();
	void ejectQuarter();
	void turnCrank();
	void dispense();
	~NoQuaterState();
};

