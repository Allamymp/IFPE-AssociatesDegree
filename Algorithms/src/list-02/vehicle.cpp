#include "vehicle.h"
#include <iostream>

Vehicle::Vehicle(const char *name) {
	this->name = string(name);
	cout << "Object " << name << " created!" << endl;
}
;
void Vehicle::move() {
	cout << "Vehicle  " << name << " moved." << endl;
}
Vehicle::~Vehicle() {
	cout << "object " << name << " destroyed" << endl << endl;
}

void Land::setPassCap(int passCap) {
	this->passCap = passCap;
}
int Land::getPassCap()  {
	return passCap;
}

void Land::move() {
	cout << "Vehicle " << name << "  moved!" << endl;
}
Land::~Land() {
}
;

void Aquatic::setMaxLoad(float maxLoad) {

	this->maxLoad = maxLoad;
}
float Aquatic::getMaxLoad() const {
	return maxLoad;
}

void Aquatic::move() {

	cout << "Vehicle " << name<< "  moved!" << endl;
}
Aquatic::~Aquatic() {
}
;

void Aerial::setMaxSpeed(float maxSpeed) {
	this->maxSpeed = maxSpeed;
}
float Aerial::getMaxSpeed() const {
	return maxSpeed;
}

void Aerial::move() {

	cout << "Vehicle " << name << "  moved!" << endl;
}
Aerial::~Aerial() {
}
