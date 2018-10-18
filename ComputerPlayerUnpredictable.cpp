//
// Created by Administrator on 2018-10-18.
//

#include "ComputerPlayerUnpredictable.h"


bool ComputerPlayerUnpredictable::wannaBuy(IField field) {
    return rand() % 2 == 1;
}
