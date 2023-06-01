#include "ClsAdapter.h"
void ClsAdapter::fly() {
	WildTurkey::fly();
	//turkey just fly a short distance. so we do twice...
	WildTurkey::fly();
}
void ClsAdapter::quack() {
	WildTurkey::gobble();
}
ClsAdapter::~ClsAdapter() {
	cout << "Destructor ClsAdapter...." << endl;
}