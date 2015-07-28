#ifndef MAGE_H
#define MAGE_H
#include "Player.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

class Mage: public Player{
	int mana;
	bool iceshield;
	int ice;
public:
	Mage();

	void TakeDamage(int);
	void TakeBurn(int);
	void TakeStun(int);
	bool UseItem(void);

	//ABILITIES
	int Fireball(void);
	int IceShield(void);
	int ManaBurst(void);
	int Conversion(void);
};
#endif