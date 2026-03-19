#include "Item.h"

int Item::totalItems = 0;

Item::Item(string name, int value)
: name(name), value(value)
{

}

int Item::getTotalItems(){
    return totalItems;

}
Void Item::incrementTotalItems(){
    totalItems++;
}
string Item::getValue() const{
    return name;

}
int Item::getvalue() const{
    return valuel
}

void Item::display() const{
    cout << "[" << name << "] (Value: " << value << ")" << endl;
}
