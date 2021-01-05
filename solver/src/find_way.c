/*
** EPITECH PROJECT, 2019
** solver
** File description:
** find_way.c
*/

#include "../include/my.h"

int move(maze_t *maze, int coord, cell_t **cell)
{
    if (maze->R == 1)
        return (case_right(&(*cell), coord, maze));
    if (maze->U == 1)
        return (case_up(&(*cell), coord, maze));
    if (maze->L == 1)
        return (case_left(&(*cell), coord, maze));
    if (maze->D == 1)
        return (case_down(&(*cell), coord, maze));
    maze->map[coord] = '1';
    return (coord);
}

int find_way(maze_t *maze, int coord, cell_t *cell)
{
    stack_push(&cell, coord);
    for (; coord != maze->space - 1;) {
        if (cell == NULL) {
            write (1, "no solution found\n", 18);
            return (1);
        }
        coord = stack_pop(&cell);
        if (coord - 1 >= 0 && maze->map[coord - 1] == '*')
            maze->L = 1;
        if (maze->map[coord + 1] == '*')
            maze->R = 1;
        if (coord + maze->width + 1 < maze->space &&
        maze->map[coord + maze->width + 1] == '*')
            maze->D = 1;
        if (coord - maze->width - 1 >= 0 &&
        maze->map[coord - maze->width - 1] == '*')
            maze->U = 1;
        coord = move(maze, coord, &cell);
    }
    return (0);
}