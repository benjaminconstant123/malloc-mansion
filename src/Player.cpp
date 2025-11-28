//
// Created by benja on 22/11/2025.
//

#include "../includes/Player.h"

#include <iostream>
#include <ostream>

Player::Player(std::string name, int health, float flat_damage, int lvl) : Entity(name, health, flat_damage, lvl) {

}

void Player::attack(Entity *target, Dice* dice) {
    std::cout << "--- TOUR DU JOUEUR ---" << std::endl;
    float damage = this->flat_damage;
    int const dice_result = dice->random_face();
    damage += static_cast<float>(dice_result);
    std::cout << this->get_name() << " jette un " << dice->to_string() << ", il est tombé sur : " << dice_result << std::endl;
    int const taken_damage = target->take_damage(damage);
    std::cout << target->get_name() << " a pris " << taken_damage << " degats, sa vie est de " << target->get_health() << " ---" << std::endl;
    if (!target->is_alive()) {
        std::cout << "--- " << target->get_name() << " est ded, le bro est canne ---" << std::endl;
    }
}
