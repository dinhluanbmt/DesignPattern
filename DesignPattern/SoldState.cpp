#include "SoldState.h"
#include "BumballMachine.h"
SoldState::SoldState() {
	this->my_Machine.reset();
}
void SoldState::insertQuarter() {
	cout << "Pls wait, we're already giving you a gumball..." <<endl;
}
void SoldState::ejectQuarter() {
	cout << "Sorry, you already turned the crank..." << endl;
}
void SoldState::turnCrank() {
	cout << "turning twice doesn't get you another gumball..." << endl;
}
void SoldState::dispense() {
	if (auto mc = this->my_Machine.lock()) {
		mc->releaseBall();
		if (mc->getCount() > 0) {
			mc->setState(mc->getNoQuarterState());
		}
		else {
			mc->setState(mc->getSoldOutState());
		}
	}
}
void SoldState::setGumballMachine(shared_ptr<GumballMachine> obj) {
	this->my_Machine = obj;
}
SoldState::~SoldState() {
	cout << "SoldState...destructor..." << endl;
}