#include "resource_manager.h"

std::map<std::string, Shader> shaders;

void ResourceManager::addShader(std::string name) {
    std::string vShader = name + ".vs";
    std::string fShader = name + ".fs";
    shaders[name] = loadShader(vShader.c_str(), fShader.c_str());
}

Shader ResourceManager::getShader(const char* name) {
    return shaders[name];
}

void ResourceManager::deleteShaders() {
    for (auto shader : shaders) {
        shader.second.deleteShader();
    }
}

Shader ResourceManager::loadShader(const char *vertexPath, const char *fragmentPath) {
    // 1. retrieve the vertex/fragment source code from filePath
    std::string vertexCode;
    std::string fragmentCode;
    std::ifstream vShaderFile;
    std::ifstream fShaderFile;
    // ensure ifstream objects can throw exceptions:
    vShaderFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
    fShaderFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
    try
    {
        // open files
        vShaderFile.open(vertexPath);
        fShaderFile.open(fragmentPath);
        std::stringstream vShaderStream, fShaderStream;
        // read file's buffer contents into streams
        vShaderStream << vShaderFile.rdbuf();
        fShaderStream << fShaderFile.rdbuf();
        // close file handlers
        vShaderFile.close();
        fShaderFile.close();
        // convert stream into string
        vertexCode = vShaderStream.str();
        fragmentCode = fShaderStream.str();
    }
    catch (std::ifstream::failure& e)
    {
        std::cout << "ERROR::SHADER::FILE_NOT_SUCCESSFULLY_READ: " << e.what() << std::endl;
    }
    const char* vShaderCode = vertexCode.c_str();
    const char* fShaderCode = fragmentCode.c_str();
    Shader shader;
    shader.createShader(vShaderCode, fShaderCode);
    return shader;
}
