#ifndef PLAYER_H
#define PLAYER_H
#include<string.h>
#include<string>

const int BURNDAMAGE = rand() % 8 + 4;

class Player{
protected:
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
	virtual bool UseItem(void) = 0;
};

#endif