#include <iostream>
#include "Monopoly.h"

static unsigned int NR_OF_TURNS = 10;

int main() {

    int nrOfplayers = -1;
    while (nrOfplayers < Monopoly::MIN_NUMBER_OF_PLAYERS || nrOfplayers > Monopoly::MAX_NUMBER_OF_PLAYERS){
        std::cout<<"Podaj liczbe graczy z przedzialu 2-8" << std::endl;
        std::cin >> nrOfplayers;
    }
    Monopoly monopoly(nrOfplayers);
    monopoly.simulateGame(NR_OF_TURNS);


    return 0;
}