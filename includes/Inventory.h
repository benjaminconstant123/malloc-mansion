//
// Created by benja on 23/11/2025.
//

#ifndef MALLOC_MANSION_INVENTORY_H
#define MALLOC_MANSION_INVENTORY_H
#include <vector>

#include "Item/Item.h"

class Inventory {
    protected:
    std::vector<Item *> m_items;
    int m_size;
    public:
    explicit Inventory(int size); //force le complilateur a NE pas convertier les types
    void set_size(int size);
    void set_items(std::vector<Item *> items); //pour set plein d'item
    std::vector<Item *> get_items() const; //pour get plein d'item
    void add_item(Item *item); //pour add un seul item
    void remove_item(Item *item); //pour remove un item

};


#endif //MALLOC_MANSION_INVENTORY_H