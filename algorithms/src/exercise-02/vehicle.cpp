#include "vehicle.h"

int Land::getPassCap() const {
	return passCap;
}

void Land::setPassCap(int passCap) {
	this->passCap = passCap;
}

float Aquatic::getMaxLoad() const  {
	return maxLoad;
}

void Aquatic::setMaxLoad(float maxLoad) {
	this->maxLoad = maxLoad;
}

float Aerial::getMaxSpeed() const {
	return maxSpeed;
}

void Aerial::setMaxSpeed(float maxSpeed) {
	this->maxSpeed = maxSpeed;
}
