#include "Inventory,h"
#include <iostream>
using namespace std;

Inventory::Inventory(int capacity)
: Items(new Item[capacity]), capacity(capacity),itemCount(0)
{

}
Inventory::~Inventory(){
    delete[] items;
}
bool Inventory::addItem(const Item& item){
    if (itemCount >= capacity){
        return false;
    }
    items[itemCount] = item;
    itemCount++;
    Item::incrementTotalItems();
    cout << "An Item was added: " << item.getName() << endl;
    return true;
}
voif Inventory::display() const{
    cout << "inventory (" << itemCount << "/" << capacity <<"):" << endl;
    for (int i = 0; i < itemCount; i++) {
        items[i].display();
    }
}