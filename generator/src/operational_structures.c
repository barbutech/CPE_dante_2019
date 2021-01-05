/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** operational_structures.c
*/

#include "../include/my.h"

void stack_push(cell_t **cell, int coord)
{
    cell_t *new = malloc(sizeof(cell_t));

    new->coord = coord;
    if ((*cell) == NULL) {
        new->next = NULL;
        new->prev = NULL;
        (*cell) = new;
        return;
    }
    new->next = NULL;
    new->prev = (*cell);
    new->prev->next = new;
    (*cell) = new;
    return;
}

int stack_pop(cell_t **cell)
{
    if (!(*cell))
        return (-1);
    int coord = (*cell)->coord;

    if ((*cell)->prev == NULL) {
        (*cell) = NULL;
        return (coord);
    }
    (*cell) = (*cell)->prev;
    free((*cell)->next);
    return (coord);
}

void modify_maze(int space, int width, maze_t *maze)
{
    maze->map[space - 2] = '*';
    maze->map[space - width - 4] = 'X';
    maze->map[space - width - 3] = '*';
    maze->map[space - 3] = '*';
}