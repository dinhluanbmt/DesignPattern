#include "NYIngredientsFactory.h"
#include "MarianaSauce.h"// NY fac make MarianaSauce
#include "ThinDough.h"// NY factory create thin
#include "ReggianoCheese.h"//NY fac make ReggianoCheese
shared_ptr<Dough> NYIngredientsFactory::createDough() {
	shared_ptr<Dough> dough(new ThinDough());
	return dough;
}
shared_ptr<Sauce> NYIngredientsFactory::createSauce() {
	shared_ptr<Sauce> sauce(new MarianaSauce());
	return sauce;
}
shared_ptr<Cheese> NYIngredientsFactory::createCheese() {
	shared_ptr<Cheese> cheese(new ReggianoCheese());
	return cheese;
}
NYIngredientsFactory::~NYIngredientsFactory() {
	cout << "NewYork Ingredients Factory Destructor..." << endl;
}
