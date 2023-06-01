#include "SoldOutState.h"
#include "BumballMachine.h"
SoldOutState::SoldOutState() {
	this->my_Machine.reset();
}
void SoldOutState::insertQuarter() {
	cout << "Sorry, all gumball is soldout...pls get returned" << endl;
}
void SoldOutState::ejectQuarter() {
	cout << "Quarter returned...(from soldout)" << endl;
}
void SoldOutState::turnCrank() {
	cout << "Sorry, all gumball is soldout...do not turnCrank" << endl;
}
void SoldOutState::dispense() {
	cout << "Sorry, all gumball is soldout..." << endl;
}
SoldOutState::~SoldOutState() {
	cout << "Destructor SoldOutState..." << endl;
}
void SoldOutState::setGumballMachine(shared_ptr<GumballMachine> obj) {
	this->my_Machine = obj;
}