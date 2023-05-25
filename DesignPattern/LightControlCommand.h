#pragma once
#include "CInterfaceUtil.h"
class LightControlCommand : public Command
{
public:
	LightControlCommand() { this->cmd_desc = " LightControlCommand object... "; }
	LightControlCommand(string des) { this->cmd_desc = des; }
	void commandOn();
	void commandOff();
	~LightControlCommand();
};

