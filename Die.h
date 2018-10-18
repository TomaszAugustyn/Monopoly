//
// Created by Administrator on 2018-10-16.
//

#ifndef REFACTORING_DIE_H
#define REFACTORING_DIE_H


class Die {
public:
    static const unsigned int MIN_NR_OF_DOTS_ON_DICE = 1;
    static const unsigned int MAX_NR_OF_DOTS_ON_DICE = 6;

    Die(unsigned int minNrOfDots, unsigned int maxNrOfDots);
    Die();

    int throwDice();
private:
    unsigned int minNrOfDots;
    unsigned int maxNrOfDots;

};


#endif //REFACTORING_DICE_H
