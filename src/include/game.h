#ifndef GAME_H
#define GAME_H

#include "game_object.h"
#include <vector>

enum GameState {
    GAME_ACTIVE,
    GAME_END
};

class Game {
    public:
        GameState state;
        std::vector<GameObject> objects;

        void initialize();

        void render();

        void update(float deltaTime);
};

#endif
