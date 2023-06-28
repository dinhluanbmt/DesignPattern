#pragma once
#include <iostream>
using namespace std;
// Goose is not a Duck type----> need an adapter to use Goose in DuckSimulator
class CPGoose {
public:
	void honk() {
		cout << "Goose honk..." << endl;
	}
	~CPGoose() {}
};
