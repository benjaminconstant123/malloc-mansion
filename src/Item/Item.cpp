//
// Created by axel on 24/11/2025.
//

#include "../../includes/Item/Item.h"

Item::Item(int quantity, std::string name) {
    this->m_quantity = quantity;
    this->m_name = name;
}

int Item::get_quantity() const {
    return this->m_quantity;
}

void Item::set_quantity(const int quantity) {
    this->m_quantity = quantity;
}

std::string Item::get_name() const {
    return this->m_name;
}