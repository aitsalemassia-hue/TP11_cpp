#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal() {
}

void Animal::crier() const {
	cout << "..." << endl;
}

void Animal::info() const {
	cout << "je suis un animal" << endl;
}

Animal::~Animal() {
}
