/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** structures.h
*/

#ifndef stru_h
#define stru_h

struct cell {
    int coord;
    struct cell *next;
    struct cell *prev;
};
typedef struct cell cell_t;

struct maze {
    int space;
    int width;
    char *map;
    int L;
    int R;
    int D;
    int U;
    int state;
};
typedef struct maze maze_t;

#endif