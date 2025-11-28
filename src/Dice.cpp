//
// Created by axel on 28/11/2025.
//

#include "../includes/Dice.h"

#include <cstdlib> // pour rand() et srand()
#include <ctime>   // pour time()
#include <iostream>
#include <random>

Dice::Dice(int const face) {
    this->face = face;
}

int Dice::get_face() {
    return this->face;
}

int Dice::random_face() {
    std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(1, this->face);
    return distrib(gen);
}

std::string Dice::to_string() {
    std::string result;
    result.append("d");
    result.append(std::to_string(this->face));
    return result;
}
