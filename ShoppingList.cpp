//
// Created by turtu on 18/09/2022.
//


#include "ShoppingList.h"
void ShoppingList::view() const{
    std::cout << "List name: " <<std::endl << name << std::endl;
    countObjectsBought();
    std::cout << "object | category | quantity | price | is bought" << std::endl;
        for(auto object : shoppinglist) {
            std::cout << object.getName() << " ";
            std::cout << object.getCategory()<< " ";
            std::cout << object.getQuantity() << " ";
            std::cout << object.getPrice() << " ";
            if(object.get_isBought())
                std::cout << " Yes " << std::endl;
            else std::cout << " No " << std::endl;
        }
}

void ShoppingList::add(const Object& item) {
    auto it = std::find(this->shoppinglist.begin(), this->shoppinglist.end(), item);
    if (it == this->shoppinglist.end())
        this->shoppinglist.push_back(item);
    else {
        it->setQuantity(item.getQuantity());
        it->setPrice(item.getPrice());
    }
    notify();
}

void ShoppingList::remove(const Object& item) {
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
    if(name == right.name) result = true;
    /*auto it = shoppinglist.begin();
    auto itr = right.shoppinglist.begin();
    while(result && it != shoppinglist.end() && itr != right.shoppinglist.end()) {
        if( (it == itr) != true) result = false;
        it++, itr++;
    }*/
    return result;
}


void ShoppingList::countObjectsBought() const {
    int n=0, b = 0;
    for(auto it : shoppinglist) {
        n++;
        if( it.get_isBought()) b++;
    }
    std::cout << "Oggetti nella lista:" << n << std::endl;
    std::cout << "Oggetti nella lista da comprare:" << n - b << std::endl;
}

void ShoppingList::setObjectsBought(const Object& o) {
    for(auto it : shoppinglist){
        if( it == o) {
            shoppinglist.remove(it);
            shoppinglist.push_back(o);
        }
    }
    notify();
}

bool ShoppingList::getObjectsBought(const Object &o) const {
    bool result = false;
    for(auto it : shoppinglist) {
        if (it == o) result = it.get_isBought();
    }
    return result;
}


