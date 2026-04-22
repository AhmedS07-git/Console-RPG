#include "Player.h"
#include <iostream>

using namespace std;
Player::Player(){
    name = "Hero";
    health = 100;
    maxHealth = 100;
    attackPower = 10;

    inventory(10),
    x(0), y(0)

}
Player::Player(std::string name, int health, int attackPower){
    this->name = name;
    this->health = health;
    this->maxHealth = health;
    this->attackPower = attackPower;

    inventory(10),

    x(0), y(0)
    
}
Player::~Player() {
    cout << "The object for player " << name << " has been destroyed." << endl;
}
void Player::takeDamage(int damage){
    health -= damage;
    if (health < 0){
        health = 0;
    }
    if (health == 0){
        cout << name << " falls to the ground, defeated." << endl;
    }
}
string Player::getName() const {
    return name;
}
int Player::getHealth() const {
    return health;
}
int Player::getMaxHealth() const {
    return maxHealth;
}
int Player::getAttackPower() const {
    return attackPower;
}
void Player::displayStatus() const {
    cout << name << " - HP: " << health << "/" << maxHealth << endl;
}

void Player::addItem(const Item& item) {
    inventory.addItem(item);
}
void Player::showInventory() const {
    inventory.display();
}
int Player::getX() const {
    return x;
}
int Player::getY() const {
    return y;
}
void Player::setX(int x) {
    this->x = x;
}
void Player::setY(int Y) {
    this->y = y;
}
