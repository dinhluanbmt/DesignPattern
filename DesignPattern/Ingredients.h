#pragma once
#include <iostream>
#include <string>
#include <memory>
using namespace std;
class Dough {
protected:
	string description = " pls add description about Dough...";	
public:
	string getDescription() { return this->description; }
	virtual ~Dough() {}//to call derived class destructor.
};
class Sauce {
protected:
	string description = "pls add description about Sauce...";
public:
	string getDescription() { return this->description; }
	virtual ~Sauce() {}// to enable derived class destructor
};
class Cheese {
protected:
	string description = "pls add description about Cheese...";
public:
	string getDescription() { return this->description; }
	virtual ~Cheese(){}
};
class Pizza {
protected:
	shared_ptr<Dough> dough;
	shared_ptr<Sauce> sauce;
	shared_ptr<Cheese> cheese;
	string name = "pls set pizza's name..";	
public:
	Pizza() {
		this->dough = nullptr;
		this->sauce = nullptr;
		this->cheese = nullptr;
	}
	void setName(string str) { this->name = str; }
	void setDough(shared_ptr<Dough> obj) { this->dough = obj;}
	void setSauce(shared_ptr<Sauce> obj) { this->sauce = obj; }
	void setCheese(shared_ptr<Cheese> obj) { this->cheese = obj; }
	void bake() { cout << " bake the pizza in 30mins.." << endl; }
	void cut() { cout << "cutting the pizza into diagonal slices..." << endl; }
	void box() { cout << "place pizza in box..." << endl; }
	void description() {
		cout << "Pizza name: " << this->name << endl;
		cout << "Dough info: " << dough->getDescription() << endl;
		cout << "Sauce info: " << sauce->getDescription() << endl;
		cout << "Cheese info: " << cheese->getDescription() << endl;
	}
	virtual ~Pizza(){}// to call derived class destructor
};
class IngredientsFactory {
public:
	virtual shared_ptr<Dough> createDough() = 0;
	virtual shared_ptr<Sauce> createSauce() = 0;
	virtual shared_ptr<Cheese> createCheese() = 0;
	virtual ~IngredientsFactory(){}
};
class PizzaStore {
public:
	virtual shared_ptr<Pizza> createPizza() = 0;
	shared_ptr<Pizza> orderPizza() {
		shared_ptr<Pizza> pizza = createPizza();
		pizza->bake();
		pizza->cut();
		pizza->box();
		return pizza;
	}
	virtual ~PizzaStore() {}
};