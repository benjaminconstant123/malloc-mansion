//
// Created by benja on 22/11/2025.
//

#include "../includes/Entity.h"


Entity::Entity(std::string name, int health, float flat_damage, int lvl) {
    this->name = name;
    this->health = health;
    this->max_health = health;
    this->flat_damage = flat_damage;
}

bool Entity::is_alive() const {
    return (this->health > 0);
}

int Entity::get_health() const {
    return this->health;
}

int Entity::get_max_health() const {
    return this->max_health;
}

void Entity::set_health(int hp) {
    if (hp > get_max_health()) {
        this->health = max_health;
    }
    this->health = hp;
}

int Entity::take_damage(float damage) {
    int round_damage = static_cast<int>(damage);
    int taken_damage = round_damage;
    this->health -= round_damage;
    if (this->health <= 0) {
        taken_damage = round_damage + this->health;
        this->health = 0;
    }
    return taken_damage;
}

std::string Entity::get_name() {
    return this->name;
}

int Entity::get_lvl() const {
    return this->lvl;
}
