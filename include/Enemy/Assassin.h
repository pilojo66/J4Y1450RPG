#ifndef ASSASSIN_H
#define ASSASSIN_H
#include "Enemy.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

class Assassin: public Enemy{
	int energy;
	bool vanished;
	bool poisonedBlades;
public:
	Assassin();

	
	void TakeDamage(int);
	void TakeBurn(int);
	void TakeStun(int);
	void UseItem(void);

	//ABILITIES
	int Attack(void);
	int Backstab(bool);
	void Vanish(void);
	void Poison(void);

};

#endif