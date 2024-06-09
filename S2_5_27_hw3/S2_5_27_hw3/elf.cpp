#include<iostream>
#include<cstdlib>
#include "elf.h"
using std::cout;
using std::endl;


Elf::Elf():Creature(){}
Elf::Elf(int theStength, int theHitpoints): Creature(theStength, theHitpoints){}
int Elf::getDamage() {
	int damage;
	cout << "Elf ";
	damage = Creature::getDamage();
	if ((rand() % 10) == 0) {
		cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
		damage = damage * 2;
	}
	return damage;
}

string Elf::getSpecies() {
	return "Elf";
}