#ifndef CYBERDEMON_H
#define CYBERDEMON_H

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

#endif // !CYBERDEMON_H