#pragma once
#ifndef HUMAN_H
#define HUMAN_H
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
#endif



