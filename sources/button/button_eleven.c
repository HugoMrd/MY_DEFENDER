/*
** EPITECH PROJECT, 2022
** button_eleven
** File description:
** button_eleven
*/

#include "hashtag.h"
#include "csfml.h"

void button_is_clicked_spawn_tesla_seven(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect_seven = sfSprite_getGlobalBounds(menu[55].sprite);

    if (main->etat.teslaseven == 1) {
        if (sfFloatRect_contains(&rect_seven, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/build.ogg", 80);
            sfSprite_setPosition(menu[54].sprite, (sfVector2f) {menu[54].
                    tesla_spawnseven_pos.x, menu[54].tesla_spawnseven_pos.y});
        }
    }
}

void button_is_clicked_spawn_tesla_eight(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect_eight = sfSprite_getGlobalBounds(menu[57].sprite);

    if (main->etat.teslaeight == 1) {
        if (sfFloatRect_contains(&rect_eight, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/build.ogg", 80);
            sfSprite_setPosition(menu[56].sprite, (sfVector2f) {menu[56].
                    tesla_spawneight_pos.x, menu[56].tesla_spawneight_pos.y});
        }
    }
}

void button_is_clicked_spawn_tesla_nine(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect_nine = sfSprite_getGlobalBounds(menu[59].sprite);

    if (main->etat.teslanine == 1) {
        if (sfFloatRect_contains(&rect_nine, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/build.ogg", 80);
            sfSprite_setPosition(menu[58].sprite, (sfVector2f) {menu[58].
                    tesla_spawnnine_pos.x, menu[58].tesla_spawnnine_pos.y});
        }
    }
}

void button_is_clicked_spawn_tesla_ten(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{

    sfFloatRect rect_ten = sfSprite_getGlobalBounds(menu[61].sprite);

    if (main->etat.teslaten == 1) {
        if (sfFloatRect_contains(&rect_ten, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/build.ogg", 80);
            sfSprite_setPosition(menu[60].sprite, (sfVector2f) {menu[60].
                    tesla_spawnten_pos.x, menu[60].tesla_spawnten_pos.y});
        }
    }
}

void button_is_clicked_spawn_tesla_eleven(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect_eleven = sfSprite_getGlobalBounds(menu[63].sprite);

    if (main->etat.teslaeleven == 1) {
        if (sfFloatRect_contains(&rect_eleven, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/build.ogg", 80);
            sfSprite_setPosition(menu[62].sprite, (sfVector2f) {menu[62].
tesla_spawneleven_pos.x, menu[62].tesla_spawneleven_pos.y});
        }
    }
}
