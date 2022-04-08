/*
** EPITECH PROJECT, 2022
** extend_button
** File description:
** extend_button
*/

#include "hashtag.h"

void extend_clicked_up_frame(main_t *main)
{
    my_sound("sources/soundeffects/button_click.ogg", 80);
    if (main->etat.frame <= 175)
        main->etat.frame += 5;
}

void extend_clicked_up_volume(main_t *main)
{
    my_sound("sources/soundeffects/button_click.ogg", 80);
    if (main->sound.volume <= 95)
        main->sound.volume += 5;
}

void extend_clicked_down_volume(main_t *main)
{
    my_sound("sources/soundeffects/button_click.ogg", 80);
    if (main->sound.volume >= 5)
        main->sound.volume -= 5;
}

void extend_clicked_down_frame(main_t *main)
{
    my_sound("sources/soundeffects/button_click.ogg", 80);
    if (main->etat.frame >= 10)
        main->etat.frame -= 5;
}
