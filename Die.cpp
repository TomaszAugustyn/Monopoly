//
// Created by Administrator on 2018-10-16.
//

#include <cstdlib>
#include "Die.h"

Die::Die(unsigned int minNrOfDots, unsigned int maxNrOfDots) {
    this->minNrOfDots = minNrOfDots;
    this->maxNrOfDots = maxNrOfDots;
}

Die::Die()
{
    minNrOfDots = MIN_NR_OF_DOTS_ON_DICE;
    maxNrOfDots = MAX_NR_OF_DOTS_ON_DICE;
}

int Die::throwDice() {
    return (rand() % (maxNrOfDots - minNrOfDots)) + minNrOfDots;
}


