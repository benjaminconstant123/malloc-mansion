    //
    // Created by benja on 22/11/2025.
    //

    #include <iostream>
    #include <ostream>

    #include "includes/Enemy.h"
    #include "includes/Player.h"
    #include "includes/Item/HealingPotion.h"

    int main() {
        Player *player = new Player("john", 100, 10, 1);
        Enemy *enemy = new Enemy("jerome le monstre", 20,15,1);

        player->take_damage(50);
        HealingPotion *potion = new HealingPotion(5);
        potion->use(player);

        delete potion;

        std::string name = player->get_name();
        std::cout << name << std::endl;

        delete player;
        delete enemy;
        return 0;
    }
