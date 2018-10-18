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
    static const unsigned int CASH_PENALTY_VALUE = 400;
};


class StartField : public IField {
public:
    void actionOnStay(Player &player) override;
    void actionOnPass(Player &player) override;
private:
    static const unsigned int CASH_START_VALUE = 250;
};

class PrisonField : public IField {
public:
    void actionOnStay(Player &player) override;
    void actionOnPass(Player &player) override;
private:
    static const unsigned int NUMBER_OF_DAYS_IN_PRISON = 3;
};

class TownField : public IField {
public:
    void actionOnStay(Player &player) override;
    void actionOnPass(Player &player) override;
private:
    const unsigned int m_price;
    const unsigned int m_penaltyAtStay;

};


#endif //REFACTORING_FIELDS_H
