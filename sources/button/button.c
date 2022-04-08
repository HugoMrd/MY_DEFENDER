/*
** EPITECH PROJECT, 2022
** create button
** File description:
** create button
*/

#include "hashtag.h"
#include "csfml.h"

void button_is_clicked(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[4].sprite);

    if (main->etat.game == 0) {
        if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/button_click.ogg", 80);
            main->etat.game = 4;
        }
    }
}

void button_is_clicked_exit(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[3].sprite);

    if (main->etat.game == 0) {
        if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/button_click.ogg", 80);
            main->etat.game = 3;
        }
    }
}

void button_is_clicked_back(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[8].sprite);

    if ((main->etat.game != 0 && main->etat.game != 7 && main->etat.game != 5)
|| main->etat.game_finish == 69) {
        if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/button_click.ogg", 80);
            main->etat.game = 0;
        }
    }
}

void button_is_clicked_back_setting(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[34].sprite);

    if (main->etat.game == 7) {
        if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/button_click.ogg", 80);
            main->etat.game = 6;
        }
    }
}

void button_is_clicked_option(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[2].sprite);

    if (main->etat.game == 0) {
        if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/button_click.ogg", 80);
            main->etat.game = 2;
        }
    }
}
