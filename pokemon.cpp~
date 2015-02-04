/**
*	@file : pokemon.cpp
*	@author :  Garion Morgan
*	@date : 2015.1.29
*	Purpose: Implementation of pokemon Class
*/

#include "colosseum.h"
#include "pokemon.h"
#include "Dice.h"
#include <string>
#include <sstream>
#include <unistd.h>
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
	return attackBonus;
}
int pokemon::set_defenseBonus(int defenseBonus)
{
	return defenseBonus;
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
	health = (health - damage);
	return health;
}
int pokemon::health_check()
{
	return health;
}



int pokemon::attacks()
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
	return damage;
}

