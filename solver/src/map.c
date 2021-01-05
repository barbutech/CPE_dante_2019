/*
** EPITECH PROJECT, 2019
** solver
** File description:
** map_filler
*/

#include "../include/my.h"

char copy_the_map(char *file, int fd, maze_t *maze, int coord)
{
    struct stat size;
    cell_t *cell = NULL;

    stat(file, &size);
    maze->map = malloc(size.st_size + 1);
    read(fd, maze->map, size.st_size);
    maze->map[size.st_size] = '\0';
    for (; maze->map[maze->width] != '\n'; maze->width++);
    maze->space = size.st_size;
    if (maze->map[0] == 'X' || maze->map[maze->space - 1] == 'X') {
        write(1, "no solution found\n", 18);
        return (0);
    }
    maze->map[0] = 'o';
    if (find_way(maze, coord, cell) != 1) {
        for (int count = 0; maze->map[count] != '\0'; count++)
        maze->map[count] == '1' ?maze->map[count] = '*' : 0;
    write (1, maze->map, size.st_size);
    }
    return ('1');
}