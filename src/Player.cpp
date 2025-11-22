//
// Created by benja on 22/11/2025.
//

#include "../includes/Player.h"

#include <iostream>
#include <ostream>

Player::Player(std::string name, int health, float flat_damage) : Entity(name, health, flat_damage) {

}

void Player::attack(Entity *target) {
    std::cout << "--- TOUR DU JOUEUR ---" << std::endl;

    target->take_damage(this->flat_damage);
}
