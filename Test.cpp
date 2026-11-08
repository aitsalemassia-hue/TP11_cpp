#include"Animal.h"
#include"Chien.h"
#include"Chat.h"

#include"Vache.h"
#include <iostream>
#include <vector>
using namespace std;
#include<memory>

int main() {

	vector<unique_ptr<Animal>> animaux;

	animaux.push_back(make_unique<Chien>());
	animaux.push_back(make_unique<Chat>());
	animaux.push_back(make_unique<Vache>());

	for (const auto &animal : animaux) {
		animal->info();
		animal->crier();
	}

}
