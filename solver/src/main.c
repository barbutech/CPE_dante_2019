/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** main.c
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    if (ac != 2)
        return (84);
    int fd = open (av[1], O_RDONLY);
    int coord = 0;

    if (fd == -1)
        return (84);
    maze_t *maze = malloc(sizeof(maze_t));
    maze->L = 0;
    maze->D = 0;
    maze->R = 0;
    maze->U = 0;
    maze->state = 0;
    maze->width = 0;
    copy_the_map(av[1], fd, maze, coord);
    free(maze->map);
    free(maze);
    return (0);
}