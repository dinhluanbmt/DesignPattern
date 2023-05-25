#include "CurrentConditionDisplay.h"
CurrentConditionDisplay::CurrentConditionDisplay(shared_ptr<Subject> obj) {
	this->weatherData = obj;
	this->temperature = 0;
	this->humidity = 0;
	this->pressure = 0;
	
}
void CurrentConditionDisplay::registerItSelf() {
	auto locked_p = this->weatherData.lock();
	if (locked_p) {
		locked_p->registerObserver(shared_from_this());//shared_from_this() inherit from Observer Interface
	}
}
void CurrentConditionDisplay::removeObserver() {
	auto locked_p = this->weatherData.lock();
	if (locked_p) {
		locked_p->removeObserver(shared_from_this());//shared_from_this() inherit from Observer Interface
	}
}
void CurrentConditionDisplay::update(double tem, double hum, double pres) {
	this->temperature = tem;
	this->humidity = hum;
	this->pressure = pres;
	cout << "we just got update information " << endl;
	this->display();

}
void CurrentConditionDisplay::display() {
	cout << "this is display method of CurrentConditionDisplay screen" << endl;
	cout << "temperature: " << this->temperature << endl;
	cout << " humidity: " << this->humidity << endl;
}

CurrentConditionDisplay::~CurrentConditionDisplay(){
	cout << "Destructor of CurrentConditionDisplay Class..." << endl;
}
