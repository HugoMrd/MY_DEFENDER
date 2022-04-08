/*
** EPITECH PROJECT, 2022
** button_five
** File description:
** button_five
*/

#include "hashtag.h"
#include "csfml.h"

void button_is_clicked_spawn_tower_twelve(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect_twelve = sfSprite_getGlobalBounds(menu[85].sprite);

    if (main->etat.towertwelve == 1) {
        if (sfFloatRect_contains(&rect_twelve, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/build.ogg", 80);
            sfSprite_setPosition(menu[84].sprite, (sfVector2f) {menu[84].
                    ttwelve_pos.x, menu[84].ttwelve_pos.y});
        }
    }
}

void button_is_clicked_spawn_tower(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[37].sprite);

    if (main->etat.tower == 1) {
        if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/build.ogg", 80);
            sfSprite_setPosition(menu[38].sprite, (sfVector2f) {menu[38].
                    t_pos.x,menu[38].t_pos.y});
        }
    }
}

void button_is_clicked_spawn_tesla_twelve(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect_twelve = sfSprite_getGlobalBounds(menu[65].sprite);

    if (main->etat.teslatwelve == 1) {
        if (sfFloatRect_contains(&rect_twelve, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/build.ogg", 80);
            sfSprite_setPosition(menu[64].sprite, (sfVector2f) {menu[64].
tesla_spawntwelve_pos.x, menu[64].tesla_spawntwelve_pos.y});
        }
    }
}

void button_is_clicked_spawn_tesla(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[41].sprite);

    if (main->etat.tesla == 1) {
        if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/build.ogg", 80);
            sfSprite_setPosition(menu[40].sprite, (sfVector2f) {menu[40].
                    tesla_spawn_pos.x, menu[40].tesla_spawn_pos.y});
        }
    }
}
