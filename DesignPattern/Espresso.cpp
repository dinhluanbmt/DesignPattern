#include "Espresso.h"
Espresso::Espresso() {
	this->description = "Espresso";
}
double Espresso::cost() {
	return 1.99;
}
Espresso::~Espresso(){
	cout << "Espresso destructor....111" << endl;
}
