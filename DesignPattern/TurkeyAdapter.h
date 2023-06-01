#pragma once
#include "OAInterfaceUtil.h"
class TurkeyAdapter : public TDuck
{
	shared_ptr<ATurkey> turkey;
public:
	TurkeyAdapter(shared_ptr<ATurkey> obj);
	TurkeyAdapter();
	void setAdaptee(shared_ptr<ATurkey> obj);
	void quack();//implement quack method of base class
	void fly();//implement fly method of base class
	~TurkeyAdapter();
};

