//
// Created by turtu on 18/09/2022.
//


#include "ShoppingList.h"
void ShoppingList::view() {
    std::cout << "List name: " <<std::endl << name << std::endl;
    std::cout << "object | category | quantity | price" << std::endl;
    if(shoppinglist.begin() != shoppinglist.end())
        for(auto object : shoppinglist) {
            std::cout << object.getName() << " ";
            std::cout << object.getCategory()<< " ";
            std::cout << object.getQuantity() << " ";
            std::cout << object.getPrice() << " " << std::endl;
        }
}

void ShoppingList::add(Object item) {
    this->shoppinglist.push_back(item);
    notify();
}

void ShoppingList::remove(Object item) {
    auto it = std::find(this->shoppinglist.begin(), this->shoppinglist.end(), item);
    if (it != this->shoppinglist.end())
        this->shoppinglist.remove(item);
    else std::cout << "Item not found in the list" << std::endl;
    notify();

}

void ShoppingList::subscribe(Observer *o) {
    observers.push_back(o);

}

void ShoppingList::unsubscribe(Observer *o) {
    observers.remove(o);

}

void ShoppingList::notify() {
    for(auto observer : observers)
        observer->update();

}


bool ShoppingList::operator==(const ShoppingList &right) {
    bool result = false;
    if(name == right.name && category == right.category) result = true;
    /*

     */
    return result;
}

ShoppingList ShoppingList::operator=(const ShoppingList &right) {
    ShoppingList newlist;
    newlist.name = right.name;
    newlist.category = right.category;
    for(auto it : right.shoppinglist)
        newlist.shoppinglist.push_back(it);
    return newlist;
}



