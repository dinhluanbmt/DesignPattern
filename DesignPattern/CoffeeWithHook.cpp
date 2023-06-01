#include "CoffeeWithHook.h"

string CoffeeWithHook::getUserInput() {
	string ret = "yes";// just make it simple
	return ret;
}
void CoffeeWithHook::brew() {
	cout << " Dripping coffe through filter..." << endl;
}
void CoffeeWithHook::addCondiments() {
	cout << "Adding Sugar and Milk..." << endl;
}
bool CoffeeWithHook::customerWantsCondiments() {
	string ret = getUserInput();
	if (ret == "yes") {
		return true;
	}
	return false;
}
CoffeeWithHook::~CoffeeWithHook() {
	cout << "CoffeWithHook destructor..." << endl;
}