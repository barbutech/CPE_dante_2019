/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** cases.c
*/

#include "../include/my.h"

int case_up(cell_t **cell, int coord, maze_t *maze)
{
    stack_push(&(*cell), coord);
    maze->map[coord - maze->width - 1] = 'o';
    stack_push(&(*cell), coord - maze->width - 1);
    maze->D = 0;
    maze->L = 0;
    maze->R = 0;
    maze->U = 0;
    return (coord -maze->width - 1);
}

int case_right(cell_t **cell, int coord, maze_t *maze)
{
    stack_push(&(*cell), coord);
    maze->map[coord + 1] = 'o';
    stack_push(&(*cell), coord + 1);
    maze->D = 0;
    maze->L = 0;
    maze->R = 0;
    maze->U = 0;
    return (coord + 1);
}

int case_left(cell_t **cell, int coord, maze_t *maze)
{
    stack_push(&(*cell), coord);
    maze->map[coord - 1] = 'o';
    stack_push(&(*cell), coord - 1);
    maze->D = 0;
    maze->L = 0;
    maze->R = 0;
    maze->U = 0;
    return (coord - 1);
}

int case_down(cell_t **cell, int coord, maze_t *maze)
{
    stack_push(&(*cell), coord);
    maze->map[coord + maze->width +  1] = 'o';
    stack_push(&(*cell), coord + maze->width + 1);
    maze->D = 0;
    maze->L = 0;
    maze->R = 0;
    maze->U = 0;
    return (coord + maze->width + 1);
}