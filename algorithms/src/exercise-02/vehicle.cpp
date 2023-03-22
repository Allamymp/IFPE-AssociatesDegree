#include "vehicle.h"
#include <iostream>


 Vehicle::Vehicle(const char * name) {
	this->name = name;
	cout << "Object " << getName() << " created!" << endl;
}
void Vehicle::mover(){
   cout<< "Vehicle  " << name <<  " moved."<<endl;
}
Vehicle::~Vehicle(){
  cout << "object "<< name << " destroyed"<< endl<< endl;
}



int Land::getPassCap() const {
	return passCap;
}
void Land::setPassCap(int passCap) {
	this->passCap = passCap;
}
void Land::mover() {
	cout << "Vehicle " << Vehicle::getName() << "  moved!" << endl;
}
Land::~Land();

float Aquatic::getMaxLoad() const {
	return maxLoad;
}
void Aquatic::setMaxLoad(float maxLoad) {

	this->maxLoad = maxLoad;
}
void Aquatic::mover() {

	cout << "Vehicle " << Vehicle::getName() << "  moved!" << endl;
}
Aquatic::~Aquatic();

float Aerial::getMaxSpeed() const {
	return maxSpeed;
}
void Aerial::setMaxSpeed(float maxSpeed) {
	this->maxSpeed = maxSpeed;
}
void Aerial::mover() {

	cout << "Vehicle " << Vehicle::getName() << "  moved!" << endl;
}
Aerial::~Aerial();

