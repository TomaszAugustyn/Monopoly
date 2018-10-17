//
// Created by Administrator on 2018-10-17.
//

#include "Board.h"

Board::Board(const std::map<int, Field> &fieldMap) : fieldMap(fieldMap) {}

Board::Board()
{
    initializeFields(NUMBER_OF_FIELDS);
}

void Board::initializeFields(int fields) {
    Field tmpField(FieldParam::START);
    fieldMap.insert(std::make_pair(0,tmpField));
    for (unsigned int i = 1; i < fields; i++){
        if( (i%3) == 0) {
            Field tmpField2(FieldParam::PENALTY);
            fieldMap.insert(std::make_pair(i,tmpField2));
        }
        else {
            Field tmpField2(FieldParam::REWARD);
            fieldMap.insert(std::make_pair(i,tmpField2));
        }
    }
}
