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
	m_name = "";
	attack_lvl =0;
	defense_lvl=0;
	m_hp=0;
	myPokemon = "";
}

int pokemon::set_attackBonus(int attackBonus)
{
	attack_lvl = attackBonus;
}
int pokemon::set_defenseBonus(int defenseBonus)
{
	defense_lvl = defenseBonus;
}
int pokemon::get_attackBonus() const
{
	return attack_lvl;
}
int pokemon::get_defenseBonus() const
{
	return defense_lvl;
}

string pokemon::set_name(string name)
{
	m_name = name;
}
string pokemon::get_name() const
{
	return m_name;
}

int pokemon::set_health(int health)
{
	m_hp = health;
}
int pokemon::get_health(int damage)
{
	m_hp = (m_hp - damage);
	return m_hp;
}
int pokemon::health_check()
{
	return m_hp;
}


