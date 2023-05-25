#pragma once
#include "InterfaceUtil.h"
class Duck
{
	shared_ptr<QuackBehavior> m_quackbehavior;
	shared_ptr<FlyBehavior>   m_flybehavior;
public:
	Duck();
	void performQuack();
	void performFly();
	void setQuackBehavior(shared_ptr<QuackBehavior> qbehavior);
	void setFlyBehavior(shared_ptr<FlyBehavior> flybehavior);
    virtual void swim();// every duck can swim, but derived class also can override it
	virtual void display() = 0;// derived class must implement this method
	virtual ~Duck();// to call destructor of derived class

};

