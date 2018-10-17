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
