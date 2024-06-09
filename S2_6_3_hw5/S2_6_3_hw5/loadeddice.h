#ifndef LOADEDDICE_H
#define LOADEDDICE_H

#include "dice.h"
class LoadedDice :public Dice {
public:
	LoadedDice();
	LoadedDice(int);
	int rollDice() const;
};

#endif // !LOADEDDICE_H