//
// Created by Administrator on 2018-10-16.
//

#include <cstdlib>
#include "Dice.h"

Dice::Dice(unsigned int minNrOfDots, unsigned int maxNrOfDots) {

    this->minNrOfDots = minNrOfDots;
    this->maxNrOfDots = maxNrOfDots;
}

int Dice::throwDice() {
    return rand() % maxNrOfDots + minNrOfDots;
}


