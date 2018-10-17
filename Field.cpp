//
// Created by Administrator on 2018-10-16.
//

#include "Field.h"


const std::map<FieldParam::FieldType , int > FieldParam::fieldToActionMap = FieldParam::create_map();

Field::Field(FieldParam::FieldType fieldType)
    : fieldType(fieldType) {
}
