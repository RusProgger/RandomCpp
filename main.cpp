#include <iostream>
#include "userRandom.hpp"

int main() {

    std::cout << "==========================\n";
    std::cout << "\tUser random\t\n";
    std::cout << "==========================\n\n";

    unsigned int minRandom {};
    unsigned int maxRandom {};

    std::cout << "Enter number minNumber: ";
    std::cin >> minRandom;
    std::cout << "Enter number maxNumber: ";
    std::cin >> maxRandom;

    std::cout << "Random range from " << minRandom << " to " << "maxRandom " << maxRandom << " = "<< userRandom(minRandom, maxRandom);


    // pause
    std::cin.get();
    return 0;
}