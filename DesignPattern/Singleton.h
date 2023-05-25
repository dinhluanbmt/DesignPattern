#pragma once
#include <iostream>
#include <string>
#include <memory>
using namespace std;
class Singleton
{
private:
	static shared_ptr<Singleton> m_Instance;
	Singleton();
	string description = "";
public:
	static shared_ptr<Singleton> getInstance();
	string getDescription();
	~Singleton();
};

