#pragma once
#include "CInterfaceUtil.h"
class DoorControlCommand : public Command
{
public:
	DoorControlCommand() { this->cmd_desc = "DoorControlCommand object...."; }
	DoorControlCommand(string des) { this->cmd_desc = des; }
	void commandOn();
	void commandOff();	
	~DoorControlCommand();
};

