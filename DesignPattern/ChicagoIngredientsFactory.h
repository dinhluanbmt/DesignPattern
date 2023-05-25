#pragma once
#include "Ingredients.h"

class ChicagoIngredientsFactory
{
public:
	shared_ptr<Dough> createDough();
	shared_ptr<Sauce> createSauce();
	shared_ptr<Cheese> createCheese();
	~ChicagoIngredientsFactory();
};

