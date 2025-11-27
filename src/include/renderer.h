#ifndef RENDERER_H
#define RENDERER_H

#include "shader.h"
#include "glm/glm.hpp"
#include "game_object.h"

class Renderer {
    public:
        void render(GameObject* object);

        unsigned int VAO, VBO;
};

#endif
