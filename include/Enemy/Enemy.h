#ifndef ENEMY_H
#define ENEMY_H
#include<string.h>
#include<string>


class Enemy{
protected:
	enum items{Potion = 1, EnergyPot, Antidote, Aloe};
	int *inventory;
	int health;
	int strength;
	int defense;
	int burntimer;
	int stuntimer;
	int poisontimer;
	std::string Name;
public:
	virtual int Attack(void) = 0;
	virtual void TakeDamage(int) = 0;
	virtual void TakeBurn(int) = 0;
	virtual void TakeStun(int) = 0;
	virtual void UseItem(void) = 0;
};

#endif