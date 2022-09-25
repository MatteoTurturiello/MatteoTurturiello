//
// Created by turtu on 18/09/2022.
//

#include "AllListsObs.h"
#include "ShoppingList.h"

void AllListsObs::update() {
    deleteList(*subject);
    AllLists.push_back(*subject);
    viewAllLists();
}

void AllListsObs::attach() {
    subject->subscribe(this);

}

void AllListsObs::detach() {
    subject->unsubscribe(this);
}

void AllListsObs::viewAllLists() const {
    for( auto itr : AllLists)
        itr.view();

}

void AllListsObs::saveList(const ShoppingList& entry) {
    this->AllLists.push_back(entry);
}

void AllListsObs::deleteList(const ShoppingList& erase) {
    auto it = std::find(this->AllLists.begin(), this->AllLists.end(), erase);
    if (it != this->AllLists.end()) {
        this->AllLists.remove(erase);
    }
    else std::cout << "List do not exist" << std::endl;

}

void AllListsObs::attach(ShoppingList* sl) {
    sl->subscribe(this);
    saveList(*sl);

}

void AllListsObs::setSubject(ShoppingList *sl) {
    subject = sl;

}
