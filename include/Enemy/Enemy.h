#ifndef ENEMY_H
#define ENEMY_H
#include<string.h>
#include<string>

const int BURNDAMAGE = 12;

class Enemy{
protected:
	int *inventory;
	int health;
	int strength;
	int defense;
	int burntimer;
	int stuntimer;
	std::string Name;
public:
	virtual int Attack(void) = 0;
	virtual void TakeDamage(int) = 0;
	virtual void TakeBurn(int) = 0;
	virtual void TakeStun(int) = 0;
	virtual void UseItem(void) = 0;
};

#endif