#pragma once
#include "Ingredients.h"
class NYPizzaStore : public PizzaStore
{
private:
	shared_ptr<IngredientsFactory> ingredimentsFac;
public:
	NYPizzaStore();
	shared_ptr<Pizza> createPizza();
	void setIngredimentFactory(shared_ptr<IngredientsFactory> obj);
	~NYPizzaStore();
};

