#ifndef RANGER_H
#define RANGER_H
#include "Player.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

class Ranger: public Player{
	
public:
	Ranger();

	void TakeDamage(int);
	void TakeBurn(int);
	void TakeStun(int);
	bool UseItem(void);

	//ABILITIES
	int Attack(void);
	int ArrowShot(void);
	int Smoke(void);
	int Flare(void);
	int Trap(int);
};
#endif