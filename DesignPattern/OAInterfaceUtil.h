#pragma once
#include <iostream>
#include <string>
#include <memory>
using namespace std;
// Target Interface
class TDuck {
public:
	virtual void quack() = 0;
	virtual void fly() = 0;
	virtual ~TDuck(){}
};
//Adaptee Interface (new interface )
class ATurkey {
public:
	virtual void gobble() = 0;
	virtual void fly() = 0;
	virtual ~ATurkey(){}
};
// Adapter will implement Target, and hold an object (reference) of Adaptee.