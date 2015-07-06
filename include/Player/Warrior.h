#ifndef WARRIOR_H
#define WARRIOR_H
#include "Player.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

class Warrior: public Player{
	
public:
	Warrior();

	void TakeDamage(int);
	void TakeBurn(int);
	void TakeStun(int);
	bool UseItem(void);

	//ABILITIES
	int Attack(void);
	int Slash(void);
	int Thrust(bool);
	int Stagger(void);
	int Gaurd(void);
};
#endif