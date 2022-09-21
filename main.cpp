#include <iostream>
#include "ShoppingList.h"
#include "ListObs.h"
#include "AllListsObs.h"

int main() {
    Object o1("Patate", "Alimentare", 7, 0.83);
    ShoppingList list1("mario");
    ListObs Obs(&list1);
    list1.add(o1);
    list1.remove(o1);


    return 0;
}
