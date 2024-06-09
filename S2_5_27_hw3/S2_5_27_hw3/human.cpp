#include<iostream>
#include<cstdlib>
#include "human.h"
using std::cout;
using std::endl;

Human::Human():Creature(){}
Human::Human(int theStength, int theHitpoints):Creature(theStength, theHitpoints){}
int Human::getDamage() {
	int damage;
	cout << "Human ";
	damage = Creature::getDamage();
	return damage;
}

string Human::getSpecies() {
	return "Human";
}