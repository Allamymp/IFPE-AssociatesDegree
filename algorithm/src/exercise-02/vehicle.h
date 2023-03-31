using namespace std;
#include <iostream>

class Vehicle {
protected:
	string name;

public:
	Vehicle(const char *name);
////	virtual const string& getName() const {
//		return name;
//	}
	virtual void move() = 0;
	virtual ~Vehicle();

};

class Land: public virtual Vehicle {
protected:
	Land() :
			Vehicle("temp") {
		passCap = 5;
	};

private:
	int passCap;

public:
	void setPassCap(int passCap);
	int getPassCap();
	void move();
virtual ~Land();
	Land(const char *name) :
			Vehicle(name) {
		passCap = 5;
	};

};

class Aquatic: public virtual Vehicle {
protected:
	Aquatic() : Vehicle("temp") {
		maxLoad = 10;};

private:
	float maxLoad;
public:

	void setMaxLoad(float maxLoad);
	float getMaxLoad() const;
	void move();
	virtual ~Aquatic();
	Aquatic(const char *name) :
			Vehicle(name) {
		maxLoad = 10;
	}
};

class Aerial: public Vehicle {
private:
	float maxSpeed;

public:
	void setMaxSpeed(float maxSpeed);
	float getMaxSpeed() const;
	void move();
	virtual ~Aerial();
	Aerial(const char *name) :
			Vehicle(name) {
		maxSpeed = 100;
	}

};

class Amphibian: public Land, public Aquatic {

public:
	void move() override {
		Land::move();
		Aquatic::move();
	}
	Amphibian(const char *name) :
			Vehicle(name), Land(), Aquatic() {
	}

};
