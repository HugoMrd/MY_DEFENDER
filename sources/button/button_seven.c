/*
** EPITECH PROJECT, 2022
** button_seven
** File description:
** button_seven
*/

#include "hashtag.h"
#include "csfml.h"

void button_is_clicked_ninetower(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[36].sprite);

    if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
        my_sound("sources/soundeffects/button_click.ogg", 80);
        main->etat.towernine = 1;
    }
}

void button_is_clicked_tentower(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[36].sprite);

    if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
        my_sound("sources/soundeffects/button_click.ogg", 80);
        main->etat.towerten = 1;
    }
}

void button_is_clicked_eleventower(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[36].sprite);

    if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
        my_sound("sources/soundeffects/button_click.ogg", 80);
        main->etat.towereleven = 1;
    }
}

void button_is_clicked_twelvetower(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[36].sprite);

    if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
        my_sound("sources/soundeffects/button_click.ogg", 80);
        main->etat.towertwelve = 1;
    }
}

void button_is_clicked_tesla(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[39].sprite);

    if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
        my_sound("sources/soundeffects/button_click.ogg", 80);
        main->etat.tesla = 1;
    }
}
