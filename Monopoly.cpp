//
// Created by Administrator on 2018-10-16.
//

#include <algorithm>
#include "Monopoly.h"
#include "iostream"

void Monopoly::simulateGame(unsigned int numberOfTurns) {

}

Monopoly::Monopoly(unsigned int nrOfPlayers)
    : m_board()
{
    initializePlayers(nrOfPlayers);
    addDices();
}

void Monopoly::initializePlayers( unsigned int nrOfPlayers)  {
    for (unsigned int i = 0; i < nrOfPlayers; i++){
        std::string tmpName("Player");
        tmpName += std::to_string(i);
        Player player(i, tmpName);
        players.push_back(player);
    }
}

void Monopoly::addDices() {
    for(int i=0; i<NR_OF_DICES; i++){
        Dice dice(MIN_NR_OF_DOTS_ON_DICE, MAX_NR_OF_DOTS_ON_DICE);
        dices.push_back(dice);
    }

}

int Monopoly::throwDices() {
    int sum = 0;
    for(Dice& d : dices)
    {
        sum += d.throwDice();
    }
    return sum;

}
