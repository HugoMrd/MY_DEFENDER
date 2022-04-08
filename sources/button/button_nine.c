/*
** EPITECH PROJECT, 2022
** button_nine
** File description:
** button_nine
*/

#include "hashtag.h"
#include "csfml.h"

void button_is_clicked_seventesla(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[39].sprite);

    if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
        my_sound("sources/soundeffects/button_click.ogg", 80);
        main->etat.teslaseven = 1;
    }
}

void button_is_clicked_eighttesla(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[39].sprite);

    if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
        my_sound("sources/soundeffects/button_click.ogg", 80);
        main->etat.teslaeight = 1;
    }
}

void button_is_clicked_ninetesla(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[39].sprite);

    if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
        my_sound("sources/soundeffects/button_click.ogg", 80);
        main->etat.teslanine = 1;
    }
}

void button_is_clicked_tentesla(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[39].sprite);

    if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
        my_sound("sources/soundeffects/button_click.ogg", 80);
        main->etat.teslaten = 1;
    }
}

void button_is_clicked_eleventesla(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[39].sprite);

    if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
        my_sound("sources/soundeffects/button_click.ogg", 80);
        main->etat.teslaeleven = 1;
    }
}
