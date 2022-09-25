

#include "../ShoppingList.h"
#include "include/gtest/gtest.h"

TEST(ShoppingList, DefaultConstructor) {
    ShoppingList sl;
    ASSERT_EQ("defaultlist", sl.getName());
}

TEST(ShoppingList, AddandRemove) {
    ShoppingList sl;
    Object o("Patate", "Alimentare", 7, 0.83);
    o.set_isBought(true);
    sl.add(o);
    ASSERT_TRUE(sl.shoppinglist.begin() != sl.shoppinglist.end());
    sl.remove(o);
    o.set_isBought(false);
    ASSERT_TRUE(sl.shoppinglist.begin() == sl.shoppinglist.end());

}


