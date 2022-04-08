/*
** EPITECH PROJECT, 2022
** button_six
** File description:
** button_six
*/

#include "hashtag.h"
#include "csfml.h"

void button_is_clicked_fourtower(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[36].sprite);

    if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
        my_sound("sources/soundeffects/button_click.ogg", 80);
        main->etat.towerfour = 1;
    }
}

void button_is_clicked_fivetower(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[36].sprite);

    if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
        my_sound("sources/soundeffects/button_click.ogg", 80);
        main->etat.towerfive = 1;
    }
}

void button_is_clicked_sixtower(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[36].sprite);

    if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
        my_sound("sources/soundeffects/button_click.ogg", 80);
        main->etat.towersix = 1;
    }
}

void button_is_clicked_seventower(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[36].sprite);

    if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
        my_sound("sources/soundeffects/button_click.ogg", 80);
        main->etat.towerseven = 1;
    }
}

void button_is_clicked_eighttower(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[36].sprite);

    if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
        my_sound("sources/soundeffects/button_click.ogg", 80);
        main->etat.towereight = 1;
    }
}
