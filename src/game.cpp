#include "game.h"
#include "game_object.h"
#include "resource_manager.h"

GameObject *gameFloor;

void Game::initialize() {
    gameFloor = new GameObject("floor");
}

void Game::render() {
 
}

void Game::update(float deltaTime) {

}
