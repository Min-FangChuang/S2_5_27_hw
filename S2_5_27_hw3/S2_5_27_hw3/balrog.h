#ifndef BALROG_H
#define BALROG_H

#include "demon.h"
#include<string>
using std::string;

class Balrog : public Demon {
public:
	Balrog();
	Balrog(int, int);
	int getDamage();
	string getSpecies();
};

#endif // !BALROG_H