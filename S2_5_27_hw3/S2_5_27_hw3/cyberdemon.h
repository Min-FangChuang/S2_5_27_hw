#pragma once
#include "demon.h"
#include<string>
using std::string;

class Cyberdemon : public Demon {
public:
	Cyberdemon();
	Cyberdemon(int, int);
	int getDamage();
	string getSpecies();
};

