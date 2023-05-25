#include "SMocha.h"
SMocha::SMocha(shared_ptr<SIBeverage> obj, double cost) {
	this->m_bv = obj;
	this->m_cost = cost;
	this->description = "Mocha ";
}
string SMocha::getDescription() {
	string ret = "";
	if (m_bv) {
		ret.append(m_bv->getDescription());
		ret.append(", ");
	}
	ret.append(description);
	return ret;
}
double SMocha::calculateCost() {
	if (m_bv == nullptr) return this->m_cost;
	return m_cost + m_bv->calculateCost();
}
SMocha::~SMocha() {
	cout << "SMocha Desctructor method....222" << endl;
}