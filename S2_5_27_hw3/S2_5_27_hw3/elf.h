#pragma once
#include "creature.h"
#include<string>
using std::string;

class Elf : public Creature {
public:
	Elf();
	Elf(int, int);
	int getDamage();
	string getSpecies();
};

