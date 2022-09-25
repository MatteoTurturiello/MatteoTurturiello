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
    ShoppingList( const std::string& name = "defaultlist", const std::string& category = "All") : name(name), category(category){
    }
    ~ShoppingList() {}
    std::list<Object> shoppinglist;
    std::string category;
    std::string name;

    bool operator==(const ShoppingList& right);
    ShoppingList operator=(const ShoppingList& right);

    void view() const;
    void setName(const std::string& name) {
        this->name = name;
    }

    void setCategory(const std::string& category) {
        this->category = category;
    }
    std::string getName() const{
        return this->name;
    }
    std::string getCategory() const{
        return this->category;
    }


    void add(const Object& item);
    void remove(const Object& item);

    virtual void subscribe(Observer* o) override;
    virtual void unsubscribe(Observer* o) override;
    virtual void notify() override;

private:
    std::list<Observer*> observers;

};


#endif //MATTEOTURTURIELLO_SHOPPINGLIST_H
