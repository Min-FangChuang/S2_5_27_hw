#include<iostream>
#include "cyberdemon.h"
using std::cout;
using std::endl;

Cyberdemon::Cyberdemon(): Demon() {}
Cyberdemon::Cyberdemon(int theStength, int theHitpoints):Demon(theStength, theHitpoints){}
int Cyberdemon::getDamage() {
	int damage;
	cout << "Cyberdemon ";
	damage = Demon::getDamage();
	return damage;
}

string Cyberdemon::getSpecies() {
	return "Cyberdemon";
}