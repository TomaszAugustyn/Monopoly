//
// Created by Administrator on 2018-10-17.
//

#ifndef REFACTORING_BOARD_H
#define REFACTORING_BOARD_H

#include "Field.h"


class Board {
public:
    static const unsigned int NUMBER_OF_FIELDS = 40;

    Board(const std::map<int, Field> &fieldMap);
    Board();

private:
    void initializeFields(int fields);

    std::map<int, Field> fieldMap;
};


#endif //REFACTORING_BOARD_H
