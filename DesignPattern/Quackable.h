#pragma once
#include <iostream>
#include <memory>
using namespace std;
// Quackable Interface
class Quackable {
public:
	virtual void quack() = 0;
	virtual ~Quackable() {}
};