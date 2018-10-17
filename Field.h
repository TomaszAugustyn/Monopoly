//
// Created by Administrator on 2018-10-16.
//

#ifndef REFACTORING_FIELD_H
#define REFACTORING_FIELD_H

#include <map>

struct FieldParam {
    enum FieldType {
        START,
        PENALTY,
        REWARD
    };
    static const int startValue = 100;
    static const int penaltyValue = -100;
    static const int rewardValue =200;

    static std::map<FieldParam::FieldType , int > create_map()
    {   std::map<FieldParam::FieldType , int > m;
        m[FieldParam::START] = startValue;
        m[FieldParam::PENALTY] = penaltyValue;
        m[FieldParam::REWARD] = rewardValue;
        return m;
    }
    static const std::map<FieldParam::FieldType , int > fieldToActionMap;
};

class Field {
public:
    Field(FieldParam::FieldType fieldType);
    void doAction();

private:
    FieldParam::FieldType fieldType;
};


#endif //REFACTORING_FIELD_H
