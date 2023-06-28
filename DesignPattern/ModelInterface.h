#pragma once
#include <iostream>
#include <memory>
using namespace std;

class BeatObserver;
class BPMObserver;
class ModelInterface {
public:
	virtual void initialize() = 0;
	virtual void on() = 0;
	virtual void off() = 0;
	virtual void setBPM(int bpm) = 0;
	virtual int getBPM() = 0;
	virtual void registerObserver(shared_ptr<BeatObserver> obj) = 0;
	virtual void removeObserver(shared_ptr<BeatObserver> obj) = 0;
	virtual void registerObserver(shared_ptr<BPMObserver> obj) = 0;
	virtual void removeObserver(shared_ptr<BPMObserver> obj) = 0;
	virtual ~ModelInterface() {}
};
