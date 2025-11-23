//
// Created by benja on 23/11/2025.
//

#include "../includes/Inventory.h"

Inventory::Inventory(int size) {
    this->size = size;
}

void Inventory::set_size(int size) {
    this->size += size;
}

