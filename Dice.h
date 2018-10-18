//
// Created by Administrator on 2018-10-18.
//

#ifndef REFACTORING_DICE_H
#define REFACTORING_DICE_H


#include <vector>
#include "Die.h"

class Dice {
public:
    static const unsigned int NR_OF_DICES = 2;
    void addDices();
    int throwDices();


private:
    std::vector<Die> m_dices;
};


#endif //REFACTORING_DICE_H
