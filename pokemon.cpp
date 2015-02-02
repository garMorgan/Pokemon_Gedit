/**
*	@file : pokemon.cpp
*	@author :  Garion Morgan
*	@date : 2015.1.29
*	Purpose: Implementation of pokemon Class
*/

#include "pokemon.h"
#include "Dice.h"
#include <string>
#include <iostream>

using namespace std;

pokemon::pokemon()
{
	string user_name;
	string name;
	//int health = 0;
	//int attack = 0;
	//int defense = 0;
	myPokemon = "";
}

int pokemon::set_attackBonus(int attackBonus)
{
	return attackBonus = d20;
}
int pokemon::set_defenseBonus(int defenseBonus)
{
	return defenseBonus = d20;
}
int pokemon::get_attackBonus() const
{
	return attack_bonus;
}
int pokemon::get_defenseBonus() const
{
	return defense_bonus;
}
string pokemon::set_name(string name)
{
	return myPokemon = name;
}
string pokemon::get_name() const
{
	return myPokemon;
}
int pokemon::set_health(int health)
{
	return health;
}
int pokemon::get_health(int damage)
{
	return health = health - damage;
}
int pokemon::health_check()
{
	return health;
}




void pokemon::userBuild()
{
	do
	{
	cout << "How many hit points will you have? (1-50): ";
	cin >> health;
	}while(health>0 != health<51);

	cout << "\n";
	cout << "Split fifty points between attack level and defense level " << endl;
	cout << "Enter your attack level (1-49): ";
	cin >> attack_bonus;
	if(attack_bonus>0 != attack_bonus<50)
	{
	cout << "Sorry, attack level must be between 1 and 49: ";
	}
	cout << "\n";

	sum = 50 - attack_bonus;	
	cout << "Enter your defense level (1-" << sum << "): ";
	while(defense_bonus>0 != defense_bonus<=sum)
	{
	cin >> defense_bonus;
	if(defense_bonus>0 != defense_bonus<=sum)
		{
		cout << "Sorry, defense level must be between 1 and " << sum << ": ";
		cout << "\n";
		}
	}
}

/*
int pokemon::attack(int attack_roll, int defense_roll)
{
	if((attack_roll+attackBonus())>(defense_roll+defenseBonus()))
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
*/
