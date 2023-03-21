#include <iostream>
#include "vehicle.h"

using namespace std;

int
main () // 	// class main. Name of class changed. exclude "DELETETHIS" to run.
{



	 Vehicle * earth = new Land("Land1");
	((Land *)earth) ->setPassCap(45);
	cout<<((Land *)earth) ->getPassCap()<<endl;
	earth->mover();

	Vehicle*water = new Aquatic("Aquatic1");
	((Aquatic*)water) -> setMaxLoad(12.5);
	cout<<((Aquatic*)water) -> getMaxLoad()<<endl;
	water->mover();

	Vehicle*air = new Aerial("Aerial 1");
	((Aerial*)air) -> setMaxSpeed(1040.5);
	cout<<((Aerial*)air) -> getMaxSpeed()<<endl;
	air->mover();




//
//	Vehicle v1("Vehicle");
//	Land v2 ("Land");
//	Aquatic v3 ("Aquatic");
//	Aerial v4 ("Aerial");
  return 0;
}
