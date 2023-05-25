#pragma once
#include "IBeverage.h"
class HouseBlend : public Beverage
{
public:
	HouseBlend();
	double cost();
	~HouseBlend();
};

