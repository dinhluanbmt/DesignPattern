#include "TeaWithHook.h"
string TeaWithHook::getUserInput() {
	string ret = "no";//just make it simple
	return ret;
}
void TeaWithHook::brew() {
	cout << "Steeping the tea..." << endl;
}
void TeaWithHook::addCondiments() {
	cout << "Adding Lemon..." << endl;
}
bool TeaWithHook::customerWantCondiments() {
	string ret = getUserInput();
		if (ret == "yes") {
			return true;
		}
		return false;
}
TeaWithHook::~TeaWithHook() {
	cout << "Destructor TeaWithHook..." << endl;
}