#pragma once
#include "MenuComponent.h"
#include <vector>
#include <algorithm>
//class Menu also a menucomponent, like MultiCommand class is also a deriveed of  Command class, 
class Menu : public MenuComponent {
	vector<shared_ptr<MenuComponent>> item_list;
	string name;
	string description;
public:
	Menu(string n, string des) {
		this->name = n;
		this->description = des;		
	}
	void add(shared_ptr<MenuComponent> obj) { this->item_list.push_back(obj);}
	void remove(shared_ptr<MenuComponent> obj) {
		auto it = find(this->item_list.begin(), this->item_list.end(), obj);
		if (it != this->item_list.end()) {
			this->item_list.erase(it);
		}
	}
	shared_ptr<MenuComponent> getChild(int i) {
		return this->item_list[i];
	}
	string getName() { return this->name; }
	string getDescription() { return this->description; }
	void print() {
		cout << "Name: " << this->name << endl;
		cout << "Description: " << this->description << endl;
		if (this->item_list.size() > 0) {
			cout << "//---------//" << endl;
			for (auto it : this->item_list) {
				it->print();
				cout << "//---------//" << endl;
			}
		}
	}
};