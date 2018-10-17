//
// Created by Administrator on 2018-10-17.
//

#include "Board.h"
#include "Fields/Fields.h"

Board::Board(int nrOfFields)
{
    initializeFields(nrOfFields);
}

Board::Board()
{
    initializeFields(NUMBER_OF_FIELDS);
}

void Board::initializeFields(int fields) {

    m_fieldMap.insert(std::make_pair(0, new StartField()));
    for (unsigned int i = 1; i < fields; i++){
        if( (i%3) == 0) {
            m_fieldMap.insert(std::make_pair(i, new PenaltyField()));
        }
        else {
            m_fieldMap.insert(std::make_pair(i, new RewardField()));
        }
    }
}

std::shared_ptr<IField> Board::getField(int fieldNr) {
    return m_fieldMap[fieldNr];
}
