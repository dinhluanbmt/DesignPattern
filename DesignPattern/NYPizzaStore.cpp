#include "NYPizzaStore.h"
#include "NYIngredientsFactory.h"
NYPizzaStore::NYPizzaStore() {
	this->ingredimentsFac = shared_ptr<NYIngredientsFactory>(new NYIngredientsFactory());
}
shared_ptr<Pizza> NYPizzaStore::createPizza() {
	shared_ptr<Pizza> pizza(new Pizza());
	pizza->setName(" NewYork Pizza ");
	pizza->setDough(this->ingredimentsFac->createDough());
	pizza->setSauce(this->ingredimentsFac->createSauce());
	pizza->setCheese(this->ingredimentsFac->createCheese());
	return pizza;

}
void NYPizzaStore::setIngredimentFactory( shared_ptr<IngredientsFactory> obj){
	this->ingredimentsFac = obj;
}
NYPizzaStore::~NYPizzaStore() {
	cout << "NYPizzaStore destructor...." << endl;
}
