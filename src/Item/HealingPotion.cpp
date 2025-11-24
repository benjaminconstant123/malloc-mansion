//
// Created by axel on 24/11/2025.
//

#include "../../includes/Item/HealingPotion.h"

#include <iostream>
#include <ostream>
#define HEALING 40

HealingPotion::HealingPotion(int quantity):Item(quantity){
}

bool HealingPotion::use(Entity* target){
    bool destroyed = get_quantity()<1;
    if (destroyed) {
        std::cout << "error : Item quantity < 0" << std::endl;
    } else {
        int current_health = target->get_health();
        target->set_health(current_health + HEALING);
        std::cout << target->get_name() << " a desormais : " << target->get_health() << " pv." << std::endl;
        this->set_quantity(this->get_quantity()-1);
    }
    return this->get_quantity() <= 0;
}
