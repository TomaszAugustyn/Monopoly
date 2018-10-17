//
// Created by Administrator on 2018-10-16.
//

#ifndef REFACTORING_PLAYER_H
#define REFACTORING_PLAYER_H


#include <string>

class Player {
public:
    Player(unsigned int playerNr, const std::string &name);
    void deposit(unsigned int moneyToAdd);
    void withdraw(unsigned int moneyToWithdraw);
    bool isBancrupt();
    unsigned int getFieldNr() const;
    void moveToFieldNr(unsigned int fieldNr);
    const std::string &getName() const;

private:
    unsigned int m_playerNr;
    std::string m_name;
    int m_money;
public:
    int getMoney() const;

private:
    unsigned int m_fieldNr;

};


#endif //REFACTORING_PLAYER_H

