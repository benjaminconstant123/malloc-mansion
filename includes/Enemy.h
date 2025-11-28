//
// Created by benja on 22/11/2025.
//

#ifndef MALLOC_MANSION_ENEMY_H
#define MALLOC_MANSION_ENEMY_H
#include "Entity.h"


class Enemy : public Entity{
    public:
        Enemy(std::string name, int health, float flat_damage, int lvl);
        void attack(Entity *target, Dice *dice) override;
};


#endif //MALLOC_MANSION_ENEMY_H