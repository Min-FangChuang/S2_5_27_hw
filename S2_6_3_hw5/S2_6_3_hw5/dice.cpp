#include<cstdlib>
#include<ctime>
#include "dice.h"

Dice::Dice() : numSides(6) {
	srand(time(NULL));
}
Dice::Dice(int num) : numSides(num) {
	srand(time(NULL));
}
int Dice::rollDice()const {
	return (rand() % numSides) + 1;
}
