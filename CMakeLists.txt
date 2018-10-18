cmake_minimum_required(VERSION 3.12)
project(Refactoring)

set(CMAKE_CXX_STANDARD 17)

add_executable(Refactoring main.cpp Die.cpp Die.h Dice.cpp Dice.h Monopoly.cpp Monopoly.h Fields/IField.h Player.cpp Player.h Board.cpp Board.h Fields/Fields.cpp Fields/Fields.h Players.cpp Players.h ComputerPlayerBrave.cpp ComputerPlayerBrave.h ComputerPlayerUnpredictable.cpp ComputerPlayerUnpredictable.h GameBuilder.cpp GameBuilder.h DiceBuilder.cpp DiceBuilder.h BoardBuilder.cpp BoardBuilder.h )