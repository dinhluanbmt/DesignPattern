#pragma once
#include <iostream>
#include <string>
#include <memory>
using namespace std;
class Observer;
class Subject {
	virtual void notifyObservers() = 0;// Observer will keep a pointer of  Subject. so we don't want Observer use this method.
public:
	virtual void registerObserver(shared_ptr<Observer> obj) = 0;// Observer can use this method
	virtual void removeObserver(shared_ptr<Observer> obj) = 0;// Observer can use this method	
	virtual ~Subject(){}// to call destructor of derived class
};

class Observer : public enable_shared_from_this<Observer> {// Observer should implement enable_shared_from_this to enable derived class of Observer to use shared_from_this().
public:
	virtual void update(double tem, double hum, double pres) = 0;
	virtual ~Observer() {}
};

class DisplayElement {
public:
	virtual void display() = 0;
	virtual ~DisplayElement() {}
};
