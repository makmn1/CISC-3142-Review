//
// Created by makmn on 4/27/2022.
//

#include "Player.h"
#include <iostream>

void Player::gainHealth(int healthIncrement) {
    health = health + healthIncrement;
}

int Player::getHealth() {
    return this->health;
}

void Player::attackPlayer(Player &toAttack) {
    toAttack.health -= this->attack;
}

void Player::printInfo(int health, int attack) {
    printf("Player name is %s", this->getName().c_str());
    printf("Health is %d, attack is %d", health, attack);
}

Player::Player(string name, int health = 100, int attack = 10) : Character(name) {
    this->health = health;
    this->attack = attack;
}

Player::~Player() {

}

