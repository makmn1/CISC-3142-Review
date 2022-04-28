#include <iostream>
#include "Character.cpp"
#include "Player.cpp"

using namespace std;

int main() {
    Character character1("John");
    printf("Player 1 name is %s", character1.getName().c_str());
    character1.changeName("Jane");
    printf("\nPlayer 1 name is now %s", character1.getName().c_str());

    Player player1("Doe");
    Player player2("Doe's Enemy", 100, 55);
    player2.attackPlayer(player1);
    printf("\nPlayer 1's health is at %d", player1.getHealth());
    return 0;

}
