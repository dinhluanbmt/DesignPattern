#pragma once
#include "IBeverage.h"
class DarkRoast : public Beverage
{
public:
	DarkRoast();
	~DarkRoast();
	double cost();
};

