//
// Created by turtu on 18/09/2022.
//

#ifndef MATTEOTURTURIELLO_ALLLISTSOBS_H
#define MATTEOTURTURIELLO_ALLLISTSOBS_H


#include <memory>
#include "ShoppingList.h"
#include "Observer.h"

class AllListsObs : public Observer {
public:
    AllListsObs(){
    }
    ~AllListsObs() {
        for(auto it : AllLists)
        detach();
    }
    ShoppingList objList;
    std::list<ShoppingList> AllLists;

    void setSubject(ShoppingList* sl) ;
    void saveList(ShoppingList entry);
    void deleteList(ShoppingList erase);

    virtual void update() override;
    virtual void attach() override;
    virtual void attach(ShoppingList* sl);
    virtual void detach() override;

    void viewAllLists();


private:
    ShoppingList *subject;
};

#endif //MATTEOTURTURIELLO_ALLLISTSOBS_H
