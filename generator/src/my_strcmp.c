/*
** EPITECH PROJECT, 2019
** Dante's star
** File description:
** my_strcmp.c
*/

#include "../include/my.h"

int my_strcmp(char *s1, char *s2)
{
    int size_s1 = 0;
    int size_s2 = 0;
    int size_ret = 0;
    int count = 0;
    int tmp = 0;

    for (; s1[count] != '\0'; count++)
        size_s1 += s1[count] - 48;
    for (; s2[tmp] != '\0'; tmp++)
        size_s2 += s2[tmp] - 48;
    if (tmp > count)
        return (-1);
    if (tmp < count)
        return (1);
    size_ret = size_s1 - size_s2;
    return (size_ret);
}