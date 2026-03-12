#include <iostream>
#include "Player.h"

using namespace std;

int main(){

    Player hero;
    Player enemy("Shaytan", 120, 15);

    hero.displayStatus();
    enemy.displayStatus();

    cout << endl;

    hero.takeDamage(25);
    hero.displayStatus();

    cout << endl;

    enemy.takeDamage(150);
    enemy.displayStatus();

    return 0;
}