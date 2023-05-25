#include "MallardDuck.h"
#include "Quack.h"
#include "FlyWithWings.h"
MallardDuck::MallardDuck() {
	this->setQuackBehavior(shared_ptr<QuackBehavior>(new Quack()));
	this->setFlyBehavior(shared_ptr<FlyBehavior>(new FlyWithWings()));
}
void MallardDuck::display() {
	cout << " display Mallard Duck method " << endl;
}
MallardDuck::~MallardDuck() {
	cout << "desconstructor of MallardDuck class" << endl;
}