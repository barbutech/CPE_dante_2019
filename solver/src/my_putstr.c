/*
** EPITECH PROJECT, 2019
** solver
** File description:
** my_putstr.c
*/

#include "../include/my.h"

void my_putstr(char const *str)
{
    for (int c = 0; str[c] != '\0'; c++)
    my_putchar(str[c]);
}