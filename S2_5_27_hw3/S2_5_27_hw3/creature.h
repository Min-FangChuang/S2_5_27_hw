#ifndef CREATURE_H
#define CREATURE_H
#include<string>
using std::string;

class Creature {
public:
	Creature();
	Creature(int, int);
	int getDamage();
	string getSpecies();
	int getStrength()const;
	int getHitpoints()const;
	void setStrength(int);
	void serHitpoints(int);
private:
	int strength;
	int hitpoints;
};

#endif