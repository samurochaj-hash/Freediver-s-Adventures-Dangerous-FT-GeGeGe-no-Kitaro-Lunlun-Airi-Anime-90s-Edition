#ifndef GAME_LOGIC_H
#define GAME_LOGIC_H
#include <stdint.h>
#include <stdbool.h>

typedef struct { int16_t x, y, w, h; } Rect;
typedef struct { int16_t x, y, vx, vy; uint8_t frame; bool active; } Player;
typedef struct { Rect box; bool active; } Treasure;
typedef struct { Rect box; int16_t vx; bool active; } Enemy;
typedef struct {
    Player player;
    Treasure treasures[8];
    Enemy enemies[4];
    uint16_t score;
    uint8_t lives;
    uint16_t air;
    uint8_t stage;
    bool paused;
    bool game_over;
} GameState;

typedef struct {
    int8_t move_x; /* -1 left, 0 neutral, +1 right */
    int8_t move_y; /* -1 up, 0 neutral, +1 down */
    bool action;
    bool flashlight;
    bool pause;
} GameInput;

void game_init(GameState *g);
void game_update(GameState *g, GameInput in);
bool rect_overlap(Rect a, Rect b);
#endif
