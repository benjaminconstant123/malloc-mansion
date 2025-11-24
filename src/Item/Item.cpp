//
// Created by axel on 24/11/2025.
//

#include "../../includes/Item/Item.h"

Item::Item(int quantity) {
    this->quantity = quantity;
}

int Item::get_quantity() const {
    return this->quantity;
}

void Item::set_quantity(int quantity) {
    this->quantity = quantity;
}