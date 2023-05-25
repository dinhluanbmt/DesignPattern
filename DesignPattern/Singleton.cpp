#include "Singleton.h"
//shared_ptr<Singleton> Singleton::m_Instance = nullptr;
 shared_ptr<Singleton> Singleton::m_Instance(new Singleton());
Singleton::Singleton() {
	this->description = " you can only instantiate one object of this class";
}
 shared_ptr<Singleton> Singleton::getInstance() {
	//if (m_Instance == nullptr) {
	//	m_Instance = shared_ptr<Singleton>(new Singleton());
//	}
	return m_Instance;
}
string Singleton::getDescription() {
	return this->description;
}
Singleton::~Singleton() {
	cout << "Destructor of Singleton class...." << endl;
}
