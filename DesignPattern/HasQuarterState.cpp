#include "HasQuarterState.h"
#include "BumballMachine.h"
HasQuarterState::HasQuarterState() {
	this->my_Machine.reset();
}
void HasQuarterState::setGumballMachine(shared_ptr<GumballMachine> obj) {
	this->my_Machine = obj;
}
void HasQuarterState::insertQuarter() {
	cout << "already inserted quarter...can not insert another quarter.." << endl;
}
void HasQuarterState::ejectQuarter() {
	cout << "Quarter returned..." << endl;
	if (auto mc = this->my_Machine.lock()) {
		mc->setState(mc->getNoQuarterState());
	}
}
void HasQuarterState::turnCrank() {
	cout << "You turned Crank.." << endl;
	if (auto mc = this->my_Machine.lock()) {
		mc->setState(mc->getSoldState());
	}
}
void HasQuarterState::dispense() {
	cout << "No Gumball dispensed.." << endl;
}
HasQuarterState::~HasQuarterState() {
	cout << "Has Quarter State destructor..." << endl;
}