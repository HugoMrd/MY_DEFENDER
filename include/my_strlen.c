/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** my_strlen
*/

#include "hashtag.h"

int my_strlen(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i = i + 1;
    return i;
}
