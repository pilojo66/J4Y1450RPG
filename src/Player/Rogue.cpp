#include "Player/Rogue.h"

Rogue::Rogue(){
	burntimer = 0;
	stuntimer = 0;
	focus = 100;
	steady = false;
}

void Rogue::TakeDamage(int damage){
	damage -= defense;
	if(burntimer > 0){
		damage += BURNDAMAGE;
	}
	if(damage < 0){
		damage = 0;
	}
}

void Rogue::TakeBurn(int burn){
	burntimer = burn;
}

void Rogue::TakeStun(int stun){
	stuntimer = stun;
}

int Rogue::Lunge(){
	int damage = 0;
	damage = rand() % 30 + strength;
	if(rand() % 10 + 1 < 5){
		//stun
	}
	else if(steady){
		if(rand() % 10 + 1 < 6){
			//stun
		}
	}
	return damage;
}

int Rogue::MultiStrike(){}

int Rogue::Steady(){
	steady = true;
}

int Rogue::Execute(){
	int damage = 0;
	if(rand() % 10 + 1 < 4){
		damage = 50;
	}
	else if(steady){
		if(rand() % 10 + 1 < 4){
			damage = 50;
		}
	}
	return damage;
}



