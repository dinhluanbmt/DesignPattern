#pragma once
#include "IBeverage.h"
class Mocha : public CondimentDecorator
{
	shared_ptr<Beverage> m_beverage;
	double m_cost;
public:
	string getDescription();
	Mocha(shared_ptr<Beverage> obj);
	double cost();
	~Mocha();

};

