#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include "Inventory.h"
using namespace std;

class Player {
    private:
    string name;
    int health;
    Inventory inventory;

    public:
    Player(string name, int health);
    void addItem(const Item& item);
    void showInverntory() const;

    void display() const;

};
#endif