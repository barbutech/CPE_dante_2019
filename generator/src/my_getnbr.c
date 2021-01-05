/*
** EPITECH PROJECT, 2019
** Dante's_star
** File description:
** my_getnbr.c
*/

int my_getnbr(char *str)
{
    int result = 0;

    if (str[0] == '-')
        return (-1);
    for (int count = 0; str[count] != '\0'; count++)
        result = result * 10 + (str[count] - 48);
    return (result);
}