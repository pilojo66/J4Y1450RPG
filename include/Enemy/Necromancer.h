#ifndef NECROMANCER_H
#define NECROMANCER_H
#include "Enemy.h"

class Necromancer: public Enemy{
	int mana;
public:
	void RaisePet(void);
	int Curse(void);
	int Swarm(void);
};


#endif