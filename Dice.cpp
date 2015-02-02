/**
*	@file : Dice.cpp
*	@author :  Garion Morgan
*	@date :	2015.1.29
*	Purpose: Implementation of Dice Class
*/

#include "Dice.h"

Dice::Dice() 
{ 
	m_numSides = 6;
	/** initialize random seed: */
	srand (time(NULL));//Old C style NULL
}


Dice::Dice(int numSides)
{
	m_numSides = numSides;
	/** initialize random seed: */
	srand (time(NULL));//Old C style NULL
}


int Dice::getNumSides()
{
	return(m_numSides);
}

int Dice::roll()
{
	
	/** Get back a pseudo-random number */
	return(rand()%m_numSides + 1);
}
