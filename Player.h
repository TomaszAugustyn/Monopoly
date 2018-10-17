//
// Created by Administrator on 2018-10-16.
//

#ifndef REFACTORING_PLAYER_H
#define REFACTORING_PLAYER_H


#include <string>

class Player {
public:
    Player(unsigned int playerNr, const std::string &name);

private:
    unsigned int playerNr;
    std::string name;
    int money;
    unsigned int fieldNr;

};


#endif //REFACTORING_PLAYER_H
