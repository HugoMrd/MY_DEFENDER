/*
** EPITECH PROJECT, 2022
** button_eight
** File description:
** button_eight
*/

#include "hashtag.h"
#include "csfml.h"

void button_is_clicked_sectesla(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[39].sprite);

    if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
        my_sound("sources/soundeffects/button_click.ogg", 80);
        main->etat.teslasec = 1;
    }
}

void button_is_clicked_threetesla(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[39].sprite);

    if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
        my_sound("sources/soundeffects/button_click.ogg", 80);
        main->etat.teslathree = 1;
    }
}

void button_is_clicked_fourtesla(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[39].sprite);

    if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
        my_sound("sources/soundeffects/button_click.ogg", 80);
        main->etat.teslafour = 1;
    }
}

void button_is_clicked_fivetesla(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[39].sprite);

    if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
        my_sound("sources/soundeffects/button_click.ogg", 80);
        main->etat.teslafive = 1;
    }
}

void button_is_clicked_sixtesla(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[39].sprite);

    if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
        my_sound("sources/soundeffects/button_click.ogg", 80);
        main->etat.teslasix = 1;
    }
}
