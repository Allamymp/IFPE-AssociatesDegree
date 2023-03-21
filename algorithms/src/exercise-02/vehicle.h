using namespace std;
#include <iostream>

class Vehicle {
protected:
	string name;

public:
	Vehicle(const char *name) {
		this->name = name;
		cout << "Object " << getName() << " created!" << endl;
	}

	const string& getName() const {
		return name;
	}
};

class Land: public Vehicle {

private:
	int pass_cap = 5;


public:
	Land(const char *name):  Vehicle(name){

	}

};

class Aquatic: public Vehicle {

private:
	float max_load = 10;
public:
	Aquatic(const char *name):  Vehicle(name){

	}
};

class Aerial: public Vehicle {

private:
	float max_speed = 100;

public:
	Aerial(const char *name):  Vehicle(name){

	}

};
