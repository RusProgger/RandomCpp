#include <iostream>
#include "userRandom.hpp"
#include <random>

int userRandom(int minRandom, int maxRandom) {

    static std::random_device userRandom;
    static std::mt19937 random(userRandom());

    std::uniform_int_distribution<int> dist(minRandom, maxRandom);

    return dist(random);
    
}