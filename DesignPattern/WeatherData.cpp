#include "WeatherData.h"
#include <algorithm>
WeatherData::WeatherData() {
	this->temperature = 0;
	this->humidity = 0;
	this->pressure = 0;
}
void WeatherData::registerObserver(shared_ptr<Observer> obj) {
	this->observersList.push_back(obj);
}
void WeatherData::removeObserver(shared_ptr<Observer> obj) {
	auto it = find(this->observersList.begin(), this->observersList.end(), obj);
	if (it != this->observersList.end()) {
		this->observersList.erase(it);
	}
}
void WeatherData::notifyObservers() {
	for (auto it : this->observersList) {
		it->update(this->temperature, this->humidity,this->pressure);
	}
}
void WeatherData::measurementChanged() {
	this->notifyObservers();
}
void WeatherData::setMeasurements(double tem, double hum, double pres) {
	this->temperature = tem;
	this->humidity = hum;
	this->pressure = pres;
	this->measurementChanged();
}
WeatherData::~WeatherData() {
	cout << " Destructor method of WeatherData class" << endl;
}