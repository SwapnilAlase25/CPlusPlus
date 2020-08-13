//============================================================================
// Name        : Classes.cpp
// Author      : Swapnil Alase
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Cars.h"

int main() {

	Cars audi, bmw("bmw Class C", 2018, "White", 50000);

	audi.setName("Audi R8");
	audi.setYear(2015);
	audi.setColor("Black");
	audi.setCost(450000);
	audi.getInfo();
	cout << "-----------------" << endl;
	bmw.getInfo();

	return 0;
}
