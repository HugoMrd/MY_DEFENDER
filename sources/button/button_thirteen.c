/*
** EPITECH PROJECT, 2022
** button_thirteen
** File description:
** button_thirteen
*/

#include "hashtag.h"
#include "csfml.h"

void button_is_clicked_spawn_tower_sec(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect_sec = sfSprite_getGlobalBounds(menu[44].sprite);

    if (main->etat.towersec == 1) {
        if (sfFloatRect_contains(&rect_sec, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/build.ogg", 80);
            sfSprite_setPosition(menu[45].sprite, (sfVector2f)
{menu[45].tsec_pos.x, menu[45].tsec_pos.y});
        }
    }
}

void button_is_clicked_spawn_tower_three(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect_three = sfSprite_getGlobalBounds(menu[67].sprite);

    if (main->etat.towerthree == 1) {
        if (sfFloatRect_contains(&rect_three, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/build.ogg", 80);
            sfSprite_setPosition(menu[66].sprite, (sfVector2f) {menu[66].
tthree_pos.x, menu[66].tthree_pos.y});
        }
    }
}

void button_is_clicked_spawn_tower_four(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect_four = sfSprite_getGlobalBounds(menu[69].sprite);

    if (main->etat.towerfour == 1) {
        if (sfFloatRect_contains(&rect_four, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/build.ogg", 80);
            sfSprite_setPosition(menu[68].sprite, (sfVector2f) {menu[68].
tfour_pos.x, menu[68].tfour_pos.y});
        }
    }
}

void button_is_clicked_spawn_tower_five(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect_five = sfSprite_getGlobalBounds(menu[71].sprite);

    if (main->etat.towerfive == 1) {
        if (sfFloatRect_contains(&rect_five, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/build.ogg", 80);
            sfSprite_setPosition(menu[70].sprite, (sfVector2f) {menu[70].
tfive_pos.x, menu[70].tfive_pos.y});
        }
    }
}

void button_is_clicked_spawn_tower_six(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect_six = sfSprite_getGlobalBounds(menu[73].sprite);

    if (main->etat.towersix == 1) {
        if (sfFloatRect_contains(&rect_six, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/build.ogg", 80);
            sfSprite_setPosition(menu[72].sprite, (sfVector2f) {menu[72].
tsix_pos.x, menu[72].tsix_pos.y});
        }
    }
}
