#ifndef WARLOCK_H
#define WARLOCK_H
#include "Enemy.h"


class Warlock: public Enemy{
	int mana;
	bool inShadows;

public:
	int ShadowBolt(void);
	void IntoShadows(void);
	int Immolate(void);
};

#endif