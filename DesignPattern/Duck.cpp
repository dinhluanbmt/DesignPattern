#include "Duck.h"
Duck::Duck() {
	this->m_flybehavior = nullptr;
	this->m_quackbehavior = nullptr;
}
Duck::~Duck() {

}
void Duck::performFly() {
	this->m_flybehavior->fly();
}
void Duck::performQuack() {
	this->m_quackbehavior->quack();
}
void Duck::setFlyBehavior(shared_ptr<FlyBehavior> flybehavior) {
	this->m_flybehavior = flybehavior;
}
void Duck::setQuackBehavior(shared_ptr<QuackBehavior> qbehavior) {
	this->m_quackbehavior = qbehavior;
}
void Duck::swim() {
	cout << "every Duck can Swim...." << endl;
}
