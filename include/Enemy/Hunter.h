#ifndef HUNTER_H
#define HUNTER_H
#include "Enemy.h"

class Hunter: public Enemy{
	int focus;

public:
	int PoisonShot(void);
	

};


#endif