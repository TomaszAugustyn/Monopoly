//
// Created by Administrator on 2018-10-17.
//

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

}

void TownField::actionOnPass(Player &player) {

}
