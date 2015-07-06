#ifndef ROGUE_H
#define ROGUE_H
#include "Player.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

class Rogue: public Player{
	
public:
	Rogue();

	void TakeDamage(int);
	void TakeBurn(int);
	void TakeStun(int);
	bool UseItem(void);

	//ABILITIES
	int Attack(void);
	int Lunge(void);
	int MultiStrike(void);
	int Steady(void);
	int Execute(void);

};
#endif