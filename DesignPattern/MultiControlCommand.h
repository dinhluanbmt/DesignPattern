#pragma once
#include "CInterfaceUtil.h"
#include <vector>
class MultiControlCommand : public Command
{
	vector<shared_ptr<Command>> m_cmdList;
public:
	MultiControlCommand() { this->cmd_desc = "MultiControlCommand class control muti-devices with one button pressed"; }
	void commandOn();
	void commandOff();
	void addCommand(shared_ptr<Command> obj);
	string getDescription();
	~MultiControlCommand();
};

