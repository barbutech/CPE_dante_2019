/*
** EPITECH PROJECT, 2019
** solver
** File description:
** my_strlen.c
*/

int my_strlen(char *str)
{
    int c = 0;

    while (str[c] != '\n') {
    c++;
    }
    return (c);
}