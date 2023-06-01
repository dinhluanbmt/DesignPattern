#pragma once
#include "State.h"
class GumballMachine {
	shared_ptr<State> soldOutState;
	shared_ptr<State> noQuarterState;
	shared_ptr<State> hasQuarterState;
	shared_ptr<State> soldState;

	shared_ptr<State> current_state;
	int count;// nums of balls
public:
	GumballMachine(int n);
	void setMachine2State(shared_ptr<GumballMachine> obj);
	void insertQuarter();
	void ejectQuarter();
	void turnCrank();
	void setState(shared_ptr<State> obj);
	void releaseBall();
	int getCount() { return this->count; }
	shared_ptr<State> getSoldOutState();
	shared_ptr<State> getNoQuarterState();
	shared_ptr<State> getHasQuarterSate();
	shared_ptr<State> getSoldState();
	~GumballMachine();
};

