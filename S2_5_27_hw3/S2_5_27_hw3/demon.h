#ifndef DEMON_H
#define DEMON_H

#include "creature.h"
#include<string>
using std::string;

class Demon : public Creature {
public:
	Demon();
	Demon(int, int);
	int getDamage();
};

#endif // !DEMON_H

