//
// Created by benja on 22/11/2025.
//

#include <iostream>
#include <ostream>

#include "includes/Enemy.h"
#include "includes/Player.h"

int main() {
    Player *player = new Player("john", 100, 10, 1);
    Enemy *enemy = new Enemy("jerome le monstre", 20,15,1);

    for (int i = 0; i < 10 && enemy->is_alive(); i++) {
        player->attack(enemy);
    }

    std::string name = player->get_name();
    std::cout << name << std::endl;


    return 0;
}
