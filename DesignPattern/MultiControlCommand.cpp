#include "MultiControlCommand.h"
MultiControlCommand::~MultiControlCommand() {
	cout << "Destructor of : " << this->cmd_desc << endl;
}
void MultiControlCommand::commandOn() {
	for (auto it : this->m_cmdList) {
		it->commandOn();
	}
}
void MultiControlCommand::commandOff() {
	for (auto it : this->m_cmdList) {
		it->commandOff();
	}
}
void MultiControlCommand::addCommand(shared_ptr<Command> obj) {
	this->m_cmdList.push_back(obj);
}
string MultiControlCommand::getDescription() {
	string des = "Multi-ControlCommand control the folowing devices : ";
	for (auto it : this->m_cmdList) {
		des.append(it->getDescription());
		des.append(" , ");
	}
	return des;

}