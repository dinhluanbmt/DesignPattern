#pragma once
#include <iostream>
#include <string>
#include <memory>
using namespace std;
class CaffeineBeverageWithHook {
public:
	virtual void brew() = 0;
	virtual void addCondiments() = 0;
	void boilWater() {
		cout << "Boiling water..." << endl;
	}
	void pourInCup() {
		cout << "Pouring into cup..." << endl;
	}
	//this is hoook method? derived class could  override it or not
	virtual bool customerWantsCondiments() {
		return true;
	}
	//template method
    virtual void perepareRecipe() final {
		boilWater();
		brew();
		pourInCup();
		if (customerWantsCondiments()) {
			addCondiments();
		}
	}
	virtual ~CaffeineBeverageWithHook(){}// to call derived class destructor
};
