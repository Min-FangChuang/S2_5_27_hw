#include<iostream>
#include<cstdlib>
#include"human.h"
#include"elf.h"
#include"balrog.h"
#include"cyberdemon.h"
using namespace std;

void clean();

int main() {
	Human human(20, 100);
	Elf elf(15, 100);
	Balrog balrog(10, 100);
	Cyberdemon cyberdemon(15,100);

	int h, e, b, c;
	char again;
	do {
		cout << "--------------------" << endl;
		h = human.getDamage();
		e = elf.getDamage();
		b = balrog.getDamage();
		c = cyberdemon.getDamage();

		cout << endl;
		cout << "Human: " << h << " points" << endl;
		cout << "Elf: " << e << " points" << endl;
		cout << "Balrog: " << b << " points" << endl;
		cout << "Cyberdemon: " << c << " points" << endl;
		cout << "\nDo you want to attack one more time (y/n) ?";
		cin >> again;
		clean();
	} while (again == 'y');

	system("pause");
	return (0);
}

void clean() {
	while(getchar() != '\n'){}
}