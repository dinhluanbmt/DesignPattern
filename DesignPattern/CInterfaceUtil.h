#pragma once
#include <iostream>
#include <string>
#include <memory>
using namespace std;
class Command {
protected:
	string cmd_desc ="pls give short descrition...";
public:
	virtual void commandOn() = 0;
	virtual void commandOff() = 0;
	virtual string getDescription() { return this->cmd_desc; }
	virtual ~Command() {}
};
class NoCommand : public Command {
public:
	NoCommand() { this->cmd_desc = " no command will execute..."; }
	void commandOn(){}
	void commandOff(){}
	~NoCommand(){}
};
