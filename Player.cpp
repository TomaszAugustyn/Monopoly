//
// Created by Administrator on 2018-10-16.
//

#include "Player.h"
#include "Monopoly.h"

Player::Player(unsigned int playerNr, const std::string &name) : playerNr(playerNr), name(name), fieldNr(0), money(Monopoly::INITIAL_AMOUNT_OF_MONEY) {

}
