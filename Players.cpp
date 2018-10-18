//
// Created by Administrator on 2018-10-17.
//

#include "Players.h"

Players::Players() {
    initializePlayers(MIN_NUMBER_OF_PLAYERS);
}

Players::Players(unsigned int nrOfPlayers) {
    initializePlayers(nrOfPlayers);
}


void Players::removePlayer(Player &player) {
    m_players.erase(m_players.begin() + player.getPlayerNr());
}

std::vector<Player> &Players::getPlayers()  {
    return m_players;
}

void Players::addPlayer(Player &player) {
    if (m_players.size() < MAX_NUMBER_OF_PLAYERS){
        m_players.push_back(player);
    }
}

void Players::initializePlayers( unsigned int nrOfPlayers)  {
    nrOfPlayers = validateNrOfPlayers(nrOfPlayers);
    for (unsigned int i = 0; i < nrOfPlayers; i++){
        std::string tmpName("Player");
        tmpName += std::to_string(i);
        Player player(i, tmpName);
        addPlayer(player);
    }
}

unsigned int Players::validateNrOfPlayers(unsigned int nrOfPlayers) const {
    unsigned int corrected = nrOfPlayers > MAX_NUMBER_OF_PLAYERS ? MAX_NUMBER_OF_PLAYERS : (nrOfPlayers < MIN_NUMBER_OF_PLAYERS ? MIN_NUMBER_OF_PLAYERS : nrOfPlayers);
    return corrected;
}


