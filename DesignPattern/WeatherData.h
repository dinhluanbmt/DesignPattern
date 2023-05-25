#pragma once
#include "SOInterface.h"
#include <vector>
class WeatherData : public Subject
{
	vector<shared_ptr<Observer>> observersList;
	double temperature;
	double humidity;
	double pressure;
public:
	WeatherData();
	void registerObserver(shared_ptr<Observer> obj);
	void removeObserver(shared_ptr<Observer> obj);
	void notifyObservers();
	void measurementChanged();
	void setMeasurements(double tem, double hum, double pres);
	~WeatherData();
};

