#ifndef PLAYER_H
#define PLAYER_H

#include <string>

#include "Inventory.h"

class Player { 
    private:
    std::string name;
    int health;
    int maxHealth;
    int attackPower;

    Inventory inventory;

    int x;
    int y;

public:
Player();
Player(std::string name, int health, int attackPower);

~Player();

void takeDamage(int damage);

std::string getName() const;
int getHealth() const;
int getMaxHealth() const;
int getAttackPower() const;

void displayStatus() const;

void addItem(const Item& item);
void showInventory() const;

int getX() const;
int getY() const;
void setX(int x);
void setY(int y);

};

#endif
