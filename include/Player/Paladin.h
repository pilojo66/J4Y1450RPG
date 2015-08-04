#ifndef PALADIN_H
#define PALADIN_H
#include "Player.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

class Paladin: public Player{
	int mana;
	bool healthBack;
public:
	Paladin();

	void TakeDamage(int);
	void TakeBurn(int);
	void TakeStun(int);
	bool UseItem(void);

	//ABILITIES
	int Heal(void);
	int Consecrate(void);
	int Smite(void);
	int Condemn(void);
};
#endif