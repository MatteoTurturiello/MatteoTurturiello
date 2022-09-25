//
// Created by turtu on 18/09/2022.
//

#ifndef MATTEOTURTURIELLO_SHOPPINGLIST_H
#define MATTEOTURTURIELLO_SHOPPINGLIST_H


#include <iostream>
#include <algorithm>
#include "Observer.h"
#include "Object.h"

class ShoppingList : public Subject{
public:
    ShoppingList( const std::string& name = "defaultlist") : name(name) {
    }
    ~ShoppingList() {}

    bool operator==(const ShoppingList& right);
    ShoppingList operator=(const ShoppingList& right);

    void view() const;
    void setName(const std::string& name) {
        this->name = name;
    }

    std::string getName() const{
        return this->name;
    }


    void add(const Object& item);
    void remove(const Object& item);
    void countObjectsBought() const;
    void setObjectsBought(const Object& o);
    bool getObjectsBought(const Object& o) const;
    int getObjects() const {
        int n=0;
        for(auto it : shoppinglist)
            n++;
        return n;
    }

    virtual void subscribe(Observer* o) override;
    virtual void unsubscribe(Observer* o) override;
    virtual void notify() override;

private:
    std::list<Observer*> observers;
    std::string name;
    std::list<Object> shoppinglist;

};


#endif //MATTEOTURTURIELLO_SHOPPINGLIST_H
