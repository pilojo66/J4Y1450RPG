#ifndef BARBARIAN_H
#define BARBARIAN_H
#include "Enemy.h"


class Barbarian: public Enemy{
	int rage;
	bool blocking;
public:
	int ShieldSlam(void);
	int Charge(void);
	void Block(void);
	
};

#endif