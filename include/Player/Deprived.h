#ifndef DEPRIVED_H
#define DEPRIVED_H
#include "Player.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

class Deprived: public Player{
	
public:
	Deprived();

	void TakeDamage(int);
	void TakeBurn(int);
	void TakeStun(int);
	bool UseItem(void);

	//ABILITIES
	int Attack(void);
	int Club(void);
	int Kick(void);
	int Roll(void);

};
#endif