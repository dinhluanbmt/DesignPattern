#pragma once
#include "SOInterface.h"
class ForecastDisplay : public Observer,DisplayElement
{
	double temperature;
	double humidity;
	double pressure;
	weak_ptr<Subject> weatherData;
public:
	ForecastDisplay(shared_ptr<Subject> obj);
	void registerObserver(const shared_ptr<ForecastDisplay>& obj);//with this parameter we don't need to use shared_from_this();
	void removeObserver(const shared_ptr<ForecastDisplay>& obj);
	void update(double tem, double hum, double pres);
	void display();
	~ForecastDisplay();

};

