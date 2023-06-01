#pragma once
#include "./OldMallardDuck.h"
#include "./WildTurkey.h"
//implement TDuck class and inherit functon from WildTurkey class 
class ClsAdapter : public TDuck, WildTurkey
{
public:
	ClsAdapter() {}
	void fly();
	void quack();
	~ClsAdapter();
};

