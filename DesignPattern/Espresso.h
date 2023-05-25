#pragma once
#include "IBeverage.h"
class Espresso : public Beverage
{
public:
	Espresso();
	double cost();
	~Espresso();
};

