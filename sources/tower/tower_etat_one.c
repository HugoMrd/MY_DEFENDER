/*
** EPITECH PROJECT, 2022
** tower_etat_one
** File description:
** tower_etat_one
*/

#include "hashtag.h"
#include "csfml.h"

void tower_etat_one(main_t *main, sprite_t *menu)
{
    if (main->etat.towereleven == 0) {
        menu[36].tower_pos.x = 775;
        menu[36].tower_pos.y = 910;
        menu[82].televen_pos.x = menu[83].televen_spawn_pos.x;
        menu[82].televen_pos.y = menu[83].televen_spawn_pos.y;
        sfSprite_setPosition(menu[36].sprite, (sfVector2f) {menu[36].
                tower_pos.x, menu[36].tower_pos.y});
    }
    if (main->etat.towertwelve == 0) {
        menu[36].tower_pos.x = 775;
        menu[36].tower_pos.y = 910;
        menu[84].ttwelve_pos.x = menu[85].ttwelve_spawn_pos.x;
        menu[84].ttwelve_pos.y = menu[85].ttwelve_spawn_pos.y;
        sfSprite_setPosition(menu[36].sprite, (sfVector2f) {menu[36].
                tower_pos.x, menu[36].tower_pos.y});
    }
}

void tower_etat_two(main_t *main, sprite_t *menu)
{
    if (main->etat.towernine == 0) {
        menu[36].tower_pos.x = 775;
        menu[36].tower_pos.y = 910;
        menu[78].tnine_pos.x = menu[79].tnine_spawn_pos.x;
        menu[78].tnine_pos.y = menu[79].tnine_spawn_pos.y;
        sfSprite_setPosition(menu[36].sprite, (sfVector2f) {menu[36].
                tower_pos.x, menu[36].tower_pos.y});
    }
    if (main->etat.towerten == 0) {
        menu[36].tower_pos.x = 775;
        menu[36].tower_pos.y = 910;
        menu[80].tten_pos.x = menu[81].tten_spawn_pos.x;
        menu[80].tten_pos.y = menu[81].tten_spawn_pos.y;
        sfSprite_setPosition(menu[36].sprite, (sfVector2f) {menu[36].
                tower_pos.x, menu[36].tower_pos.y});
    }
}

void tower_etat_three(main_t *main, sprite_t *menu)
{
    if (main->etat.towerseven == 0) {
        menu[36].tower_pos.x = 775;
        menu[36].tower_pos.y = 910;
        menu[74].tseven_pos.x = menu[75].tseven_spawn_pos.x;
        menu[74].tseven_pos.y = menu[75].tseven_spawn_pos.y;
        sfSprite_setPosition(menu[36].sprite, (sfVector2f) {menu[36].
                tower_pos.x, menu[36].tower_pos.y});
    }
    if (main->etat.towereight == 0) {
        menu[36].tower_pos.x = 775;
        menu[36].tower_pos.y = 910;
        menu[76].teight_pos.x = menu[77].teight_spawn_pos.x;
        menu[76].teight_pos.y = menu[77].teight_spawn_pos.y;
        sfSprite_setPosition(menu[36].sprite, (sfVector2f) {menu[36].
                tower_pos.x, menu[36].tower_pos.y});
    }
}

void tower_etat_four(main_t *main, sprite_t *menu)
{
    if (main->etat.towerfive == 0) {
        menu[36].tower_pos.x = 775;
        menu[36].tower_pos.y = 910;
        menu[70].tfive_pos.x = menu[71].tfive_spawn_pos.x;
        menu[70].tfive_pos.y = menu[71].tfive_spawn_pos.y;
        sfSprite_setPosition(menu[36].sprite, (sfVector2f) {menu[36].
                tower_pos.x, menu[36].tower_pos.y});
    }
    if (main->etat.towersix == 0) {
        menu[36].tower_pos.x = 775;
        menu[36].tower_pos.y = 910;
        menu[72].tsix_pos.x = menu[73].tsix_spawn_pos.x;
        menu[72].tsix_pos.y = menu[73].tsix_spawn_pos.y;
        sfSprite_setPosition(menu[36].sprite, (sfVector2f) {menu[36].
                tower_pos.x, menu[36].tower_pos.y});
    }
}

void tower_etat_five(main_t *main, sprite_t *menu)
{
    if (main->etat.towerthree == 0) {
        menu[36].tower_pos.x = 775;
        menu[36].tower_pos.y = 910;
        menu[66].tthree_pos.x = menu[67].tthree_spawn_pos.x;
        menu[66].tthree_pos.y = menu[67].tthree_spawn_pos.y;
        sfSprite_setPosition(menu[36].sprite, (sfVector2f) {menu[36].
                tower_pos.x, menu[36].tower_pos.y});
    }
    if (main->etat.towerfour == 0) {
        menu[36].tower_pos.x = 775;
        menu[36].tower_pos.y = 910;
        menu[68].tfour_pos.x = menu[69].tfour_spawn_pos.x;
        menu[68].tfour_pos.y = menu[69].tfour_spawn_pos.y;
        sfSprite_setPosition(menu[36].sprite, (sfVector2f) {menu[36].
                tower_pos.x, menu[36].tower_pos.y});
    }
}
