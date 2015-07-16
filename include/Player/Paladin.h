#ifndef PALADIN_H
#define PALADIN_H
#include "Player.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

class Paladin: public Player{
	
public:
	Paladin();

	void TakeDamage(int);
	void TakeBurn(int);
	void TakeStun(int);
	bool UseItem(void);

	//ABILITIES
	int Attack(void);
	int Heal(void);
	int Consecrate(bool);
	int Smite(void);
	int Condemn(int);
};
#endif