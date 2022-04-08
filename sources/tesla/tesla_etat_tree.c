/*
** EPITECH PROJECT, 2022
** tree
** File description:
** tree
*/

#include "hashtag.h"
#include "csfml.h"

void tesla_next_one(main_t *main, sprite_t *menu, sfVector2i save_curs)
{
    if (main->etat.teslanine == 1) {
        menu[39].tesla_pos.x = save_curs.x - 50;
        menu[39].tesla_pos.y = save_curs.y - 50;
        sfSprite_setPosition(menu[39].sprite, (sfVector2f) {menu[39].
                tesla_pos.x, menu[39].tesla_pos.y});
    }
}

void tesla_next_two(main_t *main, sprite_t *menu, sfVector2i save_curs)
{
    if (main->etat.teslaeight == 1) {
        menu[39].tesla_pos.x = save_curs.x - 50;
        menu[39].tesla_pos.y = save_curs.y - 50;
        sfSprite_setPosition(menu[39].sprite, (sfVector2f) {menu[39].
                tesla_pos.x, menu[39].tesla_pos.y});
    }
}

void tesla_next_tree(main_t *main, sprite_t *menu, sfVector2i save_curs)
{
    if (main->etat.teslathree == 1) {
        menu[39].tesla_pos.x = save_curs.x - 50;
        menu[39].tesla_pos.y = save_curs.y - 50;
        sfSprite_setPosition(menu[39].sprite, (sfVector2f) {menu[39].
                tesla_pos.x, menu[39].tesla_pos.y});
    }
}

void tesla_next_four(main_t *main, sprite_t *menu, sfVector2i save_curs)
{
    if (main->etat.tesla == 1) {
        menu[39].tesla_pos.x = save_curs.x - 50;
        menu[39].tesla_pos.y = save_curs.y - 50;
        sfSprite_setPosition(menu[39].sprite, (sfVector2f) {menu[39].
                tesla_pos.x, menu[39].tesla_pos.y});
    }
}
