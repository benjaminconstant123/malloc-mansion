cmake_minimum_required(VERSION 4.0)
project(malloc_mansion)

set(CMAKE_CXX_STANDARD 14)

add_executable(malloc_mansion
        main.cpp
        src/Player.cpp
        includes/Player.h
        src/Entity.cpp
        includes/Entity.h
        src/Enemy.cpp
        includes/Enemy.h
        src/Inventory.cpp
        includes/Inventory.h
        src/Item/Item.cpp
        includes/Item/Item.h
)
