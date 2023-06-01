#include "TurkeyAdapter.h"
TurkeyAdapter::TurkeyAdapter() {
	this->turkey = nullptr;
}
TurkeyAdapter::TurkeyAdapter(shared_ptr<ATurkey> obj) {
	this->turkey = obj;
}
void TurkeyAdapter::setAdaptee(shared_ptr<ATurkey> obj) {
	this->turkey = obj;
}
void TurkeyAdapter::fly() {
	if (this->turkey) {
		//Turkey just fly for short distance...
		this->turkey->fly();
		//so fly one more
		this->turkey->fly();
	}
}
void TurkeyAdapter::quack() {
	if (this->turkey) {
		//Turkey does not quack...he gobble
		//jus do translation quack to gobble
		this->turkey->gobble();
	}
}
TurkeyAdapter::~TurkeyAdapter() {
	cout << "Destructor TurkyAdapter..." << endl;
}
