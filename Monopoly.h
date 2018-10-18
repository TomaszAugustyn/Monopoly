//
// Created by Administrator on 2018-10-16.
//

#ifndef REFACTORING_MONOPOLY_H
#define REFACTORING_MONOPOLY_H


#include <map>
#include <vector>
#include "Player.h"
#include "Dice.h"
#include "Board.h"
#include "Players.h"

class Monopoly {
public:

    static const unsigned int INITIAL_AMOUNT_OF_MONEY = 1000;

    Monopoly(unsigned int nrOfPlayers);
    void simulateGame(unsigned int numberOfTurns);
    int throwDices();

private:
    Players m_players;
    Board m_board;
    Dice m_dice;

    void movePlayer(Player &player, int nrOfSteps);
    void movePlayers(int roundNumber);
};


#endif //REFACTORING_MONOPOLY_H
