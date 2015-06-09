#ifndef BARBARIAN_H
#define BARBARIAN_H
#include "Enemy.h"


class Barbarian: public Enemy{
	int rage;
	int cryTimer;
	bool blocking;
public:
	int ShieldSlam(void);
	int Charge(void);
	void Block(void);
	void BattleCry(void);
};

#endif