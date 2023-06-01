#pragma once
#include "CaffeineBeverageWithHook.h"
class TeaWithHook : public CaffeineBeverageWithHook
{
private:
	string getUserInput();
public:
	void brew();
	void addCondiments();	
	bool customerWantCondiments();
	~TeaWithHook();
};

