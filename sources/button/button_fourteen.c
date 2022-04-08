/*
** EPITECH PROJECT, 2022
** button_fourteen
** File description:
** button_fourteen
*/

#include "hashtag.h"
#include "csfml.h"

void button_is_clicked_spawn_tower_seven(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect_seven = sfSprite_getGlobalBounds(menu[75].sprite);

    if (main->etat.towerseven == 1) {
        if (sfFloatRect_contains(&rect_seven, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/build.ogg", 80);
            sfSprite_setPosition(menu[74].sprite, (sfVector2f) {menu[74].
                    tseven_pos.x, menu[74].tseven_pos.y});
        }
    }
}

void button_is_clicked_spawn_tower_eight(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect_eight = sfSprite_getGlobalBounds(menu[77].sprite);

    if (main->etat.towereight == 1) {
        if (sfFloatRect_contains(&rect_eight, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/build.ogg", 80);
            sfSprite_setPosition(menu[76].sprite, (sfVector2f) {menu[76].
                    teight_pos.x, menu[76].teight_pos.y});
        }
    }
}

void button_is_clicked_spawn_tower_nine(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect_nine = sfSprite_getGlobalBounds(menu[79].sprite);

    if (main->etat.towernine == 1) {
        if (sfFloatRect_contains(&rect_nine, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/build.ogg", 80);
            sfSprite_setPosition(menu[78].sprite, (sfVector2f) {menu[78].
                    tnine_pos.x, menu[78].tnine_pos.y});
        }
    }
}

void button_is_clicked_spawn_tower_ten(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect_ten = sfSprite_getGlobalBounds(menu[81].sprite);

    if (main->etat.towerten == 1) {
        if (sfFloatRect_contains(&rect_ten, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/build.ogg", 80);
            sfSprite_setPosition(menu[80].sprite, (sfVector2f) {menu[80].
                    tten_pos.x, menu[80].tten_pos.y});
        }
    }
}

void button_is_clicked_spawn_tower_eleven(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect_eleven = sfSprite_getGlobalBounds(menu[83].sprite);

    if (main->etat.towereleven == 1) {
        if (sfFloatRect_contains(&rect_eleven, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/build.ogg", 80);
            sfSprite_setPosition(menu[82].sprite, (sfVector2f) {menu[82].
                    televen_pos.x, menu[82].televen_pos.y});
        }
    }
}
