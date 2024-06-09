#pragma once
#include "creature.h"
#include<string>
using std::string;

class Human : public Creature {
public:
	Human();
	Human(int, int);
	int getDamage();
	string getSpecies();
};

