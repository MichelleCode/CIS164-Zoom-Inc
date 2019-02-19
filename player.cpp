// 1. For the player shield I figure one shield can be picked
// 	  up with a low chance per room, and one shield blocks one attack.
//    Maybe we ask if the player wants to use a shield each attack?
// 2. Should we ask the user for a name?

#include <string>
#include <iostream>
#include "player.h"

using namespace std;

player::player(std::string name){
	setName(name);
	setHealth(20);
	setShield(0);
	setScore(0);
}

void player::setName(std::string name){ // Possibly remove if we choose to exclude a name
	playerName = name;
}

void player::setHealth(int health){
	playerHealth = health;
}

void player::setShield(int shield){
	playerShield = shield;
}

void player::setScore(int score){
	playerScore = score;
}

void player::setAttackDamage(){ 

}

void player::setDamageTaken(int damage){
	totalDamageTaken += damage; // Store monster damage in a total damage taken variable for fight
	damageTaken = damage; // Store monster damage in a damage taken variable for one hit
	playerHealth -= damage; // Decrease player health by monster damage taken
}

void player::attack(){

}

std::string player::getName(){
	return playerName;
}

int player::getHealth(){
	return playerHealth;
}

int player::getShield(){
	return playerShield;
}

int player::getScore(){
	return playerScore;
}

int player::getAttackDamage(){
	return playerDamage;
}

int player::getDamageTaken(){ // Get damage taken from most recent single monster hit taken
	return damageTaken;
}

int player::getTotalDamageTaken(){ // Get damage taken from 
	return totalDamageTaken;
}

void player::die(){
	
}


int main(){
	// This is a test
	player one("Michelle");
	cout << one.getName() << endl;
	cout << "Health: " << one.getHealth() << ", Shield: " << one.getShield() << ", Score: " << one.getScore() << endl;
	
	if(one.getHealth() == 0){ 
		one.die();
	}
	
	return 0;
}
