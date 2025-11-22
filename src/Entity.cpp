//
// Created by benja on 22/11/2025.
//

#include "../includes/Entity.h"


Entity::Entity(std::string name, int health, float flat_damage, int lvl) {
    this->name = name;
    this->health = health;
    this->flat_damage = flat_damage;

}

bool Entity::is_alive() const {
    return (this->health > 0);
}

void Entity::take_damage(float damage) {
    this->health -= static_cast<int>(damage);
    if (this->health <= 0) {
        this->health = 0;
    }
}

std::string Entity::get_name() {
    return this->name;
}

int Entity::get_lvl() const {
    return this->lvl;
}
