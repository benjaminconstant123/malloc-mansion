//
// Created by axel on 24/11/2025.
//

#include "../../includes/Item/Item.h"

Item::Item(int quantity) {
    this->m_quantity = quantity;
}

int Item::get_quantity() const {
    return this->m_quantity;
}

void Item::set_quantity(const int quantity) {
    this->m_quantity = quantity;
}