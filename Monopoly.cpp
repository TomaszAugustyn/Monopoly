//
// Created by Administrator on 2018-10-16.
//

#include <algorithm>
#include "Monopoly.h"
#include "iostream"

void Monopoly::simulateGame(unsigned int numberOfTurns) {
    for(int roundNumber =0; roundNumber<numberOfTurns;roundNumber++)
    {
        movePlayers(roundNumber);
    }

}

void Monopoly::movePlayers(int roundNumber) {
    for(auto &player : m_players.getPlayers())
    {
        std::cout << "Start of round " << roundNumber << " for player " << player.getName() << "  at field " << player.getFieldNr() << " with money : " << player.getMoney() << std::endl;
        if(player.playerInPrison())
        {
            player.skipATurn();
            std::cout << "Player " << player.getName() << " is in prison! He is skipping a turn. Prison at field: " << player.getFieldNr() << std::endl;
            continue;
        }
        movePlayer(player, throwDices());
        if(player.isBancrupt())
        {
            std::cout << "Player " << player.getName() << " lost !" <<std::endl;
            m_players.removePlayer(player);

        }
        else {
            std::cout << "End of round " << roundNumber << " for player " << player.getName() << "  at field "
                      << player.getFieldNr() << " with money : " << player.getMoney() << std::endl;
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
    m_players =  Players(nrOfPlayers);
    addDices();
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
