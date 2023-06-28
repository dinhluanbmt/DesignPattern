#pragma once
#include "CPDuckCall.h"
#include "CPMallardDuck.h"
#include "CPRedheadDuck.h"
#include "CPRubberDuck.h"
#include "CPGooseAdapter.h"  // adapter class to use Goose
#include "CPQuackCounter.h"
#include "CPCountingDuckFactory.h"
#include "CPDuckFactory.h"
#include "CPAbstractFactory.h"

class CPDuckSimulator {
private:
	void simulate(shared_ptr<Quackable> duck) {
		duck->quack();
	}
public: 
	void simulate() {
		shared_ptr<Quackable> mallardDuck(new CPMallardDuck());
		shared_ptr<Quackable> redheadDuck(new CPRedheadDuck());
		shared_ptr<Quackable> duckCall(new CPDuckCall());
		shared_ptr<Quackable> rubberDuck(new CPRubberDuck());
		// use goose adapter, dont need to change simulate method 
		shared_ptr<Quackable> goose(new CPGooseAdapter(shared_ptr<CPGoose>(new CPGoose())));
		cout << "Duck Simulator start...." << endl;
		simulate(mallardDuck);
		simulate(redheadDuck);
		simulate(duckCall);
		simulate(rubberDuck);
		simulate(goose);
	}
	void simulate_count_quack() {
		shared_ptr<Quackable> mallardDuck(new CPQuackCounter( shared_ptr<Quackable>(new CPMallardDuck())));
		shared_ptr<Quackable> redheadDuck(new CPQuackCounter(shared_ptr<Quackable>(new CPRedheadDuck())));
		shared_ptr<Quackable> duckCall(new CPQuackCounter(shared_ptr<Quackable>(new CPDuckCall())));
		shared_ptr<Quackable> rubberDuck(new CPQuackCounter(shared_ptr<Quackable>(new CPRubberDuck())));
		// use goose adapter, dont need to change simulate method 
		shared_ptr<Quackable> goose(new CPQuackCounter(shared_ptr<Quackable>(new CPGooseAdapter(shared_ptr<CPGoose>(new CPGoose())))));

		cout << "Duck Simulator start...." << endl;
		//the below code still same
		simulate(mallardDuck);
		simulate(redheadDuck);
		simulate(duckCall);
		simulate(rubberDuck);
		simulate(goose);

		cout << "nums of quacks : " << CPQuackCounter::getQuacks() << endl;
	}
	void simulate_count_factory() {
		shared_ptr<CPAbstractFactory> countFactory(new CPCountingDuckFactory());
		simulate(countFactory);
	}
	void simulate(shared_ptr<CPAbstractFactory> fac) {
		shared_ptr<Quackable> mallardDuck = fac->createMallardDuck();
		shared_ptr<Quackable> redheadDuck = fac->createRedheadDuck();
		shared_ptr<Quackable> duckCall = fac->createDuckCall();
		shared_ptr<Quackable> rubberDuck = fac->createRubberDuck();
		
		cout << "Factory Duck Simulator start...." << endl;
		simulate(mallardDuck);
		simulate(redheadDuck);
		simulate(duckCall);
		simulate(rubberDuck);
		cout << "nums of quack() called : " << CPQuackCounter::getQuacks() << endl;
		
	}

	~CPDuckSimulator() {}
};
