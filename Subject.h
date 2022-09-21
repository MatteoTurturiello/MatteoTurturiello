//
// Created by turtu on 18/09/2022.
//

#ifndef MATTEOTURTURIELLO_SUBJECT_H
#define MATTEOTURTURIELLO_SUBJECT_H


#include "Observer.h"

class Subject {
public:
    virtual void subscribe(Observer* o) = 0;
    virtual void unsubscribe(Observer* o) = 0;
    virtual void notify() = 0;

    virtual ~Subject() = default;
};



#endif //MATTEOTURTURIELLO_SUBJECT_H
