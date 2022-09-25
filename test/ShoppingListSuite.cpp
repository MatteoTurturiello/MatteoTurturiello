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
Object o("Patate", "Alimentare", 7, 0.83);
o.set_isBought(true);
sl.add(o);
ASSERT_TRUE(sl.shoppinglist.begin() != sl.shoppinglist.end());
sl.remove(o);
o.set_isBought(false);
ASSERT_TRUE(sl.shoppinglist.begin() == sl.shoppinglist.end());

}

