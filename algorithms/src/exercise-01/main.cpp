#include <iostream>
using namespace std;
#include "vehicle.h"
#include <chrono>






int
main ()				// class main
{
  auto start = std::chrono::high_resolution_clock::now ();

  Vehicle *obj1 = new Vehicle ("v1");	// instancing a new pointer object
  obj1->setNumWheels (2);
  cout << "Number of wheels: " << obj1->getNumWheels () << endl;
  delete obj1;			//    deleting pointer and freeing memory

  Vehicle *obj2 = new Vehicle ("v2");	// instantiating pointers as objects
  obj2->setNumWheels (4);
  cout << "Number of wheels: " << obj2->getNumWheels () << endl;
  delete obj2;			//    deleting pointer and freeing memory

  Vehicle *obj3 = new Vehicle ("v3");
  obj3->setNumWheels (6);
  cout << "Number of wheels: " << obj3->getNumWheels () << endl;
  delete obj3;			// deleting pointer and freeing memory

  /* {

     Vehicle vehicle1 ("v1");


     {

     Vehicle vehicle2 ("v2");


     {

     Vehicle vehicle3 ("v3");


     }
     }
     } */

  auto finish = std::chrono::high_resolution_clock::now ();
  long elapsed = std::chrono::duration_cast < std::chrono::nanoseconds >
    (finish - start).count () / 1000;
  cout << "time[us] = " << elapsed << endl;
  return 0;

}
