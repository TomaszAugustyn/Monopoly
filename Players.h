//
// Created by Administrator on 2018-10-17.
//

#ifndef REFACTORING_PLAYERS_H
#define REFACTORING_PLAYERS_H

#include <vector>
#include "Player.h"
#include <list>

class Players {

public:
    static const unsigned int MIN_NUMBER_OF_PLAYERS = 2;
    static const unsigned int MAX_NUMBER_OF_PLAYERS = 8;

    //TODO implement iterator and remove getter
    Players();
    Players(unsigned int nrOfPlayers);
    void removePlayer(Player &player);
    std::vector<Player> &getPlayers() ;
    void addPlayer(Player &player);


private:
    std::vector<Player> m_players;
    void initializePlayers(unsigned int nrOfPlayers);

    unsigned int validateNrOfPlayers(unsigned int nrOfPlayers) const;
};


#endif //REFACTORING_PLAYERS_H
