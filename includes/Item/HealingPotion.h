//
// Created by axel on 24/11/2025.
//

#ifndef MALLOC_MANSION_HEALING_POTION_H
#define MALLOC_MANSION_HEALING_POTION_H
#include "Item.h"


class HealingPotion : Item {

public:
    explicit HealingPotion(int quantity);
    bool use(Entity* target) override;
};


#endif //MALLOC_MANSION_HEALING_POTION_H