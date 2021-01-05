/*
** EPITECH PROJECT, 2019
** solver
** File description:
** my.h
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "structures.h"

int my_strlen(char *str);
void my_putchar(char c);
void my_putstr(char const *str);
char copy_the_map(char *file, int fd, maze_t *maze, int coord);
int find_way(maze_t *maze, int coord, cell_t *cell);
void stack_push(cell_t **cell, int coord);
int stack_pop(cell_t **cell);
int case_up(cell_t **cell, int coord, maze_t *maze);
int case_down(cell_t **cell, int coord, maze_t *maze);
int case_left(cell_t **cell, int coord, maze_t *maze);
int case_right(cell_t **cell, int coord, maze_t *maze);