//
// Created by turtu on 18/09/2022.
//

#ifndef MATTEOTURTURIELLO_OBSERVER_H
#define MATTEOTURTURIELLO_OBSERVER_H


class Observer {
public:
    virtual void update() = 0;
    virtual void attach() = 0;
    virtual void detach() = 0;

    ~Observer() = default;

};


#endif //MATTEOTURTURIELLO_OBSERVER_H
