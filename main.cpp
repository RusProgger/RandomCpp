#include <iostream>
#include "userRandom.hpp"

int main() {

    std::cout << "==========================\n";
    std::cout << "\tUser random\t\n";
    std::cout << "==========================\n\n";

    unsigned int minRandom {};
    unsigned int maxRandom {};
    
    while (true) {

        std::cout << "Enter min number: ";
        std::cin >> minRandom;

        std::cout << "Enter max number: ";
        std::cin >> maxRandom;

        if (minRandom > 0 && maxRandom > 0 && minRandom <= maxRandom) {

            std::cout << "Random range from "
                      << minRandom
                      << " to "
                      << maxRandom
                      << " = "
                      << userRandom(minRandom, maxRandom)
                      << "\n";
        }
        else {
            std::cout << "Error!! Invalid range\n";
            return 1;
        }
    }

    
    // pause
    std::cin.get();
    return 0;
}