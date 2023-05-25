#include "HouseBlend.h"
HouseBlend::HouseBlend() {
	this->description = "House Blend Coffee";
}
double HouseBlend::cost() {
	return 0.89;
}
HouseBlend::~HouseBlend() {
	cout << "HouseBlend desconstructor...." << endl;
}
