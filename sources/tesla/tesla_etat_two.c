/*
** EPITECH PROJECT, 2022
** tesla_etat_two
** File description:
** tesla_etat_two
*/

#include "hashtag.h"
#include "csfml.h"

void tesla_etat_six(main_t *main, sprite_t *menu)
{
    if (main->etat.teslanine == 0) {
        menu[39].tesla_pos.x = 880;
        menu[39].tesla_pos.y = 903;
        menu[58].tesla_spawnnine_pos.x = menu[59].tesla_rec_nine_pos.x;
        menu[58].tesla_spawnnine_pos.y = menu[59].tesla_rec_nine_pos.y;
        sfSprite_setPosition(menu[39].sprite, (sfVector2f) {menu[39].
                tesla_pos.x, menu[39].tesla_pos.y});
    }
    if (main->etat.teslaten == 0) {
        menu[39].tesla_pos.x = 880;
        menu[39].tesla_pos.y = 903;
        menu[60].tesla_spawnten_pos.x = menu[61].tesla_rec_ten_pos.x;
        menu[60].tesla_spawnten_pos.y = menu[61].tesla_rec_ten_pos.y;
        sfSprite_setPosition(menu[39].sprite, (sfVector2f) {menu[39].
                tesla_pos.x, menu[39].tesla_pos.y});
    }
}

void tesla_etat_seven(main_t *main, sprite_t *menu)
{
    if (main->etat.teslaseven == 0) {
        menu[39].tesla_pos.x = 880;
        menu[39].tesla_pos.y = 903;
        menu[54].tesla_spawnseven_pos.x = menu[55].tesla_rec_seven_pos.x;
        menu[54].tesla_spawnseven_pos.y = menu[55].tesla_rec_seven_pos.y;
        sfSprite_setPosition(menu[39].sprite, (sfVector2f) {menu[39].
                tesla_pos.x, menu[39].tesla_pos.y});
    }
    if (main->etat.teslaeight == 0) {
        menu[39].tesla_pos.x = 880;
        menu[39].tesla_pos.y = 903;
        menu[56].tesla_spawneight_pos.x = menu[57].tesla_rec_eight_pos.x;
        menu[56].tesla_spawneight_pos.y = menu[57].tesla_rec_eight_pos.y;
        sfSprite_setPosition(menu[39].sprite, (sfVector2f) {menu[39].
                tesla_pos.x, menu[39].tesla_pos.y});
    }
}

void tesla_etat_eight(main_t *main, sprite_t *menu)
{
    if (main->etat.teslafive == 0) {
        menu[39].tesla_pos.x = 880;
        menu[39].tesla_pos.y = 903;
        menu[51].tesla_spawnfive_pos.x = menu[50].tesla_rec_five_pos.x;
        menu[51].tesla_spawnfive_pos.y = menu[50].tesla_rec_five_pos.y;
        sfSprite_setPosition(menu[39].sprite, (sfVector2f) {menu[39].
                tesla_pos.x, menu[39].tesla_pos.y});
    }
    if (main->etat.teslasix == 0) {
        menu[39].tesla_pos.x = 880;
        menu[39].tesla_pos.y = 903;
        menu[53].tesla_spawnsix_pos.x = menu[52].tesla_rec_six_pos.x;
        menu[53].tesla_spawnsix_pos.y = menu[52].tesla_rec_six_pos.y;
        sfSprite_setPosition(menu[39].sprite, (sfVector2f) {menu[39].
                tesla_pos.x, menu[39].tesla_pos.y});
    }
}

void tesla_etat_nine(main_t *main, sprite_t *menu)
{
    if (main->etat.teslathree == 0) {
        menu[39].tesla_pos.x = 880;
        menu[39].tesla_pos.y = 903;
        menu[47].tesla_spawnthree_pos.x = menu[46].tesla_rec_three_pos.x;
        menu[47].tesla_spawnthree_pos.y = menu[46].tesla_rec_three_pos.y;
        sfSprite_setPosition(menu[39].sprite, (sfVector2f) {menu[39].
                tesla_pos.x, menu[39].tesla_pos.y});
    }
    if (main->etat.teslafour == 0) {
        menu[39].tesla_pos.x = 880;
        menu[39].tesla_pos.y = 903;
        menu[48].tesla_spawnfour_pos.x = menu[49].tesla_rec_four_pos.x;
        menu[48].tesla_spawnfour_pos.y = menu[49].tesla_rec_four_pos.y;
        sfSprite_setPosition(menu[39].sprite, (sfVector2f) {menu[39].
                tesla_pos.x, menu[39].tesla_pos.y});
    }
}

void tesla_etat_ten(main_t *main, sprite_t *menu)
{
    if (main->etat.tesla == 0) {
        menu[39].tesla_pos.x = 880;
        menu[39].tesla_pos.y = 903;
        menu[40].tesla_spawn_pos.x = menu[41].tesla_rec_pos.x;
        menu[40].tesla_spawn_pos.y = menu[41].tesla_rec_pos.y;
        sfSprite_setPosition(menu[39].sprite, (sfVector2f) {menu[39].
                tesla_pos.x, menu[39].tesla_pos.y});
    }
    if (main->etat.teslasec == 0) {
        menu[39].tesla_pos.x = 880;
        menu[39].tesla_pos.y = 903;
        menu[43].tesla_spawnsec_pos.x = menu[42].tesla_rec_sec_pos.x;
        menu[43].tesla_spawnsec_pos.y = menu[42].tesla_rec_sec_pos.y;
        sfSprite_setPosition(menu[39].sprite, (sfVector2f) {menu[39].
                tesla_pos.x, menu[39].tesla_pos.y});
    }
}
