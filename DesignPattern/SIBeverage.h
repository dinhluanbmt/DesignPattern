#pragma once
#include <iostream>
#include <string>
#include <memory>
using namespace std;
class SIBeverage {
protected:
	string description = "please assign name for a specify Beverage...";
public:
	virtual string getDescription() { return this->description; }
	virtual double calculateCost() = 0;
	virtual ~SIBeverage(){}

};
