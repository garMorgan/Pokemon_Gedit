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
	string n1;	
	
	cout << "Please name your pokemon" << endl;
	cin >> n1;
	p.set_name(n1);
	cout << "\n" << p.get_name() << endl;
	do
	{
	cout << "How many hit points will you have? (1-50): ";
	cin >> health;
	p.set_health(health);
	cout << "\n" << p.health_check() << endl;
	}while(health>0 != health<51);

	cout << "\n";
	do
	{
	cout << "Split fifty points between attack level and defense level " << endl;
	cout << "Enter your attack level (1-49): ";
	cin >> attack_bonus;
	p.set_attackBonus(attack_bonus);
	cout << "\n" << p.get_attackBonus() << endl;
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
	p.set_defenseBonus(defense_bonus);
	cout << "\n" << p.get_defenseBonus() << endl;
	if(defense_bonus>0 != defense_bonus<=sum)
		{
		cout << "Sorry, defense level must be between 1 and " << sum << ": ";
		cout << "\n";
		}
	}while(defense_bonus>0 != defense_bonus<=sum);
	
}


bool colosseum::attack(const pokemon& attacker, pokemon& defender)
{
	Dice d20 = Dice(20);
	int dieAttack = d20.roll();
	int dieDefense = d20.roll();
	cout << attacker.get_name() << " is attacking " << defender.get_name();
	cout << attacker.get_name() << " rolls an attack bonus of " << dieAttack;
	cout << defender.get_name() << " rolls a defense bonus of " << dieDefense;

	if((attacker.get_attackBonus()+dieAttack)>(dieDefense+defender.get_defenseBonus()))
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
	defender.get_health(damage);	
	}
	else
	{
	damage = 0;
	cout << "Attack missed!" << endl;
	}
	return damage;
}


void colosseum::play(pokemon& p1, pokemon& p2)
{
	bool fin = false;
	pokemon poke;
	poke.get_name();
	Dice d2 = Dice(2);
	cout << "Player 1 will roll a D2 to decide who goes first" << endl;
	for(int i=0;i<1;i++)
	{
	int roll = d2.roll();
		if(roll == 1)
		{
		cout << "Player 1 rolls a " << roll << " and will go first" << endl;
		for(int j=1; j<=10;j++)
	{
		cout << endl;
		cout << "Round " << j << "!" << endl;
		cout << endl;
		fin = attack(p1, p2);
		if(p1.health_check()>0)
		{
		cout << p2.get_name() << " has " << p2.health_check() << " hit points left";
		}
		else
		{
		cout << p2.get_name() << " has been defeated";
		break;
		}
	}		

		}
		else
		{
		cout << "Player 1 rolls a " << roll << " and will go second" << endl;
		}
	}
	

}
