//
// Created by benja on 22/11/2025.
//

#include <iostream>
#include <ostream>

#include "includes/Enemy.h"
#include "includes/Player.h"
#include "includes/Item/HealingPotion.h"


int main() {
    auto *player = new Player("john", 100, 10, 1);
    auto *enemy = new Enemy("jerome le monstre", 20,15,1);

    player->inventory.add_item(new HealingPotion(5, "la super popo"));
    player->inventory.add_item(new HealingPotion(5, "caca prout"));
    std::string out = player->inventory.to_string();
    std::cout << out;

    enemy->attack(player);
    std::cout << player->get_health()<< std::endl;
    player->inventory.use_item(0, player);
    std::cout << player->get_health()<< std::endl;

    std::string out2 = player->inventory.to_string();
    std::cout << out2;

    delete player;
    delete enemy;
    return 0;
}
