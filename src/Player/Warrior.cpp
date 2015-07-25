#include "Player/Warrior.h"

Warrior::Warrior(){}

void Warrior::TakeDamage(int damage){
if(burntimer > 0){
		damage += rand() % BURNDAMAGE + 1;
	}
	damage -= defense;
	if(damage < 0) damage = 0;
	health -= damage;
}

void Warrior::TakeBurn(int burn){
	burntimer = burn;
}

void Warrior::TakeStun(int stun){
	stuntimer = stun;
}

int Warrior::Slash(){
	int damage = 0;
	damage += rand() % 30 + strength;
	return damage;
}

int Warrior::Thrust(bool stunned){
	int damage = 0;
	if(rand() % 10 + 1 < 4 || stunned){
		damage = 40;
	}
	else{
		damage = rand() % 25 + strength;
	}
	return damage;
}

int Warrior::Stagger(){
	int damage = 0;
	damage = rand() % 15 + 5;
	if(rand() % 2 + 1 == 1){
		
	}
}