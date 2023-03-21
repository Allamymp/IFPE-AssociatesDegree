using namespace std;
#include <iostream>

class Vehicle {
protected:
	string name;

public:
	Vehicle(const char *name) {
		this->name = name;
		cout << "Object " << getName() << " created!" << endl<< endl<< endl<< endl;
	}

	const string& getName() const {
		return name;
	}
};

class Land: public Vehicle {

private:
	int passCap = 5;


public:
	Land(const char *name):  Vehicle(name){

	}

	int getPassCap() const;
	void setPassCap(int passCap);
};

class Aquatic: public Vehicle {

private:
	float maxLoad = 10;
public:
	Aquatic(const char *name):  Vehicle(name){

	}

	float getMaxLoad() const;
	void setMaxLoad(float maxLoad);
};

class Aerial: public Vehicle {

private:
	float maxSpeed = 100;

public:
	Aerial(const char *name):  Vehicle(name){

	}

	float getMaxSpeed() const;
	void setMaxSpeed(float maxSpeed);
};
