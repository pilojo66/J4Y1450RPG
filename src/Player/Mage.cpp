#include "Player/Mage.h"

Mage::Mage(){
	mana = 100;
	health = 150;
	strength = 20;
	defense = 6;
	burntimer = 0;
	stuntimer = 0;
	ice = 0;
	iceshield = false;
}

void Mage::TakeDamage(int damage){
	if(iceshield){
		ice++;
		defense += 10;
	}
	damage -= defense;
	if(iceshield){
		defense -= 10;
	}
	if(burntimer > 0){
		damage += BURNDAMAGE;
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
	damage = rand() % 25 + strength;
	//burn
	mana -= 30;
	return damage;
}

int Mage::IceShield(){
	iceshield = true;
	burntimer = 0;
	mana -= 20;
}

int Mage::ManaBurst(){
	int damage = 0;
	damage = mana / 2;
	mana = 0;
	return damage;
}

int Mage::Conversion(){
	health -= 5;
	mana += 100;
	if(mana > 100){mana = 100;}
}