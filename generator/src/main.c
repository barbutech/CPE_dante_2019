/*
** EPITECH PROJECT, 2019
** dante's star
** File description:
** main.c
*/

#include "../include/my.h"

maze_t *create_struct(int space)
{
    maze_t *maze = malloc(sizeof(maze_t));

    maze->D = 0;
    maze->L = 0;
    maze->R = 0;
    maze->U = 0;
    maze->state = 0;
    maze->space = space;
    return (maze);
}

char *create_map(int space, int length, int width, char **argv)
{
    char *map = malloc(sizeof(char) * space);

    memset(map, 'X', (space));
    map[space - 1] = '\0';
    map[width] = '\n';
    for (int count = 1; count < length - 1; count++)
        map[width + (width * count) + count] = '\n';
    map[0] = '*';
    return (map);
}

char *create_perfect_maze(int width, maze_t *maze)
{
    int coord = 0;
    cell_t *cell = NULL;

    stack_push(&cell, coord);
    for (; cell != NULL;) {
        coord = cell->coord;
        if (coord - 1 >= 0 && maze->map[coord - 1] == 'X')
            flag_l(coord, maze, width);
        if (maze->map[coord + 1] == 'X')
            flag_r(coord, maze, width);
        if (coord + width + 1 < maze->space &&
        maze->map[coord + width + 1] == 'X')
            flag_d(coord, maze, width);
        if (coord - width - 1 >= 0 && maze->map[coord - width - 1] == 'X')
            flag_u(coord, maze, width);
        coord = move(width, maze, coord, &cell);
        if (maze->state == 0)
            stack_push(&cell, coord);
    }
    return (maze->map);
}

char imperfect_maze(maze_t *maze)
{
    for (int count = 1; maze->map[count] != '\0'; count++) {
        if (maze->map[count] == '*' && maze->map[count + 1] == 'X' &&
        maze->map[count + 2] == '*') {
            maze->map[count + 1] = '*';
            return ('1');
        }
    }
}

int main(int argc, char *argv[])
{
    if (argc < 3 || argc > 4)
        return (84);
    int length = my_getnbr(argv[2]);
    int width = my_getnbr(argv[1]);
    int space = length * width + length;
    maze_t *maze = create_struct(space);
    maze->map = create_map(space, length, width, argv);
    srand(time(NULL));
    if (argc == 4 && my_strcmp("perfect", argv[3]) != 0) return (84);
        create_perfect_maze(width, maze);
    if (argc == 3) imperfect_maze(maze);
    if (maze->map[space - 2] == 'X')
        modify_maze(space, width, maze);
    write(1, maze->map, space - 1);
    free(maze->map);
    free(maze);
    return 0;
}