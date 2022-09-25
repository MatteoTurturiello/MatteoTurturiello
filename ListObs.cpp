//
// Created by turtu on 18/09/2022.
//

#include "ListObs.h"
void ListObs::update() {
    subject->view();

}

void ListObs::attach() {
    subject->subscribe(this);

}

void ListObs::detach() {
    subject->unsubscribe(this);

}
