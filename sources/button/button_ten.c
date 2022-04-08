/*
** EPITECH PROJECT, 2022
** button_ten
** File description:
** button_ten
*/

#include "hashtag.h"
#include "csfml.h"

void button_is_clicked_spawn_tesla_sec(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect_sec = sfSprite_getGlobalBounds(menu[42].sprite);

    if (main->etat.teslasec == 1) {
        if (sfFloatRect_contains(&rect_sec, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/build.ogg", 80);
            sfSprite_setPosition(menu[43].sprite, (sfVector2f) {menu[43].
                    tesla_spawnsec_pos.x, menu[43].tesla_spawnsec_pos.y});
        }
    }
}

void button_is_clicked_spawn_tesla_three(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect_three = sfSprite_getGlobalBounds(menu[46].sprite);

    if (main->etat.teslathree == 1) {
        if (sfFloatRect_contains(&rect_three, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/build.ogg", 80);
            sfSprite_setPosition(menu[47].sprite, (sfVector2f) {menu[47].
                    tesla_spawnthree_pos.x, menu[47].tesla_spawnthree_pos.y});
        }
    }
}

void button_is_clicked_spawn_tesla_four(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect_four = sfSprite_getGlobalBounds(menu[49].sprite);

    if (main->etat.teslafour == 1) {
        if (sfFloatRect_contains(&rect_four, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/build.ogg", 80);
            sfSprite_setPosition(menu[48].sprite, (sfVector2f) {menu[48].
                    tesla_spawnfour_pos.x, menu[48].tesla_spawnfour_pos.y});
        }
    }
}

void button_is_clicked_spawn_tesla_five(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect_five = sfSprite_getGlobalBounds(menu[50].sprite);

    if (main->etat.teslafive == 1) {
        if (sfFloatRect_contains(&rect_five, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/build.ogg", 80);
            sfSprite_setPosition(menu[51].sprite, (sfVector2f) {menu[51].
                    tesla_spawnfive_pos.x, menu[51].tesla_spawnfive_pos.y});
        }
    }
}

void button_is_clicked_spawn_tesla_six(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect_six = sfSprite_getGlobalBounds(menu[52].sprite);

    if (main->etat.teslasix == 1) {
        if (sfFloatRect_contains(&rect_six, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/build.ogg", 80);
            sfSprite_setPosition(menu[53].sprite, (sfVector2f) {menu[53].
                    tesla_spawnsix_pos.x, menu[53].tesla_spawnsix_pos.y});
        }
    }
}
