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
    // 1. Initialisation du "grain" (seed)
    // On utilise random_device pour obtenir une graine depuis le matériel
    std::random_device rd;

    // 2. Le Moteur (Le générateur de nombres pseudo-aléatoires)
    // 'static' est CRUCIAL ici : on ne veut initialiser le générateur qu'une seule fois
    // pour éviter de générer la même suite de nombres si la fonction est appelée très vite.
    static std::mt19937 gen(rd());

    // 3. La Distribution
    // Définit la plage [1, n] (inclusif)
    std::uniform_int_distribution<> distrib(1, this->face);

    // 4. Génération
    return distrib(gen);
}
