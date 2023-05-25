#pragma once
#include "SIBeverage.h"
class SMocha : public SIBeverage
{
	shared_ptr<SIBeverage> m_bv;
	double m_cost;
public:
	SMocha(shared_ptr<SIBeverage> obj, double cost);
	string getDescription();
	double calculateCost();
	~SMocha();

};

