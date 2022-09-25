//
// Created by turtu on 18/09/2022.
//

#include "Object.h"

bool Object::operator==(const Object &right) {
    bool result = false;
    if(name == right.name && category == right.category) result = true;
    return result;
}
