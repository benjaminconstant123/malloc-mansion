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

void Inventory::set_items(std::vector<Item *> items) {
    //TODO : implementation a faire
}

std::vector<Item *> Inventory::get_items() const {
    //TODO : implementation a faire
}

void Inventory::add_item(Item *item) {
    //TODO : implementation a faire
}

void Inventory::remove_item(Item *item) {
    //TODO : implementation a faire
}

