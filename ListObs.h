//
// Created by turtu on 18/09/2022.
//

#ifndef MATTEOTURTURIELLO_LISTOBS_H
#define MATTEOTURTURIELLO_LISTOBS_H


#include "Observer.h"
#include "ShoppingList.h"

class ListObs : public Observer{
public:
    ListObs(ShoppingList* sl) : subject(sl){
        attach();
    }
    ~ListObs() {
        detach();
    }
    ShoppingList objList;
    virtual void update() override;
    virtual void attach() override;
    virtual void detach() override;

    void view() const;
private:
    ShoppingList* subject;
};



#endif //MATTEOTURTURIELLO_LISTOBS_H
