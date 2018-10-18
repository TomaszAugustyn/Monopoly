//
// Created by Administrator on 2018-10-16.
//

#include <iostream>
#include <algorithm>
#include "Player.h"
#include "Monopoly.h"
#include "Board.h"

Player::Player(unsigned int playerNr, const std::string &name) : m_playerNr(playerNr), m_name(name), m_fieldNr(0), m_money(Monopoly::INITIAL_AMOUNT_OF_MONEY), m_turnsToSkip(0) {

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

unsigned int Player::getPlayerNr() const {
    return m_playerNr;
}

void Player::setNrOfTurnsToSkip(unsigned int turnsToSkip) {
    m_turnsToSkip = turnsToSkip;
}

void Player::skipATurn() {
    m_turnsToSkip--;
}

bool Player::playerInPrison() {
    return m_turnsToSkip > 0;
}

bool Player::wannaBuy(IField field) {
    //TODO uncomment after refactoring, when have access to fieldNr AND m_price
    /*std::string answer = "";
    while (answer != "y" && answer != "n"){
        std::cout << "Wanna buy field nr: " << fieldNr << "?" << " Price is " << m_price << ". (y/n)?" << std::endl;
        std::cin >> answer;
        std::transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
    }

    return answer == "y";*/
    return true;

}

