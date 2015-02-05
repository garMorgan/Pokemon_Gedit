/**
*	@file : colosseum.h
*	@author :  Garion Morgan
*	@date : 2015.1.29
*	Purpose: Header file of Dice Class. Used to emulate a dice with the number of sides given at construction time.
*/


/**
* The ifndef, define block is used to avoid redefintion and other errors that can occur
* during compilation. 
* NOTE: the #endif at the end of the file.
*  
* The name you choose is up to you. Convention is to use the name of your header file
* in all caps, replacing the period with an underscore.
*/

#ifndef COLOSSEUM_H
#define COLOSSEUM_H
#include <string>
#include "pokemon.h"

class colosseum
{
	public:
	colosseum();


	/**
	*@pre every method in class
	*@post displays game being played
	*return game being played
	*/
	void userBuild(pokemon& p);

	void play(pokemon& p1, pokemon& p2);


	/**
	*@pre attackers name and attack, defenders name and defense
	*@post using d20 gets if attack is greater than defense
	*return if attack hit or not
	*/
	bool attack_rolls(std::string poke1, int attacker, std::string poke2, int defender);
	int roll;

	int damage;

	/**
	*@pre attackBonus added to attack of user
	*@post none
	*return sum of both attackbonus and std attack
	*/
	int sum;
	
	/**
	*@pre rolls three 6sided dice
	*@post attacks or blocks attack
	*return if attack is greater than defesne then returns damage to enemy
	*/
	bool attack(const pokemon& attacker, pokemon& defender);

	int attacks();
	/**
	*@pre attack must be greater than defense
	*@post takes away life from opponent
	*return damage
	*/
	int attack_hit();

	/**
	*@pre none
	*@post sets attackbonus from user
	*return attackbonus from user
	*/
	int set_attackBonus(int attackBonus);

	/**
	*@pre none
	*@post sets defensebonus from user
	*return defensebonus from user
	*/
	int set_defenseBonus(int defenseBonus);

	/**
	*@pre set attackbonus
	*@post user now can add attack roll with attackbonus
	*return attackbonus
	*/
	int get_attackBonus() const;

	/**
	*@pre set defensebonus
	*@post user now can add defense roll with defensebonus
	*return defensebonus
	*/
	int get_defenseBonus() const;

	/**
	*@pre none
	*@post set health from user
	*return health
	*/
	int set_health(int health);

	/**
	*@pre sethealth
	*@post subtracts total damage from health
	*return damage
	*/
	int get_health() const;

	/**
	*@pre none
	*@post shows user amount of health
	*return health
	*/
	int health_check();
	
	/**
	*@pre none
	*@post sets name from user
	*return name of pokemon
	*/
	std::string set_name(std::string name);

	/**
	*@pre setname
	*@post displays name
	*return name of pokemon
	*/
	std::string get_name() const;

	private:

	/**
	*@pre none
	*@post initializes all numeric data to zero and strings
	*return health
	*/
	int health;

	/**
	*@pre none
	*@post gets users attackbonus
	*return attackbonus
	*/
	int attack_bonus;

	/**
	*@pre none
	*@post gets users defensebonus
	*return defensebonus
	*/
	int defense_bonus;
	int d20;
	int d6;
	int d2;


};





#endif
