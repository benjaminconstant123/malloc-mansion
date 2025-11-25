//
// Created by axel on 24/11/2025.
//

#ifndef MALLOC_MANSION_HEALING_POTION_H
#define MALLOC_MANSION_HEALING_POTION_H
#include "Item.h"


class HealingPotion : public Item {

public:
    HealingPotion(int quantity, std::string name);
    bool use(Entity* target) override;
};


#endif //MALLOC_MANSION_HEALING_POTION_H