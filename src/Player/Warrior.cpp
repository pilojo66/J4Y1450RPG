#include "Player/Warrior.h"

Warrior::Warrior(){
	health = 160;
	strength = 25;
	defense = 12;
	burntimer = 0;
	stuntimer = 0;
	gaurd = false;
}

void Warrior::TakeDamage(int damage){
	damage -= defense;
	if(gaurd){
		damage -= damage * 0.8;
		gaurd = false;
	}
	if(damage < 0){damage = 0;}
	if(burntimer > 0){
		damage += BURNDAMAGE;
	}
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
	damage += rand() % 25 + strength;
	return damage;
}

int Warrior::Thrust(bool stunned){
	int damage = 0;
	if(rand() % 10 + 1 < 4 || stunned){
		damage = 40;
	}
	else{
		damage = rand() % 20 + strength;
	}
	return damage;
}

int Warrior::Stagger(){
	int damage = 0;
	damage = rand() % 15 + 5;
	if(rand() % 2 + 1 == 1){
		//Stun
	}
}

void Warrior::Gaurd(){
	gaurd = true;
}