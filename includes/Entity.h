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

    public:
        Entity(std::string name, int health, float flat_damage);
        virtual ~Entity() = default;

        virtual void attack(Entity* target) = 0;

        bool is_alive();
        void take_damage(float damage);
        std::string get_name();
};


#endif //MALLOC_MANSION_ENTITY_H