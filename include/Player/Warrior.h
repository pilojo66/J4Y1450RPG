#ifndef WARRIOR_H
#define WARRIOR_H
#include "Player.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

class Warrior: public Player{
	bool gaurd;
public:
	Warrior();

	void TakeDamage(int);
	void TakeBurn(int);
	void TakeStun(int);
	bool UseItem(void);

	//ABILITIES
	int Slash(void);
	int Thrust(bool);
	int Stagger(void);
	void Gaurd(void);
};
#endif