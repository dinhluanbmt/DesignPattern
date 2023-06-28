#pragma once
#include "Quackable.h"
class CPMallardDuck : public Quackable {
public:
	void quack() {
		cout << "Quack..." << endl;
	}
	~CPMallardDuck(){}
};
