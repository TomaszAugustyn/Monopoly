//
// Created by Administrator on 2018-10-17.
//

#ifndef REFACTORING_FIELDS_H
#define REFACTORING_FIELDS_H
#include "IField.h"
#include "../Player.h"

class RewardField : public IField {
public:
    void actionOnStay(Player &player) override;
    void actionOnPass(Player &player) override;

private:
    static const unsigned int CASH_REWARD_VALUE = 100;
};

class PenaltyField : public IField  {
public:
    void actionOnStay(Player &player) override;
    void actionOnPass(Player &player) override;
private:
    static const unsigned int CASH_PENALTY_VALUE = 300;
};


class StartField : public IField {
public:
    void actionOnStay(Player &player) override;
    void actionOnPass(Player &player) override;
private:
    static const unsigned int CASH_START_VALUE = 250;
};


#endif //REFACTORING_FIELDS_H
