#include "vehicle.h"

int Land::getPassCap() const {
	return passCap;
}
void Land::setPassCap(int passCap) {
	this->passCap = passCap;
}
void Land::mover(){
	cout<<"Vehicle "<<Vehicle::getName()<<"  moved!"<<endl;
}

float Aquatic::getMaxLoad() const  {
	return maxLoad;
}
void Aquatic::setMaxLoad(float maxLoad) {

	this->maxLoad = maxLoad;
}
void Aquatic::mover(){
	cout<<"Vehicle "<<Vehicle::getName()<<"  moved!"<<endl;
}

float Aerial::getMaxSpeed() const {
	return maxSpeed;
}
void Aerial::setMaxSpeed(float maxSpeed) {
	this->maxSpeed = maxSpeed;
}
void Aerial::mover(){
cout<<"Vehicle "<<Vehicle::getName()<<"  moved!"<<endl;
}
