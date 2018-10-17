//
// Created by Administrator on 2018-10-16.
//

#include "Player.h"
#include "Monopoly.h"

Player::Player(unsigned int playerNr, const std::string &name) : m_playerNr(playerNr), m_name(name), m_fieldNr(0), m_money(Monopoly::INITIAL_AMOUNT_OF_MONEY) {

}

void Player::deposit(unsigned int moneyToAdd) {
    m_money += moneyToAdd;
}

void Player::withdraw(unsigned int moneyToWithdraw) {
    m_money -= moneyToWithdraw;
}

bool Player::isBancrupt() {
    return m_money <= 0;
}
