#include "LightControlCommand.h"
void LightControlCommand::commandOff() {
	cout <<this->cmd_desc<< " turn OFF the light " << endl;
}
void LightControlCommand::commandOn() {
	cout <<this->cmd_desc <<" turn ON the light !!!" << endl;
}
LightControlCommand::~LightControlCommand() {
	cout << "Destructor of : " <<this->cmd_desc<< endl;
}
