//
// Created by Administrator on 2018-10-18.
//

#include "Dice.h"


void Dice::addDices() {
    for(int i=0; i<NR_OF_DICES; i++){
        Die die;
        m_dices.push_back(die);
    }
}

int Dice::throwDices() {
    int sum = 0;
    for(Die& d : m_dices)
    {
        sum += d.throwDice();
    }
    return sum;

}