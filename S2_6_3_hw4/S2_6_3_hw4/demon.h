#pragma once
#include "creature.h"
#include<string>
using std::string;

class Demon : public Creature {
public:
	Demon();
	Demon(int, int);
	int getDamage();
};

