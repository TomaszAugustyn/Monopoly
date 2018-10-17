//
// Created by Administrator on 2018-10-17.
//

#include "Board.h"

Board::Board(int nrOfFields)
{
    initializeFields(nrOfFields);
}

Board::Board()
{
    initializeFields(NUMBER_OF_FIELDS);
}

void Board::initializeFields(int fields) {
    fieldMap.insert(std::make_pair(0,Field(FieldParam::START)));
    for (unsigned int i = 1; i < fields; i++){
        if( (i%3) == 0) {
            fieldMap.insert(std::make_pair(i,Field(FieldParam::PENALTY)));
        }
        else {
            fieldMap.insert(std::make_pair(i,Field(FieldParam::REWARD)));
        }
    }
}
