#pragma once
#include <iostream>
#include <memory>
#include <string>
using namespace std;
// define Qack behavior interface
class QuackBehavior {
public:
	virtual void quack() = 0;
	virtual ~QuackBehavior(){}// to call desconstructor of derived class
};
// define Fly behavior interface
class FlyBehavior {
public:
	virtual void fly() = 0;
	virtual ~FlyBehavior(){}// to call desconstructor of derived class
};