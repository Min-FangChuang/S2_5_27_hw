#include<iostream>
#include<cstdlib>
#include "loadeddice.h"
using namespace std;

int rollTwoDice(const Dice& die1, const Dice& die2);

int main() {
	LoadedDice D1, D2;
	for (int i = 0;i < 10;i++) {
		cout << rollTwoDice(D1, D2) << endl;
	}
}

int rollTwoDice(const Dice& die1, const Dice& die2) {
	return die1.rollDice() + die2.rollDice();
}