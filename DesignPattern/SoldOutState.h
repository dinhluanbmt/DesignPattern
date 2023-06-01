#pragma once
#include "State.h"
class GumballMachine;
class SoldOutState : public State
{
	weak_ptr<GumballMachine> my_Machine;
public:
	SoldOutState();
	void insertQuarter();
	void ejectQuarter();
	void turnCrank();
	void dispense();
	void setGumballMachine(shared_ptr<GumballMachine> obj);
	~SoldOutState();
};

