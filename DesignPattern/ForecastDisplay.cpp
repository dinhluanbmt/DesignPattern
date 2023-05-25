#include "ForecastDisplay.h"
ForecastDisplay::ForecastDisplay(shared_ptr<Subject> obj) {
	this->humidity = 0;
	this->temperature = 0;
	this->pressure = 0;
	this->weatherData = obj;
}
void ForecastDisplay::display() {
	cout << "Display method of ForecastDisplay....." << endl;
	cout << " Pressure " << this->pressure << endl;
}
void ForecastDisplay::update(double tem, double hum, double pres) {
	this->temperature = tem;
	this->humidity = hum;
	this->pressure = pres;
	this->display();
}
void ForecastDisplay::registerObserver(const shared_ptr<ForecastDisplay>& obj) {
	auto locked_subj = weatherData.lock();
	if (locked_subj) {
		locked_subj->registerObserver(obj);
	}
}
void ForecastDisplay::removeObserver(const shared_ptr<ForecastDisplay>& obj) {
	auto locked_subj = weatherData.lock();
	if (locked_subj) {
		locked_subj->removeObserver(obj);
	}
}
ForecastDisplay::~ForecastDisplay() {
	cout << "Descontructor of ForecastDisplay Class......" << endl;
}
