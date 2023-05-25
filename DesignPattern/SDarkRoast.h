#pragma once
#include "SIBeverage.h"
class SDarkRoast : public SIBeverage
{
	shared_ptr<SIBeverage> m_bv;
	double m_cost;
public:
	SDarkRoast(shared_ptr<SIBeverage> obj, double cost);
	double calculateCost();
	string getDescription();
	~SDarkRoast();
};

