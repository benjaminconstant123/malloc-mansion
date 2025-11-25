//
// Created by axel on 24/11/2025.
//

#include "../../includes/Item/HealingPotion.h"

#include <iostream>
#include <ostream>
#define HEALING 40

HealingPotion::HealingPotion(int quantity, std::string name):Item(quantity, name){}

bool HealingPotion::use(Entity* target) {
    bool destroyed = get_quantity()<1;
    if (destroyed) {
        std::cout << "error : Item quantity < 0" << std::endl;
    } else {
        int current_health = target->get_health();
        int healing = current_health + HEALING;
        if (healing >= target->get_max_health()) {
            healing = target->get_max_health();
        }
        target->set_health(healing);
        std::cout << target->get_name() << " a desormais : " << target->get_health() << " pv." << std::endl;
        this->set_quantity(this->get_quantity()-1);
    }
    return this->get_quantity() <= 0;
}
