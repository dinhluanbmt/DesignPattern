#include "DoorControlCommand.h"
void DoorControlCommand::commandOff() {
	cout <<this->cmd_desc <<" Close the Door..." << endl;
}
void DoorControlCommand::commandOn() {
	cout << this->cmd_desc<< " Open the Door..." << endl;
}
DoorControlCommand::~DoorControlCommand() {
	cout << "Destructor of : " <<this->cmd_desc<< endl;
}

