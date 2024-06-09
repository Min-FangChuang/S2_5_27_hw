#include<iostream>
#include<cstdlib>
#include<ctime>
#include"human.h"
#include"elf.h"
#include"balrog.h"
#include"cyberdemon.h"
using namespace std;

void clean();
void battleArena(Creature&, Creature&);

int main() {
	Human human(60, 100);
	Elf elf(40, 100);
	Balrog balrog(30, 100);
	Cyberdemon cyberdemon(40,100);

	srand(time(NULL));

	battleArena(human, elf);
	battleArena(human, balrog);
	battleArena(human, cyberdemon);

	battleArena(elf, human);
	battleArena(elf, balrog);
	battleArena(elf, cyberdemon);

	battleArena(balrog, human);
	battleArena(balrog, elf);
	battleArena(balrog, cyberdemon);

	battleArena(cyberdemon, human);
	battleArena(cyberdemon, elf);
	battleArena(cyberdemon, balrog);

	system("pause");
	return(0);
}

void clean() {
	while(getchar() != '\n'){}
}

void battleArena(Creature& creature1, Creature& creature2) {
	cout << creature1.getSpecies() << " vs. " << creature2.getSpecies() << endl;
	cout << "Strength: " << creature1.getStrength() << " vs. " << creature2.getStrength() << endl;

	int HP_1 = creature1.getHitpoints(), HP_2 = creature2.getHitpoints();
	cout <<"Hitpoints: " << HP_1 << " vs. " << HP_2 << endl << endl;

	while (HP_1 > 0 && HP_2 > 0) {
		HP_1 -= creature2.getDamage();
		HP_2 -= creature1.getDamage();
		cout << HP_1 << " vs. " << HP_2 << endl << endl;
	}
	
	if (HP_1 <= 0 && HP_2 <= 0) { cout << "--Tie--" << endl; }
	else if (HP_1 <= 0) { cout << "---" << creature2.getSpecies() << " Win---" << endl; }
	else {
		cout << "---" << creature1.getSpecies() << " Win---" << endl;
	}

	cout << "\n>>>>>>>>>>>>>>>>" << endl;
}
