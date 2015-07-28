#include "Player/Deprived.h"

Deprived::Deprived(){
	health = 175;
	strength = 20;
	defense = 5;
	burntimer = 0;
	stuntimer = 0;
	evade = false;
	partial = false;
}

void Deprived::TakeDamage(int damage){
	if(evade){
		damage = 0;
		evade = false;
	}
	if(partial){
		damage -= damage * 0.8;
		partial = false;
	}
	damage -= defense;
	if(burntimer > 0){
		damage += BURNDAMAGE;
	}
	if(damage < 0){
		damage = 0;
	}
	health -= damage;
}

void Deprived::TakeBurn(int burn){
	burntimer = 0;
}

void Deprived::TakeStun(int stun){
	stuntimer = 0;
}

int Deprived::Club(){
	int damage = 0;
	damage = rand() % 30 + strength;
	return damage;
}

int Deprived::Kick(){
	int damage = 0;
	damage = rand() % 25 + strength;
	if(rand() % 20 + 1 < 8){
		//stun
	}
	return damage;
}

int Deprived::Roll(){
	if(rand() % 2 + 1 == 1){
		evade = true;
	}
	else{
		partial = true;
	}
}