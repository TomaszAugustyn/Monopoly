//
// Created by Administrator on 2018-10-16.
//

#include "Player.h"
#include "Monopoly.h"
#include "Board.h"

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

unsigned int Player::getFieldNr() const {
    return m_fieldNr;
}

void Player::moveToFieldNr(unsigned int fieldNr) {
    Player::m_fieldNr =  fieldNr > Board::LAST_FIELD_INDEX ? fieldNr - Board::NUMBER_OF_FIELDS : fieldNr;
}

const std::string &Player::getName() const {
    return m_name;
}

int Player::getMoney() const {
    return m_money;
}

