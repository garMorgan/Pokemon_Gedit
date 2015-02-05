#include <iostream>
#include "Dice.h"
#include "pokemon.h"
#include "colosseum.h"
#include <string>
#include <sstream>
#include <unistd.h>

using namespace std;




int main()
{
	string pokeMon1;	
	string pokeMon2;
	colosseum game;

	cout << "Player1, build your Pokemon!" << endl;
	cout << "=====================" << endl;
	pokemon poke1;
	game.userBuild(poke1);

	cout << "Player2, build your Pokemon!" << endl;
	cout << "=====================" << endl;
	pokemon poke2;
	game.userBuild(poke2);

	game.play(poke1,poke2);


	return 0;
}


