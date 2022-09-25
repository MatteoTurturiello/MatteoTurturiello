//
// Created by turtu on 18/09/2022.
//

#include "ListObs.h"
void ListObs::update() {
    objList.name = subject->name;
    objList.category = subject->category;
    objList.shoppinglist = subject->shoppinglist;
    view();

}

void ListObs::attach() {
    subject->subscribe(this);

}

void ListObs::detach() {
    subject->unsubscribe(this);

}
void ListObs::view() const {
    std::cout << "List name: " <<std::endl << objList.name << std::endl;
    std::cout << "object | category | quantity | price" << std::endl;
    if(objList.shoppinglist.begin() != objList.shoppinglist.end())
        for(auto object : objList.shoppinglist) {
            std::cout << object.getName() << " ";
            std::cout << object.getCategory()<< " ";
            std::cout << object.getQuantity() << " ";
            std::cout << object.getPrice() << " " << std::endl;
        }
}