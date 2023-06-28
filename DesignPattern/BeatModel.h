#pragma once
#include "ModelInterface.h"
#include <vector>
class BeatModel : public ModelInterface {
private:
	vector<shared_ptr<BeatObserver>> beatObservers;
	vector<shared_ptr<BPMObserver>> bpmObservers;
	int bpm = 90;
public:
	void on() {
		setBPM(bpm);
	}
	void off() {
		setBPM(0);
	}
	int getBPM() { return this->bpm; }
	void beatEvent() {
		notifyBPMObservers();
	}
	void setBPM(int _bpm) { 
		this->bpm = _bpm; 
		notifyBPMObservers();
	}	
	void notifyBPMObservers() {
		// need to do after define the code of BeatObserver class.
		///?????
		for (auto it : beatObservers) {
			//it->updateBeat();
		}
	}
	void registerObserver(shared_ptr<BeatObserver> obj) {
		beatObservers.push_back(obj);
	}
	void registerObserver(shared_ptr<BPMObserver> obj) {
		bpmObservers.push_back(obj);
	}
	void removeObserver(shared_ptr<BeatObserver> obj) {

	}

};
