#include "Player/Ranger.h"

Ranger::Ranger(){
	health = 150;
	strength = 17;
	defense = 5;
	burntimer = 0;
	stuntimer = 0;
	smoke = false;
}

void Ranger::TakeDamage(int damage){
	if(smoke){
		if(rand() % 10 + 1 < 8){
			damage = 0;
		}
	}
	damage -= defense;
	if(damage < 0){
		damage = 0;
	}
	if(burntimer > 0){
		damage += BURNDAMAGE;
	}
	damage -= health;
}

void Ranger::TakeBurn(int burn){
	burntimer = burn;
}

void Ranger::TakeStun(int stun){
	stuntimer = stun;
}

int Ranger::ArrowShot(){
	int damage = 0;
	damage = rand() % 30 + strength;
	return damage;
}

int Ranger::Flare(){
	int damage = 0;
	damage = rand() % 25 + 15;
	//burn
	return damage;
}

int Ranger::Smoke(){
	smoke = true;
}

int Ranger::Trap(){
	
}