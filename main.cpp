#include <iostream>
#include "Monopoly.h"
#include "Players.h"

static unsigned int NR_OF_TURNS = 10;

int main() {

    int nrOfplayers = -1;
    while (nrOfplayers < Players::MIN_NUMBER_OF_PLAYERS || nrOfplayers > Players::MAX_NUMBER_OF_PLAYERS){
        std::cout<<"Podaj liczbe graczy z przedzialu 2-8" << std::endl;
        std::cin >> nrOfplayers;
    }
    Monopoly monopoly(nrOfplayers);
    monopoly.simulateGame(NR_OF_TURNS);


    return 0;
}