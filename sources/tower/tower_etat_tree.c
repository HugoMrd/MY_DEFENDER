/*
** EPITECH PROJECT, 2022
** tree
** File description:
** tree
*/

#include "hashtag.h"
#include "csfml.h"

void tower_next_one(main_t *main, sprite_t *menu, sfVector2i save_curs)
{
    if (main->etat.towertwelve == 1) {
        menu[36].tower_pos.x = save_curs.x - 50;
        menu[36].tower_pos.y = save_curs.y - 50;
        sfSprite_setPosition(menu[36].sprite, (sfVector2f) {menu[36].
                tower_pos.x, menu[36].tower_pos.y});
    }
}

void tower_next_two(main_t *main, sprite_t *menu, sfVector2i save_curs)
{
    if (main->etat.towernine == 1) {
        menu[36].tower_pos.x = save_curs.x - 50;
        menu[36].tower_pos.y = save_curs.y - 50;
        sfSprite_setPosition(menu[36].sprite, (sfVector2f) {menu[36].
                tower_pos.x, menu[36].tower_pos.y});
    }
}

void tower_next_tree(main_t *main, sprite_t *menu, sfVector2i save_curs)
{
    if (main->etat.towersix == 1) {
        menu[36].tower_pos.x = save_curs.x - 50;
        menu[36].tower_pos.y = save_curs.y - 50;
        sfSprite_setPosition(menu[36].sprite, (sfVector2f) {menu[36].
                tower_pos.x, menu[36].tower_pos.y});
    }
}

void tower_next_four(main_t *main, sprite_t *menu, sfVector2i save_curs)
{
    if (main->etat.towerthree == 1) {
        menu[36].tower_pos.x = save_curs.x - 50;
        menu[36].tower_pos.y = save_curs.y - 50;
        sfSprite_setPosition(menu[36].sprite, (sfVector2f) {menu[36].
                tower_pos.x, menu[36].tower_pos.y});
    }
}
