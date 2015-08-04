#include "Player/Paladin.h"

Paladin::Paladin(){
	mana = 100;
	health = 140;
	strength = 20;
	defense = 7;
	burntimer = 0;
	stuntimer = 0;
	healthBack = false;
}

void Paladin::TakeDamage(int damage){	
	damage -= defense;
	if(damage < 0){
		damage = 0;
	}
	if(burntimer > 0){
		damage += BURNDAMAGE;
	}
}

void Paladin::TakeBurn(int burn){
	burntimer = burn;
}

void Paladin::TakeStun(int stun){
	stuntimer = stun;
}

int Paladin::Heal(){
	health += 50;
	if(health > 140){
		health = 140;
	}
	mana -= 60;
}

int Paladin::Consecrate(){
	int damage = 0;
	damage = rand() % strength + 15;
	if(healthBack){
		health += damage / 2;
	}
	healthBack = true;
}

int Paladin::Smite(){
	int damage = 0;
	damage = rand() % 30 + strength;
	mana += 25;
	if(mana > 100){
		mana = 100;
	}
	if(healthBack){
		health += damage / 2;
	}
	healthBack = false;
	return damage;
}

int Paladin::Condemn(){
	//burn
}