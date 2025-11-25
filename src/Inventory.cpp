//
// Created by benja on 23/11/2025.
//

#include "../includes/Inventory.h"

Inventory::Inventory(const int size) {
    this->m_size = size;
}

void Inventory::set_size(const int size) {
    this->m_size += size;
}

void Inventory::set_items(std::vector<Item *> items) {
    this->m_items = std::move(items); // MOVE (Rapide : échange juste les pointeurs internes, imagine le vector il a 1000 Item *)
}

std::vector<Item *> Inventory::get_items() const {
    return this->m_items;
}

void Inventory::add_item(Item *item) {
    this->m_items.push_back(item); //utilisation de push_back de vector pour ajouter a la fin de la "liste"
}

void Inventory::remove_item(Item *item) {
    //TODO : comment faire pour remove le bon item ??
}

