//
// Created by makmn on 4/27/2022.
//

#ifndef CISC_3142_TOPIC_CODE_EXAMPLES_PLAYER_H
#define CISC_3142_TOPIC_CODE_EXAMPLES_PLAYER_H
#include "Character.h"

class Player: public Character {
    public:
        explicit Player(string name, int health, int attack);
        void gainHealth(int healthIncrement);
        int getHealth();
        void attackPlayer(Player &toAttack);
        void printInfo(int health, int attack);
        ~Player();

};


#endif //CISC_3142_TOPIC_CODE_EXAMPLES_PLAYER_H
