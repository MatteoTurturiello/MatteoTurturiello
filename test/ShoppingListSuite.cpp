#include "gtest/gtest.h"

#include "../ShoppingList.h"


class ShoppingListSuite : public ::testing::Test {

protected:
    virtual void SetUp() {
        sl.setName("defaultlist");


    }

    ShoppingList sl;
};


TEST_F(ShoppingListSuite, TestShoppingList) {
    Object o1("Patate", "Alimentare", 7, 0.83);
    Object o2("Pere", "Alimentare", 4, 0.53);
    sl.add(o1);
    ASSERT_EQ(sl.getObjects(), 1);
    o1.set_isBought(true);
    sl.setObjectsBought(o1);
    ASSERT_TRUE(sl.getObjectsBought(o1));
    sl.remove(o1);
    ASSERT_EQ(sl.getObjects(), 0);
}

