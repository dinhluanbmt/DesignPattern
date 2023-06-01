#include "NoQuaterState.h"
#include "BumballMachine.h"
NoQuaterState::NoQuaterState() {
	this->my_Machine.reset();
}
void NoQuaterState::setGumballMachine(shared_ptr<GumballMachine> obj) {
	this->my_Machine = obj;
}
void NoQuaterState::insertQuarter() {
	if (auto mc = this->my_Machine.lock()) {
		mc->setState(mc->getHasQuarterSate());
	}
}
void NoQuaterState::ejectQuarter() {
	cout << "You haven't inserted a quarter...." << endl;
}
void NoQuaterState::turnCrank() {
	cout << "You Turned the crank, but there's no quarter..." << endl;
}
void NoQuaterState::dispense() {
	cout << "You need to pay first..." << endl;
}
NoQuaterState::~NoQuaterState() {
	cout << "NoQuarterState...destructor.." << endl;
}
