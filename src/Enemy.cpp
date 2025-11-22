//
// Created by benja on 22/11/2025.
//

#include "../includes/Enemy.h"

#include <iostream>

Enemy::Enemy(std::string name, int health, float flat_damage) : Entity(name, health, flat_damage) {}

void Enemy::attack(Entity *target) {
    std::cout << "--- TOUR DE L'ENNEMI ---" << std::endl;
    target->take_damage(this->flat_damage);
    std::cout << "--- Le joueur a pris " << flat_damage << " dégats ---" << std::endl;
}
