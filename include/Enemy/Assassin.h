#ifndef ASSASSIN_H
#define ASSASSIN_H
#include "Enemy.h"


class Assassin: public Enemy{
	int energy;
	bool vanished;
	bool poisonedBlades;
public:
	int Backstab(bool);
	int Vanish(void);
	void Poison(void);

};

#endif