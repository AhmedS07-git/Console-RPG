#ifndef INVENTORY_H
#define INVENTORY_H

#include "Item.h"

class Inventory {
    private:
    Item* items;
    int capacity;
    int ItemCount;

    public:
    Inventory(int capcaity);
    ~Inventory();

    bool addItem(const Item& item);
    void display() const;
};
#endif