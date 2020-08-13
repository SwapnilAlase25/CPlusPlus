/*
 * Cars.cpp
 *
 *  Created on: 13-Aug-2020
 *      Author: swapnil
 */
#include <iostream>
using namespace std;
#include "Cars.h"

Cars::Cars() {}

Cars::~Cars() {}

void Cars::getInfo(){
	cout << "Name: " << name << endl;
	cout << "Year: " << year << endl;
	cout << "Color: " << color << endl;
	cout << "Cost: " << cost << endl;
}
