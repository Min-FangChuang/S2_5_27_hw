#include<iostream>
#include<cstdlib>
#include "balrog.h"
using std::cout;
using std::endl;


Balrog::Balrog(): Demon() {}
Balrog::Balrog(int theStength, int theHitpoints) :Demon(theStength, theHitpoints) {}
int Balrog::getDamage() {
	int damage;
	cout << "Balrog ";
	damage = Demon::getDamage();
	
	int damage2 = (rand() % getStrength()) + 1;
	cout << "Balrog speek attack inflicts " << damage2 << " additional damage points!" << endl;

	damage += damage2;

	return damage;
}

string Balrog::getSpecies() {
	return "Balrog";
}