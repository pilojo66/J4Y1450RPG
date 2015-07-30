#ifndef ROGUE_H
#define ROGUE_H
#include "Player.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

class Rogue: public Player{
	bool steady;
	int focus;
public:
	Rogue();

	void TakeDamage(int);
	void TakeBurn(int);
	void TakeStun(int);
	bool UseItem(void);

	//ABILITIES
	int Lunge(void);
	int MultiStrike(void);
	int Steady(void);
	int Execute(void);

};
#endif