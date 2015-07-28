#include "Player/Mage.h"

Mage::Mage(){
	burntimer = 0;
	stuntimer = 0;
	ice = 0;
	iceshield = false;
}

void Mage::TakeDamage(int damage){
	if(burntimer > 0){
		damage += rand() % BURNDAMAGE + 1;
	}
	if(iceshield){
		ice++;
		defense += 15;
	}
	damage -= defense;
	if(iceshield){
		defense -= 15;
	}
	if(rand() % 3 + 1 <= ice){
		iceshield = false;
		ice = 0;
	}
	if(damage < 0){damage = 0;}
	health -= damage;
}

void Mage::TakeBurn(int burn){
	burntimer = burn;
}

void Mage::TakeStun(int stun){
	stuntimer = stun;
}

int Mage::Fireball(){
	int damage = 0;
	damage += rand() % 40 + strength;
	//burn
	return damage;
}

int Mage::IceShield(){
	iceshield = true;
}