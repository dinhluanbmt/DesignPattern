#include "Mocha.h"
Mocha::Mocha(shared_ptr<Beverage> obj) {
	this->m_cost = 0.2;
	this->m_beverage = obj;
}
string Mocha::getDescription() {
	string des = this->m_beverage->getDescription();
	des.append(", Mocha");
	return des;
}
double Mocha::cost() {
	return this->m_cost + this->m_beverage->cost();
}
Mocha::~Mocha() {
	cout << "Mocha Destructor...." << endl;
}
