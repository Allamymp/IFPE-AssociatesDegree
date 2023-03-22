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
	virtual void mover() = 0;
	virtual ~Vehicle() {

	}

};

class Land: public Vehicle {
protected:
	Land():Vehicle("temp"){};

private:
	int passCap = 5;

public:
	Land(const char *name) :
			Vehicle(name) {

	}

	int getPassCap() const;
	void setPassCap(int passCap);
	void mover();
	~Land() {
		cout << "Object: " << getName() << " destroyed!" << endl << endl
				<< endl;
	}

};

class Aquatic: public Vehicle {
protected:
 Aquatic():Vehicle("temp"){};
private:
	float maxLoad = 10;
public:
	Aquatic(const char *name) :
			Vehicle(name) {

	}

	float getMaxLoad() const;
	void setMaxLoad(float maxLoad);
	void mover();
	virtual ~Aquatic() {
		cout << "Object: " << getName() << " destroyed!" << endl << endl
				<< endl;
	}

};

class Aerial: public Vehicle {
private:
	float maxSpeed = 100;

public:
	Aerial(const char *name) :
			Vehicle(name) {

	}

	float getMaxSpeed() const;
	void setMaxSpeed(float maxSpeed);
	void mover();
	~Aerial() {
		cout << "Object: " << getName() << " destroyed!" << endl << endl
				<< endl;
	}

};

class Amphibian: public virtual Land, public virtual Aquatic {

public:
	Amphibian (const char * name) : Vehicle(name), Land(), Aquatic() {}
	void mover(){
		Land::mover();
		Aquatic::mover();
	}
};
