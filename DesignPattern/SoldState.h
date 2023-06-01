#pragma once
#include "State.h"
class GumballMachine;
class SoldState : public State
{
	weak_ptr<GumballMachine> my_Machine;
public:
	SoldState();
	void setGumballMachine(shared_ptr<GumballMachine> obj);
	void insertQuarter();
	void ejectQuarter();
	void turnCrank();
	void dispense();
	~SoldState();
};

