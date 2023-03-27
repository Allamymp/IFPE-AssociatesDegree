#include <iostream>
#include "vehicle.h"

using namespace std;

int main() // 	// class main. Name of class changed. exclude "DELETETHIS" to run.
{

	Vehicle *earth = new Land("Land1");

	dynamic_cast <  Land  * > (earth) -> setPassCap(45);
	dynamic_cast <  Land  * > (earth) ->getPassCap();
	earth->move();
	//delete earth;
	cout<<endl<<endl;


	Vehicle *water = new Aquatic("Aquatic1");
	dynamic_cast <  Aquatic  * > (water) ->setMaxLoad(12.5);
	dynamic_cast <  Aquatic  * > (water) ->getMaxLoad();
	water->move();
	//delete water;
	cout<<endl<<endl;

	Vehicle *air = new Aerial("Aerial 1");
	dynamic_cast <  Aerial  * > (air) ->setMaxSpeed(1040.5);
	dynamic_cast <  Aerial  * > (air) ->getMaxSpeed();
	air->move();
	//delete air;
	cout<<endl<<endl;

	Vehicle * frog = new Amphibian("Amphibian1");
	frog -> move();
 cout<<endl<<endl;


	delete earth;
	delete water;
	delete air;
	delete frog;
//
//	Vehicle v1("Vehicle");
//	Land v2 ("Land");
//	Aquatic v3 ("Aquatic");
//	Aerial v4 ("Aerial");
	return 0;
}
