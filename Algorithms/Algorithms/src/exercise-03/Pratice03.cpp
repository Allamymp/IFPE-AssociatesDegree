//============================================================================
// Name        : Algorithms.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Functions.h"
using namespace std;
using namespace functions;

#include "Functions.h"

int main() {
	float x = 5.5, y = 10.15, z = 30.7;
	cout << "Antes 	: x = " << x <<  " y = " << y << endl;
	trocar(x, y);
	cout << "Depois	: x = " << x << " y = " << y << endl;
	cout << "Minimo de \"strA\" e \"strB\": " << minimo("strA", "strB") << endl;
	cout << "Maximo de \"strA\" e \"strB\": " << maximo("strA", "strB") << endl;

	return 0;
}
