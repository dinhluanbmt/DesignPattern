#include "BumballMachine.h"
#include "NoQuaterState.h"
#include "HasQuarterState.h"
#include "SoldState.h"
#include "SoldOutState.h"
GumballMachine::GumballMachine(int n) {
	this->count = n;
	//initiate all needed states ?
	this->noQuarterState = shared_ptr<NoQuaterState>(new NoQuaterState());
	this->hasQuarterState = shared_ptr<HasQuarterState>(new HasQuarterState());
	this->soldState = shared_ptr<SoldState>(new SoldState());
	this->soldOutState = shared_ptr<SoldOutState>(new SoldOutState());

	this->current_state = noQuarterState;
}
void GumballMachine::setMachine2State(shared_ptr<GumballMachine> obj) {
	this->noQuarterState->setGumballMachine(obj);
	this->hasQuarterState->setGumballMachine(obj);
	this->soldOutState->setGumballMachine(obj);
	this->soldState->setGumballMachine(obj);
}
void GumballMachine::insertQuarter() {
	this->current_state->insertQuarter();
}
void GumballMachine::ejectQuarter() {
	this->current_state->ejectQuarter();
}
void GumballMachine::turnCrank() {
	this->current_state->turnCrank();
	this->current_state->dispense();
}
void GumballMachine::setState(shared_ptr<State> obj) {
	this->current_state = obj;
}
shared_ptr<State> GumballMachine::getHasQuarterSate() {
	return this->hasQuarterState;
}
shared_ptr<State> GumballMachine::getNoQuarterState() {
	return this->noQuarterState;
}
shared_ptr<State> GumballMachine::getSoldOutState() {
	return this->soldOutState;
}
shared_ptr<State> GumballMachine::getSoldState() {
	return this->soldState;
}
void GumballMachine::releaseBall() {
	cout << "a gumball comes rolling out the slot..." <<endl;
	if (count > 0) {
		count--;
	}
}

GumballMachine::~GumballMachine() {
	cout << "destructor...GumballMachine.." << endl;
}
