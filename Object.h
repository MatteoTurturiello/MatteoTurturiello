//
// Created by turtu on 18/09/2022.
//

#ifndef MATTEOTURTURIELLO_OBJECT_H
#define MATTEOTURTURIELLO_OBJECT_H


#include <string>
#include <list>
#include "Subject.h"

class Object {
private:

    std::string name, category;
    int q;
    float price;
    bool isBought;
public:
    bool operator==(const Object& right);

    std::string getName() const {
        return name;
    }
    std::string getCategory() const {
        return category;
    }
    int getQuantity() const {
        return q;
    }
    float getPrice() const {
        return price;
    }
    bool get_isBought() const {
        return isBought;
    }
    void set_isBought(const bool& isBought) {
        this->isBought = isBought;
    }
    ~Object() = default;

    Object(const std::string& name, const std::string& category, int q, float price, bool isBought = false) : name(name), category(category), q(q), price(price), isBought(isBought) {}
};



#endif //MATTEOTURTURIELLO_OBJECT_H
