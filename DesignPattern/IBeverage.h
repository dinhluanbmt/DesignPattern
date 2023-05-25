#pragma once
#include <iostream>
#include <string>
#include <memory>
using namespace std;
class Beverage {
protected:// enable derived class to access it.
	string description =" Unknown description...!!";
public:
	virtual string getDescription() {
		return this->description;
	}
	virtual double cost() = 0;
	virtual ~Beverage(){}// without virtual, smart pointer of derived class still call destructor.
};

class CondimentDecorator : public Beverage {
public:
	virtual string getDescription() = 0;
	~CondimentDecorator() {}
};