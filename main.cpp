#include <iostream>
#include "ShoppingList.h"
#include "ListObs.h"
#include "AllListsObs.h"

int main() {
    Object o1("Patate", "Alimentare", 7, 0.83);
    Object o2("Pere", "Alimentare", 4, 0.53);
    ShoppingList list1("Mario's list");

    AllListsObs Obs;
    Obs.attach(&list1);
    Obs.setSubject(&list1);
    list1.add(o1);
    o1.set_isBought(true);
    list1.setObjectsBought(o1);
    list1.add(o1);
    list1.add(o2);

    list1.remove(o1);


    return 0;
}
