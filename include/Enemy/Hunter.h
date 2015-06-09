#ifndef HUNTER_H
#define HUNTER_H
#include "Enemy.h"

class Hunter: public Enemy{
	int focus;
	bool camouflaged;
public:
	int PoisonShot(void);
	int PowerShot(void);
	void Camouflage(void);

};


#endif