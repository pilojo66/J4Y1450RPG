#ifndef FIGHTER_H
#define FIGHTER_H
#include "Enemy.h"

class Fighter: public Enemy{
	int energy;
	bool dodging;

public:
	int Jab(void);
	int Uppercut(void);
	void Dodge(void);
};

#endif