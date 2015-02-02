#include <iostream>
#include "Dice.h"
#include "pokemon.h"
#include <string>

using namespace std;

int main()
{
	/*
	Dice d2 = Dice(2);
	Dice d6 = Dice(6);
	Dice d20 = Dice(20);
	cout << "This is your roll " << d2.roll() << endl;
	cout << "This is your roll " << d6.roll() << endl;
	cout << "This is your roll " << d20.roll() << endl;
	string test ("Hello Dude");
	cout << test << endl;
	*/


	pokemon poke1;
	pokemon poke2;
	
	poke1.userBuild();
	poke2.userBuild();

	return 0;
}
