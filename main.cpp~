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
	colosseum game;
	char n1;

	do
{
	cout << "\n" << "Player1, build your Pokemon!" << endl;
	cout << "=====================" << endl;
	pokemon poke1;
	game.userBuild(poke1);

	cout << "\n" << "Player2, build your Pokemon!" << endl;
	cout << "=====================" << endl;
	pokemon poke2;
	game.userBuild(poke2);

	game.play(poke1,poke2);
	
	cout << "Do you want to play again? (y/n): ";
	cin >> n1;
}while(n1!='n');
	
	cout << "Thanks for playing!" << endl;
	

	return 0;
}


