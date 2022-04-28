//
// Created by makmn on 4/27/2022.
//

#include "Character.h"

Character::Character(string name) {
    this->name = name;
}

void Character::changeName(string newName) {
    this->name = newName;
}

string Character::getName() {
    return this->name;
}

void Character::printInfo() {
    printf("Character name is %s", this->name.c_str());
}