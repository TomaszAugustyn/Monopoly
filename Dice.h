//
// Created by Administrator on 2018-10-16.
//

#ifndef REFACTORING_DICE_H
#define REFACTORING_DICE_H


class Dice {
public:
    Dice(unsigned int minNrOfDots, unsigned int maxNrOfDots);
    int throwDice();
private:
    unsigned int minNrOfDots;
    unsigned int maxNrOfDots;

};


#endif //REFACTORING_DICE_H
