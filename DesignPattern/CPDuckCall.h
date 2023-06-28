#pragma once
#include "Quackable.h"
// the mimic device, hunter user these devices catch Duck
class CPDuckCall : public Quackable {
public:
	void quack() {
		cout << "Kwak..." << endl;
	}
	~CPDuckCall() {}
};
