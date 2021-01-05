/*
** EPITECH PROJECT, 2019
** Dante's star
** File description:
** cases.c
*/

#include "../include/my.h"

int case_of_up(maze_t *maze, int coord, int width)
{
    maze->map[coord - width - 1] = '*';
    coord =  coord - width - 1;
    maze->D = 0;
    maze->L = 0;
    maze->R = 0;
    maze->U = 0;
    return (coord);
}

int case_of_down(maze_t *maze, int coord, int width)
{
    maze->map[coord + width + 1] = '*';
    coord += width + 1;
    maze->D = 0;
    maze->L = 0;
    maze->R = 0;
    maze->U = 0;
    return (coord);
}

int case_of_right(maze_t *maze, int coord, int width)
{
    maze->map[coord + 1] = '*';
    coord += 1;
    maze->D = 0;
    maze->L = 0;
    maze->R = 0;
    maze->U = 0;
    return (coord);
}

int case_of_left(maze_t *maze, int coord, int width)
{
    maze->map[coord - 1] = '*';
    coord -= 1;
    maze->D = 0;
    maze->L = 0;
    maze->R = 0;
    maze->U = 0;
    return (coord);
}

int move(int width, maze_t *maze, int coord, cell_t **cell)
{
    int tmp;

    if (maze->D == 1 || maze->L == 1 || maze->R == 1 || maze->U == 1) {
        tmp = rand () % (maze->D + maze->U + maze->L + maze->R);
    }
    else {
        coord = stack_pop(&(*cell));
        tmp = 3;
    }
    maze->state = 0;
    return (the_switch(tmp, maze, coord, width));
}