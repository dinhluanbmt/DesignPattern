#pragma once
#include "RemoteControl.h"
class RemoteLoader
{
public:
	static shared_ptr<RemoteControl> loadRemoteControl(int count);
};

