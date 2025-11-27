#include "renderer.h"
#include "resource_manager.h"
#include <string>

void Renderer::render(GameObject* object) {
    std::string name = object->name;
    Shader shader = ResourceManager::getShader(name.c_str());
}


