//
// Created by Administrator on 2018-10-17.
//

#ifndef REFACTORING_BOARD_H
#define REFACTORING_BOARD_H

#include "Fields/IField.h"
#include <memory>


class Board {
public:
    static const unsigned int NUMBER_OF_FIELDS = 40;
    static const unsigned int LAST_FIELD_INDEX = NUMBER_OF_FIELDS - 1;

    Board();
    Board(int nrOfFields);
    std::shared_ptr<IField> getField(int fieldNr);

private:
    void initializeFields(int fields);

    std::map<int, std::shared_ptr<IField>> m_fieldMap;
};


#endif //REFACTORING_BOARD_H
