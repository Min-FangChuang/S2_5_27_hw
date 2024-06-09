#include<iostream>
#include<cstdlib>
#include"creature.h"
using std::cout;
using std::endl;

Creature::Creature():strength(10), hitpoints(10){}
Creature::Creature(int theStength, int theHitpoints):strength(theStength), hitpoints(theHitpoints){}
int Creature::getDamage() {
	int damage;
	damage = (rand() % strength) + 1;
	cout << "attacks for " << damage << " points!" << endl;
	return damage;
}

string Creature::getSpecies() {
	return "Unknow";
}

int Creature::getStrength()const { return strength; }
int Creature::getHitpoints()const { return hitpoints; }
void Creature::setStrength(int theStr) {
	strength = theStr;
}
void Creature::serHitpoints(int thePoints) {
	hitpoints = thePoints;
}