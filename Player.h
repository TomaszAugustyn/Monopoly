//
// Created by Administrator on 2018-10-16.
//

#ifndef REFACTORING_PLAYER_H
#define REFACTORING_PLAYER_H


#include <string>
#include "Fields/IField.h"

class Player {
public:
    Player(unsigned int playerNr, const std::string &name);
    void deposit(unsigned int moneyToAdd);
    void withdraw(unsigned int moneyToWithdraw);
    bool isBancrupt();
    unsigned int getFieldNr() const;
    void moveToFieldNr(unsigned int fieldNr);
    int getMoney() const;
    const std::string &getName() const;
    unsigned int getPlayerNr() const;
    void setNrOfTurnsToSkip(unsigned int turnsToSkip);
    void skipATurn();
    bool playerInPrison();
    virtual bool wannaBuy(IField field);

protected:
    unsigned int m_playerNr;
    std::string m_name;
    int m_money;
    unsigned int m_fieldNr;
    unsigned int m_turnsToSkip;

};


#endif //REFACTORING_PLAYER_H

