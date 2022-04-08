/*
** EPITECH PROJECT, 2022
** tesla_etat_one
** File description:
** tesla_etat_one
*/

#include "hashtag.h"
#include "csfml.h"

void tesla_etat_one(main_t *main, sprite_t *menu)
{
    sfVector2i save_curs = sfMouse_getPositionRenderWindow
        (main->my_window.window);

    if (main->etat.teslaeleven == 1) {
        menu[39].tesla_pos.x = save_curs.x - 50;
        menu[39].tesla_pos.y = save_curs.y - 50;
        sfSprite_setPosition(menu[39].sprite, (sfVector2f) {menu[39].
                tesla_pos.x, menu[39].tesla_pos.y});
    }
    if (main->etat.teslatwelve == 1) {
        menu[39].tesla_pos.x = save_curs.x - 50;
        menu[39].tesla_pos.y = save_curs.y - 50;
        sfSprite_setPosition(menu[39].sprite, (sfVector2f) {menu[39].
                tesla_pos.x, menu[39].tesla_pos.y});
    }
    tesla_next_one(main, menu, save_curs);
}

void tesla_etat_two(main_t *main, sprite_t *menu)
{
    sfVector2i save_curs = sfMouse_getPositionRenderWindow
        (main->my_window.window);

    if (main->etat.teslaten == 1) {
        menu[39].tesla_pos.x = save_curs.x - 50;
        menu[39].tesla_pos.y = save_curs.y - 50;
        sfSprite_setPosition(menu[39].sprite, (sfVector2f) {menu[39].
                tesla_pos.x, menu[39].tesla_pos.y});
    }
    if (main->etat.teslaseven == 1) {
        menu[39].tesla_pos.x = save_curs.x - 50;
        menu[39].tesla_pos.y = save_curs.y - 50;
        sfSprite_setPosition(menu[39].sprite, (sfVector2f) {menu[39].
                tesla_pos.x, menu[39].tesla_pos.y});
    }
    tesla_next_two(main, menu, save_curs);
}

void tesla_etat_three(main_t *main, sprite_t *menu)
{
    sfVector2i save_curs = sfMouse_getPositionRenderWindow
        (main->my_window.window);

    if (main->etat.teslafive == 1) {
        menu[39].tesla_pos.x = save_curs.x - 50;
        menu[39].tesla_pos.y = save_curs.y - 50;
        sfSprite_setPosition(menu[39].sprite, (sfVector2f) {menu[39].
                tesla_pos.x, menu[39].tesla_pos.y});
    }
    if (main->etat.teslasix == 1) {
        menu[39].tesla_pos.x = save_curs.x - 50;
        menu[39].tesla_pos.y = save_curs.y - 50;
        sfSprite_setPosition(menu[39].sprite, (sfVector2f) {menu[39].
                tesla_pos.x, menu[39].tesla_pos.y});
    }
    tesla_next_tree(main, menu, save_curs);
}

void tesla_etat_four(main_t *main, sprite_t *menu)
{
    sfVector2i save_curs = sfMouse_getPositionRenderWindow
        (main->my_window.window);

    if (main->etat.teslafour == 1) {
        menu[39].tesla_pos.x = save_curs.x - 50;
        menu[39].tesla_pos.y = save_curs.y - 50;
        sfSprite_setPosition(menu[39].sprite, (sfVector2f) {menu[39].
                tesla_pos.x, menu[39].tesla_pos.y});
    }
    if (main->etat.teslasec == 1) {
        menu[39].tesla_pos.x = save_curs.x - 50;
        menu[39].tesla_pos.y = save_curs.y - 50;
        sfSprite_setPosition(menu[39].sprite, (sfVector2f) {menu[39].
                tesla_pos.x, menu[39].tesla_pos.y});
    }
    tesla_next_four(main, menu, save_curs);
}
void tesla_etat_five(main_t *main, sprite_t *menu)
{
    if (main->etat.teslaeleven == 0) {
        menu[39].tesla_pos.x = 880;
        menu[39].tesla_pos.y = 903;
        menu[62].tesla_spawneleven_pos.x = menu[63].tesla_rec_eleven_pos.x;
        menu[62].tesla_spawneleven_pos.y = menu[63].tesla_rec_eleven_pos.y;
        sfSprite_setPosition(menu[39].sprite, (sfVector2f) {menu[39].
                tesla_pos.x, menu[39].tesla_pos.y});
    }
    if (main->etat.teslatwelve == 0) {
        menu[39].tesla_pos.x = 880;
        menu[39].tesla_pos.y = 903;
        menu[64].tesla_spawntwelve_pos.x = menu[65].tesla_rec_twelve_pos.x;
        menu[64].tesla_spawntwelve_pos.y = menu[65].tesla_rec_twelve_pos.y;
        sfSprite_setPosition(menu[39].sprite, (sfVector2f) {menu[39].
                tesla_pos.x, menu[39].tesla_pos.y});
    }
}
