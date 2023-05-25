#include "SDarkRoast.h"
SDarkRoast::SDarkRoast(shared_ptr<SIBeverage> obj, double cost) {
	this->m_bv = obj;
	this->m_cost = cost;
	this->description = "SDarkRoasted coffee ";
}
double SDarkRoast::calculateCost() {
	if (this->m_bv == nullptr) return this->m_cost;
	return this->m_cost + this->m_bv->calculateCost();
}
string SDarkRoast::getDescription() {
	string ret = "";
	if (this->m_bv) {
		ret.append(this->m_bv->getDescription());
		ret.append(", ");
	}	
	ret.append(this->description);
	return ret;
}
SDarkRoast::~SDarkRoast() {
	cout << "Desconstructor of SDarkRoast coffee.....11" << endl;
}
