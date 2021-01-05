/*
** EPITECH PROJECT, 2019
** dante's star
** File description:
** my.h
*/

#include "structures.h"
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int my_getnbr(char *);
char *create_perfect_maze(int, maze_t *);
int move(int, maze_t *, int, cell_t **);
char *down(int, int, int, char *);
char *right(int, int, int, char *);
int my_strcmp(char *, char *);
char flag_l(int, maze_t *, int);
char flag_u(int, maze_t *, int);
char flag_r(int, maze_t *, int);
char flag_d(int, maze_t *, int);
int case_of_left(maze_t *, int, int);
int case_of_right(maze_t *, int, int);
int case_of_down(maze_t *, int, int);
int case_of_up(maze_t *, int, int);
int the_switch(int, maze_t *, int, int);
void stack_push(cell_t **, int);
int stack_pop(cell_t **);
void modify_maze(int, int, maze_t *);