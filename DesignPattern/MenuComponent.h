#pragma once
#include <iostream>
#include <string>
#include <memory>
using namespace std;
class MenuComponent {
public:
	virtual void add(shared_ptr<MenuComponent> obj) {
		cout << "derived class need implement this method.." << endl;
	}
	virtual void remove(shared_ptr<MenuComponent> obj) {
		cout << "derived class need implement this method.." << endl;
	}
	virtual shared_ptr<MenuComponent> getChild(int i) {
		cout << "derived class need implement this method.." << endl;
		return nullptr;
	}
	virtual string getName() {
		return "derived class need implement this method..";
	}
	virtual string getDescription() {
		return "derived class need implement this method..";
	}
	virtual double getPrice() {
		return -1;// just default, derived class need to implement this.
	}
	virtual bool isVegetarian() {
		return false;// just default, derived class need to implement this.
	}
	virtual void print() {
		cout << "derived class need implement this method.." << endl;
	}
};
