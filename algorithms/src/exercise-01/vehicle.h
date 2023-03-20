#include <iostream>
using namespace std;
#include <chrono>

class Wheels			// class Wheels
{
public:
	Wheels() {
		auto start = std::chrono::high_resolution_clock::now();
		cout << "Object Wheel constructed" << endl;
		auto finish = std::chrono::high_resolution_clock::now();
		long elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(
				finish - start).count() / 1000;
		cout << "time[us] Constructor Wheel = " << elapsed << endl;
	}
	;
	~Wheels() {
		auto start = std::chrono::high_resolution_clock::now();
		cout << "Object Wheel destroyed" << endl;
		auto finish = std::chrono::high_resolution_clock::now();
		long elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(
				finish - start).count() / 1000;
		cout << "time[us] destructor Wheel = " << elapsed << endl;
	}
	;

};

class Vehicle			// class Vehicle
{

private:			// declaration of visibility type for privacy
	string name;			// attribute of type String, registers the name of the Vehicle
	int num_wheels;		// integer type attribute, records number of wheels
	Wheels *wheels;	// wheel pointer attribute that points to Wheel class

public:			// visibility type declaration for public

	Vehicle(const char *param)	// Vehicle constructor
			{

		this->name = string(param);
		this->wheels = NULL;

		cout << "object created" << endl;

		cout << "Name: " << getName() << endl;

	}
	const string& getName() const	// method getName
	{

		return name;

	}

	void setName(const string &name)	// method setName
			{

		this->name = name;

	}

	int getNumWheels();		// method get num_wheels

	void setNumWheels(int num_wheels);	// method set num_wheels

	~Vehicle()			// Vehicle destructor
	{
		delete[] wheels;
		cout << "Destroyed object!" << endl;

		cout << "Destroyed object name: " << getName() << endl << endl;

	}

};
