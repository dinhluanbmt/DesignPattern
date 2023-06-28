#pragma once
#include "Quackable.h"
class CPRubberDuck : public Quackable {
public:
	void quack() {
		cout << "Squeak...(rubber duck)" << endl;
	}
	~CPRubberDuck() {}
};