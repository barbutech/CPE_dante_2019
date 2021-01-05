/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** flags.c
*/

#include "../include/my.h"

char flag_l(int coord, maze_t *maze, int width)
{
    if ((coord - 2 < 0  || maze->map[coord - 2] != '*') &&
    (coord + width > maze->space || maze->map[coord + width] != '*') &&
    (coord - width - 2 < 0 || maze->map[coord - width - 2] != '*'))
        maze->L = 1;
    return ('1');
}

char flag_r(int coord, maze_t *maze, int width)
{
    if ((coord + 2 > maze->space || maze->map[coord + 2] != '*') &&
    (coord - width < 0 || maze->map[coord - width] != '*') &&
    (coord + width + 2 > maze->space || maze->map[coord + width + 2] != '*'))
        maze->R = 1;
    return ('1');
}

char flag_u(int coord, maze_t *maze, int width)
{
    if (maze->map[coord - width] != '*' &&
    (coord - width - 2 < 0 || maze->map[coord - width - 2] != '*') &&
    (coord - 2 * width - 2 < 0 || maze->map[coord - 2 * width - 2] != '*'))
        maze->U = 1;
        return ('1');
}

char flag_d(int coord, maze_t *maze, int width)
{
    if (maze->map[coord + width] != '*' && maze->map[coord + width + 2] != '*')
        if (coord + 2 * width + 2 > maze->space - 1 ||
        maze->map[coord + 2 * width + 2] != '*')
            maze->D = 1;
    return ('1');
}

int the_switch(int tmp, maze_t *maze, int coord, int width)
{
    switch (tmp)
    {
        case (0) :
            if (maze->R == 1) return (case_of_right(maze, coord, width));
        case (1) :
            if (maze->L == 1) return (case_of_left(maze, coord, width));
        case (2) :
            if (maze->U == 1) return (case_of_up(maze, coord, width));
        case (3) :
            if (maze->D == 1) return (case_of_down(maze, coord, width));
        default :
            maze->state = 1;
            break;
    }
    maze->D = 0;
    maze->L = 0;
    maze->R = 0;
    maze->U = 0;
    return (coord);
}