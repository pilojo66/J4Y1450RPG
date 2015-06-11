#ifndef BARBARIAN_H
#define BARBARIAN_H
#include "Enemy.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

class Barbarian: public Enemy{
	int rage;
	int cryTimer;
	bool blocking;
public:
	Barbarian();

	void TakeDamage(int);
	void TakeBurn(int);
	void TakeStun(int);
	void UseItem(void);

	//ABILITIES
	int Attack(void);
	int ShieldSlam(void);
	int Charge(void);
	void Block(void);
	void BattleCry(void);
};

#endif