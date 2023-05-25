#pragma once
#include "CInterfaceUtil.h"
#include <vector>
enum class PressState {
	ON = 0,
	OFF,
	NOT_PRESSED
};
class RemoteControl
{
	vector<shared_ptr<Command>> commandList;
	shared_ptr<Command> lastCommand;
	PressState lastPressedButton;
public:
	RemoteControl(int n);
	void setCommand(shared_ptr<Command> obj, int pos);
	void onButtonWasPushed(int pos);
	void offBufftonWasPushed(int pos);
	void showCommandList();
	void onButtonUndoPushed();
	~RemoteControl();
};

