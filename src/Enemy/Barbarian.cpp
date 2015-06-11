#include "Enemy/Barbarian.h"

void Barbarian::TakeDamage(int damage){
	if(burntimer > 0){
		damage += rand()% BURNDAMAGE + 1;
	}
	damage -= defense;
	if(blocking) damage = floor(damage/9);
	if(damage < 0) damage = 0;
	health -= damage;
	printf("You have taken %d damage!", damage);
}

void Barbarian::TakeBurn(int burn){
	burntimer = burn;
}

void Barbarian::TakeStun(int stun){
	stuntimer = stun;
}

void UseItem(void){

}