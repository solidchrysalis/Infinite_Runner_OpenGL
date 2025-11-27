#ifndef RESOURCE_MANAGER_H
#define RESOURCE_MANAGER_H

#include <map>
#include <string>
#include <shader.h>

class ResourceManager {
    public:
        static std::map<std::string, Shader> shaders;
        
        static Shader loadShader(const char* vertexPath, const char* fragmentPath); 

        static Shader getShader(const char* name);

        static void addShader(std::string name); 

        static void deleteShaders();
};

#endif

