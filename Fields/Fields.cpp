//
// Created by Administrator on 2018-10-17.
//

#include "Fields.h"

void RewardField::at_stay(Player &player) {
    player.deposit(CASH_REWARD_VALUE);
}

void RewardField::at_pass(Player &player) {

}

void PenaltyField::at_stay(Player &player) {
    player.withdraw(CASH_PENALTY_VALUE);

}

void PenaltyField::at_pass(Player &player) {

}

void StartField::at_stay(Player &player) {

}

void StartField::at_pass(Player &player) {
    player.deposit(CASH_START_VALUE);
}
