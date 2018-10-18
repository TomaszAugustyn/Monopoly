//
// Created by Administrator on 2018-10-17.
//

#include <iostream>
#include "Fields.h"

void RewardField::actionOnStay(Player &player) {
    player.deposit(CASH_REWARD_VALUE);
}

void RewardField::actionOnPass(Player &player) {

}

void PenaltyField::actionOnStay(Player &player) {
    player.withdraw(CASH_PENALTY_VALUE);

}

void PenaltyField::actionOnPass(Player &player) {

}

void StartField::actionOnStay(Player &player) {

}

void StartField::actionOnPass(Player &player) {
    player.deposit(CASH_START_VALUE);
}

void PrisonField::actionOnStay(Player &player) {
    player.setNrOfTurnsToSkip(NUMBER_OF_DAYS_IN_PRISON);
}

void PrisonField::actionOnPass(Player &player) {

}

void TownField::actionOnStay(Player &player) {
    if(m_owner >= 0) wannaBuy(player);
}

void TownField::actionOnPass(Player &player) {

}

TownField::TownField(const unsigned int m_price, const unsigned int m_penaltyAtStay)
    : m_price(m_price),
    m_penaltyAtStay(m_penaltyAtStay),
    m_owner(-1)
{

}

TownField::TownField()
: m_price(rand()%400 + 100),
m_penaltyAtStay(rand()%100 + 100),
m_owner(-1)
{
}

void TownField::wannaBuy(Player &player) {

    if (player.wannaBuy(*this))
    {

    }

}
