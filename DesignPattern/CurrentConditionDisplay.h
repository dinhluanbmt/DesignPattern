#pragma once
#include "SOInterface.h"
class CurrentConditionDisplay : public Observer, DisplayElement {
private:
	double temperature;
	double humidity;
	double pressure;
	weak_ptr<Subject> weatherData;// weak_ptr is important, use shared_ptr will cause circular reference--> exception or leak memory..
public:
	CurrentConditionDisplay(shared_ptr<Subject> obj);
	void registerItSelf();
	void removeObserver();
	void update(double tem, double hum, double pres);
	void display();
	~CurrentConditionDisplay();

};

