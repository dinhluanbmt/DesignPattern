#include "RemoteControl.h"
RemoteControl::RemoteControl(int n) {
	//this->commandList = vector<shared_ptr<Command>>(n, nullptr);// we need to check command object is nullptr or not later
	
	this->commandList = vector<shared_ptr<Command>>(n, shared_ptr<Command>(new NoCommand()));// just  set it all nocommand, do nothing. but this way create new vec
	this->lastPressedButton = PressState::NOT_PRESSED;
	this->lastCommand = shared_ptr<Command>(new NoCommand());

	//just resize it;
	// 
	// 
	//this->commandList.resize(n);

}
void RemoteControl::setCommand(shared_ptr<Command> obj, int pos) {
	this->commandList[pos] = obj;
}
void RemoteControl::offBufftonWasPushed(int pos) {
	this->commandList[pos]->commandOff();
	this->lastPressedButton = PressState::OFF;
	this->lastCommand = this->commandList[pos];
	
}
void RemoteControl::onButtonWasPushed(int pos) {
	this->commandList[pos]->commandOn();
	this->lastPressedButton = PressState::ON;
	this->lastCommand = this->commandList[pos];
}
void RemoteControl::showCommandList() {
	cout << "List of Command objects in RemoteControl...." << endl;
	for (auto obj : this->commandList) {
		cout << obj->getDescription() << endl;
	}
	cout << endl;
}
void RemoteControl::onButtonUndoPushed() {
	if (lastPressedButton == PressState::OFF) {
		lastCommand->commandOn();
	}
	else 
	if(lastPressedButton == PressState::ON){
		lastCommand->commandOff();
	}
}
RemoteControl::~RemoteControl() {
	cout << "Destructor of remotecontrol..." << endl;
}
