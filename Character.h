//
// Created by makmn on 4/27/2022.
//

#ifndef CISC_3142_TOPIC_CODE_EXAMPLES_CHARACTER_H
#define CISC_3142_TOPIC_CODE_EXAMPLES_CHARACTER_H

#include "string"

using namespace std;

class Character {
    public:
        explicit Character(string name);
        void changeName(string newName);
        string getName();
        void printInfo();
    protected:
        bool invincible = false;
        int health;
        int attack;
    private:
        string name;
};


#endif //CISC_3142_TOPIC_CODE_EXAMPLES_CHARACTER_H
