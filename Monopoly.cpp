//
// Created by Administrator on 2018-10-16.
//

#include <algorithm>
#include "Monopoly.h"
#include "iostream"

void Monopoly::simulateGame(unsigned int numberOfTurns) {
    for(int roundNumber =0; roundNumber<numberOfTurns;roundNumber++)
    {
        for(auto &player : m_players)
        {
            std::cout << "Start of round " << roundNumber<<" for player " << player.getName() << "  at field " << player.getFieldNr() << " with money : " << player.getMoney() <<std::endl;
            int numberOfSteps = throwDices();
            movePlayer(player, numberOfSteps);
            std::cout << "End of round for player " << player.getName() << " player at field " << player.getFieldNr() << " with money : " << player.getMoney() <<std::endl;
        }
    }

}

void Monopoly::movePlayer(Player &player, int nrOfSteps) {
    int startField = player.getFieldNr();
    int endField = startField + nrOfSteps;
    for ( int at_field=startField+1; at_field < endField; at_field++)
        {
            m_board.getField(at_field)->actionOnPass(player);
        }
    m_board.getField(endField)->actionOnStay(player);
    player.moveToFieldNr(endField);
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
        m_players.push_back(player);
    }
}

void Monopoly::addDices() {
    for(int i=0; i<NR_OF_DICES; i++){
        Dice dice(MIN_NR_OF_DOTS_ON_DICE, MAX_NR_OF_DOTS_ON_DICE);
        m_dices.push_back(dice);
    }

}

int Monopoly::throwDices() {
    int sum = 0;
    for(Dice& d : m_dices)
    {
        sum += d.throwDice();
    }
    return sum;

}
