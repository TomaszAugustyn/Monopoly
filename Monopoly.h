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

class Monopoly {
public:
    static const unsigned int NR_OF_DICES = 2;
    static const unsigned int MIN_NUMBER_OF_PLAYERS = 2;
    static const unsigned int MAX_NUMBER_OF_PLAYERS = 8;
    static const unsigned int MIN_NR_OF_DOTS_ON_DICE = 1;
    static const unsigned int MAX_NR_OF_DOTS_ON_DICE = 6;
    static const unsigned int INITIAL_AMOUNT_OF_MONEY = 1000;

    Monopoly(unsigned int nrOfPlayers);
    void simulateGame(unsigned int numberOfTurns);
    int throwDices();

private:
    std::vector<Player> m_players;
    std::vector<Dice> m_dices;
    Board m_board;

    void initializePlayers(unsigned int nrOfPlayers);
    void addDices();

    void movePlayer(Player &player, int nrOfSteps);
};


#endif //REFACTORING_MONOPOLY_H
