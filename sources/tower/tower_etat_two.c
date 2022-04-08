/*
** EPITECH PROJECT, 2022
** tower_etat_two
** File description:
** tower_etat_two
*/

#include "hashtag.h"
#include "csfml.h"

void tower_etat_six(main_t *main, sprite_t *menu)
{
    if (main->etat.tower == 0) {
        menu[36].tower_pos.x = 775;
        menu[36].tower_pos.y = 910;
        menu[38].t_pos.x = menu[37].t_spawn_pos.x;
        menu[38].t_pos.y = menu[37].t_spawn_pos.y;
        sfSprite_setPosition(menu[36].sprite, (sfVector2f) {menu[36].
                tower_pos.x, menu[36].tower_pos.y});
    }
    if (main->etat.towersec == 0) {
        menu[36].tower_pos.x = 775;
        menu[36].tower_pos.y = 910;
        menu[45].tsec_pos.x = menu[44].tsec_spawn_pos.x;
        menu[45].tsec_pos.y = menu[44].tsec_spawn_pos.y;
        sfSprite_setPosition(menu[36].sprite, (sfVector2f) {menu[36].
                tower_pos.x, menu[36].tower_pos.y});
    }
}

void tower_etat_seven(main_t *main, sprite_t *menu)
{
    sfVector2i save_curs = sfMouse_getPositionRenderWindow
        (main->my_window.window);

    if (main->etat.towerten == 1) {
        menu[36].tower_pos.x = save_curs.x - 50;
        menu[36].tower_pos.y = save_curs.y - 50;
        sfSprite_setPosition(menu[36].sprite, (sfVector2f) {menu[36].
                tower_pos.x, menu[36].tower_pos.y});
    }
    if (main->etat.towereleven == 1) {
        menu[36].tower_pos.x = save_curs.x - 50;
        menu[36].tower_pos.y = save_curs.y - 50;
        sfSprite_setPosition(menu[36].sprite, (sfVector2f) {menu[36].
                tower_pos.x, menu[36].tower_pos.y});
    }
    tower_next_one(main, menu, save_curs);
}

void tower_etat_eight(main_t *main, sprite_t *menu)
{
    sfVector2i save_curs = sfMouse_getPositionRenderWindow
        (main->my_window.window);

    if (main->etat.towerseven == 1) {
        menu[36].tower_pos.x = save_curs.x - 50;
        menu[36].tower_pos.y = save_curs.y - 50;
        sfSprite_setPosition(menu[36].sprite, (sfVector2f) {menu[36].
                tower_pos.x, menu[36].tower_pos.y});
    }
    if (main->etat.towereight == 1) {
        menu[36].tower_pos.x = save_curs.x - 50;
        menu[36].tower_pos.y = save_curs.y - 50;
        sfSprite_setPosition(menu[36].sprite, (sfVector2f) {menu[36].
                tower_pos.x, menu[36].tower_pos.y});
    }
    tower_next_two(main, menu, save_curs);
}

void tower_etat_nine(main_t *main, sprite_t *menu)
{
    sfVector2i save_curs = sfMouse_getPositionRenderWindow
        (main->my_window.window);

    if (main->etat.towerfour == 1) {
        menu[36].tower_pos.x = save_curs.x - 50;
        menu[36].tower_pos.y = save_curs.y - 50;
        sfSprite_setPosition(menu[36].sprite, (sfVector2f) {menu[36].
                tower_pos.x, menu[36].tower_pos.y});
    }
    if (main->etat.towerfive == 1) {
        menu[36].tower_pos.x = save_curs.x - 50;
        menu[36].tower_pos.y = save_curs.y - 50;
        sfSprite_setPosition(menu[36].sprite, (sfVector2f) {menu[36].
                tower_pos.x, menu[36].tower_pos.y});
    }
    tower_next_tree(main, menu, save_curs);
}

void tower_etat_ten(main_t *main, sprite_t *menu)
{
    sfVector2i save_curs = sfMouse_getPositionRenderWindow
        (main->my_window.window);

    if (main->etat.tower == 1) {
        menu[36].tower_pos.x = save_curs.x - 50;
        menu[36].tower_pos.y = save_curs.y - 50;
        sfSprite_setPosition(menu[36].sprite, (sfVector2f) {menu[36].
                tower_pos.x, menu[36].tower_pos.y});
    }
    if (main->etat.towersec == 1) {
        menu[36].tower_pos.x = save_curs.x - 50;
        menu[36].tower_pos.y = save_curs.y - 50;
        sfSprite_setPosition(menu[36].sprite, (sfVector2f) {menu[36].
                tower_pos.x, menu[36].tower_pos.y});
    }
    tower_next_four(main, menu, save_curs);
}
