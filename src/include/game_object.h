#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

#include "resource_manager.h"
#include <cstring>
#include <glm/glm.hpp>
#include <string>

class GameObject {
    public:

    GameObject(std::string name) {
        this->name = name;
        ResourceManager::addShader(name);
    };

    ~GameObject() {};

    std::string name;

    private:
        glm::vec3 position; 
};

#endif
