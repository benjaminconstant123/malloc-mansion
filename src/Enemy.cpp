//
// Created by benja on 22/11/2025.
//

#include "../includes/Enemy.h"

#include <iostream>

Enemy::Enemy(std::string name, int health, float flat_damage, int lvl) : Entity(name, health, flat_damage, lvl) {}

void Enemy::attack(Entity *target) {
    std::cout << "--- TOUR DE L'ENNEMI ---" << std::endl;
    int taken_damage = target->take_damage(this->flat_damage);
    std::cout << target->get_name() << " a pris " << taken_damage << " degats, sa vie est de " << target->get_health() << " ---" << std::endl;
    if (!target->is_alive()) {
        std::cout << "--- Le joueur est ded, le bro est canne ---" << std::endl;
    }
}
