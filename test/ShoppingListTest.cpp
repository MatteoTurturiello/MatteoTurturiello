

#include "../ShoppingList.h"
#include "include/gtest/gtest.h"

TEST(ShoppingList, DefaultConstructor) {
    ShoppingList sl;
    ASSERT_EQ("defaultlist", sl.getName());
}

TEST(ShoppingList, AddandRemove) {
    ShoppingList sl;
    Object o1("Patate", "Alimentare", 7, 0.83);
    Object o2("Pere", "Alimentare", 4, 0.53);
    sl.add(o1);
    ASSERT_EQ(sl.getObjects(), 1);
    sl.add(o1);
    ASSERT_EQ(sl.getObjects(), 1);
    sl.add(o2);
    ASSERT_EQ(sl.getObjects(), 2);
    sl.remove(o1);
    ASSERT_EQ(sl.getObjects(), 1);

}

TEST(ShoppingList, setObjectsBought) {
    ShoppingList sl;
    Object o1("Patate", "Alimentare", 7, 0.83);
    sl.add(o1);
    o1.set_isBought(true);
    sl.setObjectsBought(o1);
    ASSERT_TRUE(sl.getObjectsBought(o1));
}
