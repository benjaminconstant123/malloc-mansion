//
// Created by axel on 28/11/2025.
//src/Item/HealingPotion.cpp


#ifndef MALLOC_MANSION_DICE_H
#define MALLOC_MANSION_DICE_H


class Dice {
private:
    int face;
public:
    explicit Dice(int face);
    int get_face();
    int random_face();
};


#endif //MALLOC_MANSION_DICE_H