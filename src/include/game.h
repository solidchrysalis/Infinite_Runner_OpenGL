#ifndef GAME_H
#define GAME_H

enum GameState {
    GAME_ACTIVE,
    GAME_END
};

class Game {
    public:
        GameState state;
};

#endif
