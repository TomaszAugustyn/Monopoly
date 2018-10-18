cmake_minimum_required(VERSION 3.12)
project(Refactoring)

set(CMAKE_CXX_STANDARD 17)

add_executable(Refactoring main.cpp Monopoly.cpp Monopoly.h Fields/IField.h Player.cpp Player.h Dice.cpp Dice.h Board.cpp Board.h Fields/Fields.cpp Fields/Fields.h Players.cpp Players.h ComputerPlayerBrave.cpp ComputerPlayerBrave.h ComputerPlayerUnpredictable.cpp ComputerPlayerUnpredictable.h)