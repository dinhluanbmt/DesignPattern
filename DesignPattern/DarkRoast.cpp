#include "DarkRoast.h"
DarkRoast::DarkRoast() {
	this->description = "DarkRoast coffee ";
}
DarkRoast::~DarkRoast() {
	cout << "DarkRoast coffee Destructor method...." << endl;
}
double DarkRoast::cost() {
	return 0.99;
}
