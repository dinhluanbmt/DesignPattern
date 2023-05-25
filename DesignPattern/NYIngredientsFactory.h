#pragma once
#include "Ingredients.h"
class NYIngredientsFactory : public IngredientsFactory
{
public:
	shared_ptr<Dough> createDough();
	shared_ptr<Sauce> createSauce();
	shared_ptr<Cheese> createCheese();
	~NYIngredientsFactory();
};

