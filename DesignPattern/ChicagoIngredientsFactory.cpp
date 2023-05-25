#include "ChicagoIngredientsFactory.h"
#include "ThickDough.h"
#include "TomatoSauce.h"
#include "MozzarellaCheese.h"

shared_ptr<Dough> ChicagoIngredientsFactory::createDough() {
	shared_ptr<Dough> dough(new ThickDough());
	return dough;
}
shared_ptr<Sauce> ChicagoIngredientsFactory::createSauce() {
	shared_ptr<Sauce> sauce(new TomatoSauce());
	return sauce;
}
shared_ptr<Cheese> ChicagoIngredientsFactory::createCheese() {
	shared_ptr<Cheese> cheese(new MozzarellaCheese());
	return cheese;
}
ChicagoIngredientsFactory::~ChicagoIngredientsFactory() {
	cout << "Chicago Ingrediments Factory Destructor..." << endl;
}
