//
// Created by axel on 24/11/2025.
//

#ifndef MALLOC_MANSION_ITEM_H
#define MALLOC_MANSION_ITEM_H
#include "../Entity.h"


class Item {
private:
    int quantity;

public:
    virtual ~Item() = default;

    virtual bool use(Entity* target);
    // renvois vrai si l'item est détruit, faux sinon
};


#endif //MALLOC_MANSION_ITEM_H