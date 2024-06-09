#include<iostream>
#include<cstdlib>
#include "demon.h"
using std::cout;
using std::endl;


Demon::Demon(): Creature(){}
Demon::Demon(int theStength, int theHitpoints): Creature(theStength, theHitpoints) {}
int Demon::getDamage() {
	int damage;
	damage = Creature::getDamage();
	if ((rand() % 100) < 5) {
		damage = damage + 50;
		cout << "Demonic attack inflicts 50 additional damage points!" << endl;
	}
	return damage;
}