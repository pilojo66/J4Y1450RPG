#include "Enemy/Assassin.h"

Assassin::Assassin(){
	int item;
	int *invSize = 0;
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
	if (vanished){
		damage = 0;
		vanished = false;
	}
	if(damage < 0) damage = 0;
	health -= damage;
}

void Assassin::TakeBurn(int burn){
	burntimer = burn;
}

void Assassin::TakeStun(int stun){
	stuntimer = stun;
}

bool Assassin::UseItem(void){ 
	int choice = 0;
	if (health < 50){
		choice = rand() % 100 + 1;
		if (choice < 75){
			for (int i = 0; i < sizeof(inventory) / sizeof(inventory[0]); i++){
				if (inventory[i] == items::Potion){
					choice = items::Potion;
					inventory[i] = 0;
					break;
				}
			}
			if (choice == 0){
				for (int i = 0; i < sizeof(inventory) / sizeof(inventory[0]); i++){
					if (inventory[i] == items::EnergyPot){
						choice = items::EnergyPot;
						inventory[i] = 0;
						break;
					}
				}
			}
			if (choice == 0){
				printf("Could not use an item!\n");
				return false;
			}
		}
		else {
			for (int i = 0; i < sizeof(inventory) / sizeof(inventory[0]); i++){
				if (inventory[i] == items::EnergyPot){
					choice = items::EnergyPot;
					inventory[i] = 0;
					break;
				}
			}
			if (choice == 0){
				for (int i = 0; i < sizeof(inventory) / sizeof(inventory[0]); i++){
					if (inventory[i] == items::Potion){
						choice = items::Potion;
						inventory[i] = 0;
						break;
					}
				}
			}
		}
	}
	else if (burntimer > 0){
		choice = rand() % 100 + 1;
		if (choice < 60){
			for (int i = 0; i < sizeof(inventory) / sizeof(inventory[0]); i++){
				if (inventory[i] == items::Aloe){
					choice = items::Aloe;
					inventory[i] = 0;
					break;
				}
			}
			if (choice == 0){
				for (int i = 0; i < sizeof(inventory) / sizeof(inventory[0]); i++){
					if (inventory[i] == items::Potion){
						choice = items::Potion;
						inventory[i] = 0;
						break;
					}
					else if (inventory[i] == items::EnergyPot){
						choice = items::EnergyPot;
						inventory[i] = 0;
						break;
					}
				}
			}
			if (choice == 0){
				printf("Could not use an item!\n");
				return false;
			}
			
		}
		else if (choice > 60 && choice < 90){
			for (int i = 0; i < sizeof(inventory) / sizeof(inventory[0]); i++){
				if (inventory[i] == items::Potion){
					choice = items::Potion;
					inventory[i] = 0;
					break;
				}
			}
			if (choice == 0){
				for (int i = 0; i < sizeof(inventory) / sizeof(inventory[0]); i++){
					if (inventory[i] == items::EnergyPot){
						choice = items::EnergyPot;
						inventory[i] = 0;
						break;
					}
				}
			}
			if (choice == 0){
				printf("Could not use an item!\n");
				return false;
			}
		}
		else {
			for (int i = 0; i < sizeof(inventory) / sizeof(inventory[0]); i++){
				if (inventory[i] == items::EnergyPot){
					choice = items::EnergyPot;
					inventory[i] = 0;
					break;
				}
			}
			if (choice == 0){
				for (int i = 0; i < sizeof(inventory) / sizeof(inventory[0]); i++){
					if (inventory[i] == items::Potion){
						choice = items::Potion;
						inventory[i] = 0;
						break;
					}
				}
			}
			if (choice == 0){
				printf("Could not use an item!\n");
				return false;
			}
		}
	}
	switch(choice){
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
	return true;
}

int Assassin::Attack(void){
	int damage = 0;
	if (poisonedBlades) {
		damage += rand() % 10;
		poisonedBlades = false;
	}
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