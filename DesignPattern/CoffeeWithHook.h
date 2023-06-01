#pragma once
#include "CaffeineBeverageWithHook.h"
class CoffeeWithHook : public CaffeineBeverageWithHook
{
private:
	string getUserInput();
public:
	void brew();
	void addCondiments();
	bool customerWantsCondiments();
	~CoffeeWithHook();
};

