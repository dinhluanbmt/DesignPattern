#pragma once
#include "Quackable.h"
#include "CPGoose.h"

// adapter class, DuckSimulator use this adapter
class CPGooseAdapter : public Quackable {
private:
	shared_ptr<CPGoose> goose = nullptr;
public:
	CPGooseAdapter(shared_ptr<CPGoose> obj) {
		goose = obj;
	}
	void quack() {
		goose->honk();
	}
	~CPGooseAdapter() {}
};

