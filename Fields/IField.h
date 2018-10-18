//
// Created by Administrator on 2018-10-16.
//

#ifndef REFACTORING_FIELD_H
#define REFACTORING_FIELD_H

#include <map>
#include "../Player.h"


class IField {
public:

    virtual void actionOnStay(Player &player) = 0;
    virtual void actionOnPass(Player &player) = 0;


};


#endif //REFACTORING_FIELD_H
