#include "Enemy/Assassin.h"

Assassin::Assassin(){
	int item;
	int *invSize;
	*invSize = rand() % 6 + 1;
	inventory = new int[*invSize];
	for(int i = 0; i < *invSize; i++){
		item = rand() % 10 + 1;
		if(item < 6){
			inventory[i] = items::Potion;
		}
		else if(item > 6 && item < 8){
			inventory[i] = items::EnergyPot;
		}
		else{
			inventory[i] = items::Aloe;
		}
	}
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
		damage += rand() % BURNDAMAGE + 1;
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

void Assassin::UseItem(void){ // NOT DONE
	int choice = 0;
	switch(inventory[choice]){
		case items::Potion:
			health += rand() % 30 + 1;
			break;
		case items::EnergyPot:
			energy += rand()% 20 + 1;
			break;
		case items::Aloe:
			burntimer = 0;
			break;
		default:
			printf("Something went wrong!\n");
	}
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