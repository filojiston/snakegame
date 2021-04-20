#pragma once

#include <SDL2\SDL.h>

#include "linknode.h"
#include "direction.h"

typedef struct Snake
{
    LinkNode *head;
    LinkNode *tail;
    Direction direction;
    int size;
} Snake;

typedef struct Food Food;

Snake *create_snake(int x, int y);
void destroy_snake(Snake *snake);
void draw_snake(SDL_Renderer *renderer, Snake *s);
void move_snake(Snake *s, Direction dir);
void update_snake(Snake *s);
int eat_food(Snake *s, Food *food);
