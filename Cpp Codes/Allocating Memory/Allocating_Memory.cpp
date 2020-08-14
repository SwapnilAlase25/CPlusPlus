//============================================================================
// Name        : Allocating_Memory.cpp
// Author      : Swapnil Alase
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Person {

public:
	string name;

	void setName(char Nname) {
		name = Nname;
	}

	void speak() const {
		cout << "Name is " << name << endl;
	}
};

int main() {

	Person *people = new Person[26];  // allocating heap memory for 26 objects
	char ch = 'a';
	for (int i = 0; i < 26; i++) {

		people[i].setName(ch);
		people[i].speak();
		ch++;
	}

	delete[] people;	// deleting heap memory for 26 objects
	return 0;
}
