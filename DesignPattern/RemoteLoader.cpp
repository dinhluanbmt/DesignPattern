#include "RemoteLoader.h"
#include "DoorControlCommand.h"
#include "LightControlCommand.h"
#include "MultiControlCommand.h"
shared_ptr<RemoteControl> RemoteLoader::loadRemoteControl(int count) {
	shared_ptr<RemoteControl> rmControl(new RemoteControl(count));
	shared_ptr<Command> livingRoomLight(new LightControlCommand("Living Room Light..."));
	rmControl->setCommand(livingRoomLight, 0);

	shared_ptr<Command> kitchenLight(new LightControlCommand("Kitchen Light..."));
	rmControl->setCommand(kitchenLight, 1);

	shared_ptr<Command> garageDoor(new DoorControlCommand("Garage Door Control..."));
	rmControl->setCommand(garageDoor, 2);

	shared_ptr<MultiControlCommand> multicomm(new MultiControlCommand());
	multicomm->addCommand(livingRoomLight);
	multicomm->addCommand(kitchenLight);
	multicomm->addCommand(garageDoor);
	rmControl->setCommand(multicomm, 3);
	
	return rmControl;
}
