/*
** EPITECH PROJECT, 2021
** my_prog
** File description:
** my_prog
*/

#include "hashtag.h"

int my_h(int ac, char **av)
{
    main_t main;

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        main_dash_h();
    else
        window_disp(&main);
    return 0;
}
