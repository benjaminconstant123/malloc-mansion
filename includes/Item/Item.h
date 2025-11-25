//
// Created by axel on 24/11/2025.
//

#ifndef MALLOC_MANSION_ITEM_H
#define MALLOC_MANSION_ITEM_H
#include "../Entity.h"


class Item {
protected:
    std::string m_name;
    int m_quantity;

public:
    Item(int quantity, std::string);
    int get_quantity() const;
    void set_quantity(int quantity);
    std::string get_name() const;

    virtual ~Item() = default;

    virtual bool use(Entity* target) = 0;   // renvois vrai si l'item doit être détruit (qte =0), faux sinon
};


#endif //MALLOC_MANSION_ITEM_H