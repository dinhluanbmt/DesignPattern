#pragma once
#include "MenuComponent.h"
class MenuItem : public MenuComponent {
	string name;
	string description;
	bool vegetarian;
	double price;
public:
	MenuItem(string _name, string des, bool v, double _price) {
		this->name = _name;
		this->description = des;
		this->vegetarian = v;
		this->price = _price;
	}
	string getName() { return this->name; }
	string getDescription() { return this->description; }
	double getPrice() { return this->price; }
	bool isVegetarian() { return this->vegetarian; }
	void print() {
		cout << "Name: " << this->name << endl;
		if (this->vegetarian) {
			cout << "Vegetarian..." << endl;
		}
		cout << "Price: " << this->price << endl;
		cout << "Description: " << this->description << endl;
	}
};
