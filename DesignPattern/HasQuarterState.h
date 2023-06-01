#pragma once
#include "State.h"
class GumballMachine;
class HasQuarterState : public State
{
	weak_ptr<GumballMachine> my_Machine;
public:
	HasQuarterState();
	void setGumballMachine(shared_ptr<GumballMachine> obj);
	void insertQuarter();
	void ejectQuarter();
	void turnCrank();
	void dispense();
	~HasQuarterState();
};

