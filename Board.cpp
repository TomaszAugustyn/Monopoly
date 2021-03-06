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
        if((i%10) == 0) {
            //PrisonField toDecorateField();
            //auto tmp = std::make_shared<IField>(toDecorateField);
            m_fieldMap.insert(std::make_pair(i, new BlackHole(std::make_shared<PrisonField>())));
        }
        else if( (i%3) == 0) {
            m_fieldMap.insert(std::make_pair(i, new PenaltyField()));
        }
        else {
            m_fieldMap.insert(std::make_pair(i, new RewardField()));
        }
    }
}

std::shared_ptr<IField> Board::getField(int fieldNr) {
    return fieldNr > LAST_FIELD_INDEX ? m_fieldMap[fieldNr - NUMBER_OF_FIELDS] : m_fieldMap[fieldNr];
}

void Board::releasePlayerFields(unsigned int playerNumber) {
    for( auto& field : m_fieldMap)
    {
        //field.removeOwner(playerNumber);
    }
}
