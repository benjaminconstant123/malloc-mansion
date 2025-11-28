//
// Created by benja on 22/11/2025.
//

#include <iostream>
#include <ostream>

#include "includes/Dice.h"
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

    auto *d6 = new Dice(6);
    double esp_exp_6 = 0;
    for (int i = 0; i < 10000; ++i) {
        esp_exp_6 += d6->random_face();
    }
    auto *d20 = new Dice(20);
    double esp_exp_20 = 0;
    for (int i = 0; i < 10000; ++i) {
        esp_exp_20 += d20->random_face();
    }
    esp_exp_6 = esp_exp_6 / 10000.0;
    esp_exp_20 = esp_exp_20 / 10000.0;
    std::cout << "esperance experimentale de d6 = " << esp_exp_6 << std::endl;
    std::cout << "esperance experimentale de d20 = " << esp_exp_20 << std::endl;

    delete d6;
    delete d20;

    delete player;
    delete enemy;
    return 0;
}
