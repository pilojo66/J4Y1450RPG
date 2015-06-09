#include "Enemy/Assassin.h"

Assassin::Assassin(){
	energy = 100;
	vanished = false;
	poisonedBlades = false;
	health = 150;
	strength = 13;
	defense = 9;
	burntimer = 0;
	stuntimer = 0;
	Name = "Assassin";
}

void Assassin::TakeDamage(int damage){
	if(burntimer > 0){
		damage += rand() % 10 + 1;
	}
	damage -= defense;
	if(damage < 0) damage = 0;
	health -= damage;
}

void Assassin::TakeBurn(int burn){
	burntimer = burn;
}

void Assassin::TakeStun(int stun){
	stuntimer = stun;
}

void Assassin::UseItem(void){
	//TO BE FILLED IN LATER
}

int Assassin::Attack(void){
	int damage = 0;
	damage = rand() % 20 + strength;
	return damage;
}

int Assassin::Backstab(bool firstTurn){
	int damage = 0;
	if(firstTurn){
		damage = rand() % 40 + strength;
	}
	else{
		printf("It is not the first turn, you cannot backstab!\n");
	}
	return damage;
}

void Assassin::Vanish(void){
	vanished = true;
}

void Assassin::Poison(void){
	poisonedBlades = true;
}