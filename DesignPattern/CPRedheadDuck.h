#pragma once
#include "Quackable.h"
class CPRedheadDuck : public Quackable {
public:
	void quack() {
		cout << " Quack...redhead.." << endl;
	}
	~CPRedheadDuck() {}
};
