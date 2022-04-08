/*
** EPITECH PROJECT, 2022
** button_eleven
** File description:
** button_eleven
*/

#include "hashtag.h"
#include "csfml.h"

void button_is_clicked_resume(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[29].sprite);

    if (main->etat.game == 6) {
        if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/button_click.ogg", 80);
            main->etat.game = 5;
        }
    }
}

void button_is_clicked_tower(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[36].sprite);

    if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
        my_sound("sources/soundeffects/button_click.ogg", 80);
        main->etat.tower = 1;
    }
}

void button_is_clicked_sectower(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[36].sprite);

    if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
        my_sound("sources/soundeffects/button_click.ogg", 80);
        main->etat.towersec = 1;
    }
}

void button_is_clicked_threetower(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[36].sprite);

    if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
        my_sound("sources/soundeffects/button_click.ogg", 80);
        main->etat.towerthree = 1;
    }
}

void button_is_clicked_twelvetesla(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[39].sprite);

    if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
        my_sound("sources/soundeffects/button_click.ogg", 80);
        main->etat.teslatwelve = 1;
    }
}
