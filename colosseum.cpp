/**
*	@file : colosseum.cpp
*	@author :  Garion Morgan
*	@date : 2015.1.29
*	Purpose: Implementation of colosseum Class
*/

#include "colosseum.h"
#include "pokemon.h"
#include "Dice.h"
#include <string>
#include <sstream>
#include <unistd.h>
#include <iostream>

using namespace std;

colosseum::colosseum()
{
	Dice d6aa = Dice(6);
	Dice d6bb = Dice(6);
	Dice d6cc = Dice(6);
	Dice d20 = Dice(20);
	Dice d2 = Dice(2);
}


void colosseum::userBuild(pokemon& p)
{
	do
	{
	cout << "How many hit points will you have? (1-50): ";
	cin >> health;
	}while(health>0 != health<51);

	cout << "\n";
	do
	{
	cout << "Split fifty points between attack level and defense level " << endl;
	cout << "Enter your attack level (1-49): ";
	cin >> attack_bonus;
	if(attack_bonus>0 != attack_bonus<50)
	{
	cout << "Sorry, attack level must be between 1 and 49: ";
	}
	}while(attack_bonus>0 != attack_bonus<50);
	cout << "\n";
	
	do
	{
	sum = 50 - attack_bonus;	
	cout << "Enter your defense level (1-" << sum << "): ";
	cin >> defense_bonus;
	if(defense_bonus>0 != defense_bonus<=sum)
		{
		cout << "Sorry, defense level must be between 1 and " << sum << ": ";
		cout << "\n";
		}
	}while(defense_bonus>0 != defense_bonus<=sum);
	
}


int colosseum::attack(int attack_roll, int defense_roll)
{
	pokemon poke;
	if((attack_roll+poke.get_attackBonus())>(defense_roll+poke.get_defenseBonus()))
	{
	Dice d6aa = Dice(6);
	Dice d6bb = Dice(6);
	Dice d6cc = Dice(6);
	int d6a = d6aa.roll();
	int d6b = d6bb.roll();
	int d6c = d6cc.roll();
	damage = d6a + d6b + d6c;
	cout << "The attack hits! Dealing 3-D6 damage!!" << endl;
	cout << "Rolls are " << d6a << ", " << d6b << ", " << d6c << " totaling to " << damage << " damage!" << endl;	
	}
	else
	{
	damage = 0;
	cout << "Attack missed!" << endl;
	}
	return damage;
}


void colosseum::gameBuild()
{
	Dice d2 = Dice(2);
	cout << "Player 1 will roll a D2 to decide who goes first" << endl;
	for(int i=0;i<1;i++)
	{
	int roll = d2.roll();
		if(roll == 1)
		{
		cout << "Player 1 rolls a " << roll << " and will go first" << endl;
		}
		else
		{
		cout << "Player 1 rolls a " << roll << " and will go second" << endl;
		}

	}
}


