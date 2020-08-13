/*
 * Cars.h
 *
 *  Created on: 13-Aug-2020
 *      Author: swapnil
 */

#ifndef CARS_H_
#define CARS_H_

#include <iostream>
using namespace std;

class Cars {
private:
	string name;
	int year;
	string color;
	int cost;

public:
	Cars();
	Cars(string name,int year,string color,int cost): name(name), year(year), color(color), cost(cost) {};
	~Cars();
	void getInfo();

	const string& getColor() const {
		return color;
	}

	void setColor(const string &color) {
		this->color = color;
	}

	int getCost() const {
		return cost;
	}

	void setCost(int cost) {
		this->cost = cost;
	}

	const string& getName() const {
		return name;
	}

	void setName(const string &name) {
		this->name = name;
	}

	int getYear() const {
		return year;
	}

	void setYear(int year) {
		this->year = year;
	}
};

#endif /* CARS_H_ */
