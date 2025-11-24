//
// Created by benja on 22/11/2025.
//

#ifndef MALLOC_MANSION_ENTITY_H
#define MALLOC_MANSION_ENTITY_H
#include <string>


class Entity {
        protected:
        int health;
        std::string name;
        float flat_damage;
        int lvl;

    public:
        Entity(std::string name, int health, float flat_damage, int lvl);
        virtual ~Entity() = default;

        virtual void attack(Entity* target) = 0;

        bool is_alive() const;
        int get_health() const;
        void set_health(int hp);
        int take_damage(float damage);
        std::string get_name();
        int get_lvl() const;
};


#endif //MALLOC_MANSION_ENTITY_H