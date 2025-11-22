//
// Created by benja on 22/11/2025.
//

#include <iostream>
#include <ostream>

#include "includes/Player.h"

int main() {
    Player *player = new Player("john", 100, 10, 1);

    std::string name = player->get_name();
    std::cout << name << std::endl;

    return 0;
}
