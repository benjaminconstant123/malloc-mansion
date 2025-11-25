//
// Created by benja on 23/11/2025.
//
#include <iostream>
#include "../includes/Inventory.h"

Inventory::Inventory(const int size) {
    this->m_size = size;
}

Inventory::~Inventory() {

    for (Item* item : m_items) {
        delete item;
    }
    m_items.clear();
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
    for (int i = 0; i < this->m_items.size(); i++) {
        if (this->m_items[i] == item) {
            m_items.erase(m_items.begin() + i);
        }
    }
}

std::string Inventory::to_string() {
    std::string result = "--- INVENTAIRE ---\n";
    for (int i = 0; i < this->m_items.size(); i++) {
        result.append(std::to_string(i+1));
        result.append("- ");
        result.append(m_items.at(i)->get_name());
        result.append(", quantite = ");
        result.append(std::to_string(m_items.at(i)->get_quantity()));
        result.append("\n");
    }
    return result;
}

void Inventory::use_item(int index, Entity *target) {
    if (index >= 0 && index < m_items.size()) {
        Item* item = m_items.at(index);

        item->use(target);

        if (item->get_quantity() <= 0) {
            delete item;
            this->m_items.erase(this->m_items.begin() + index);
        }
    }
}

