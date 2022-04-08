/*
** EPITECH PROJECT, 2021
** my_putchar
** File description:
** my_putchar
*/

#include "hashtag.h"

int my_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}
