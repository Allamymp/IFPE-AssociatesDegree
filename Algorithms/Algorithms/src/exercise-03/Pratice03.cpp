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
#include "Arrangement.h"
#include "Student.h"


int mainDELETETHIS() {
	try {

		float x = 5.5, y = 10.15, z = 30.7;
		cout << "Antes 	: x = " << x << " y = " << y << endl;
		trocar(x, y);
		cout << "Depois	: x = " << x << " y = " << y << endl;
		cout << "Minimo de \"strA\" e \"strB\": " << minimo("strA", "strB")
				<< endl;
		cout << "Maximo de \"strA\" e \"strB\": " << maximo("strA", "strB")
				<< endl;
//
		cout << endl << "intArr:";
		Arrangement<int> intArr(10);
		intArr.set(4, 5);
		intArr.set(7, 15);
		intArr.set(8, 22);
		intArr.exibir();
		cout << endl << "floarArr:";
		Arrangement<float> floatArr(5);
		floatArr.set(0, 1.1);
		floatArr.set(1, 1.2);
		floatArr.set(2, 1.3);
		floatArr.set(3, 1.4);
		floatArr.set(4, 1.5);
		floatArr.exibir();
//
		//intArr.get(10);
		cout << endl << "classroom:";
		Arrangement<Student> classroom(3);
		classroom.set(0, Student("Joao", "1234"));
		classroom.set(1, Student("Maria", "5235"));
		classroom.set(2, Student("Jose", "2412"));
		classroom.exibir();
	} catch (InvalidIndex &e) {
		cout << "Erro: " << e.what() << endl;
	}

	return 0;
}



