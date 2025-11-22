//
// Created by benja on 22/11/2025.
//

#ifndef MALLOC_MANSION_PLAYER_H
#define MALLOC_MANSION_PLAYER_H
#include "Entity.h"


class Player : public Entity {
    public:
        Player(std::string name, int health, float flat_damage, int lvl);
        void attack(Entity *target) override;

};


#endif //MALLOC_MANSION_PLAYER_H