/*
** EPITECH PROJECT, 2022
** set_sprite_four
** File description:
** set_sprite_four
*/

#include "hashtag.h"
#include "csfml.h"

void set_sprite_thirteen(sprite_t *menu)
{
    initialize_sprite("sources/images/tour_de_l'enfer.png", &menu[66]);
    sfSprite_setScale(menu[66].sprite, (sfVector2f) {0.50, 0.50});
    menu[66].tthree_pos.x = -100;
    menu[66].tthree_pos.y = -100;
    sfSprite_setPosition(menu[66].sprite, (sfVector2f) {menu[66].
            tthree_pos.x, menu[66].tthree_pos.y});
    initialize_sprite("sources/images/tour_de_l'enfer.png", &menu[68]);
    sfSprite_setScale(menu[68].sprite, (sfVector2f) {0.50, 0.50});
    menu[68].tfour_pos.x = -100;
    menu[68].tfour_pos.y = -100;
    sfSprite_setPosition(menu[68].sprite, (sfVector2f) {menu[68].
            tfour_pos.x, menu[68].tfour_pos.y});
    initialize_sprite("sources/images/tour_de_l'enfer.png", &menu[70]);
    sfSprite_setScale(menu[70].sprite, (sfVector2f) {0.50, 0.50});
    menu[70].tfive_pos.x = -100;
    menu[70].tfive_pos.y = -100;
    sfSprite_setPosition(menu[70].sprite, (sfVector2f) {menu[70].
            tfive_pos.x, menu[70].tfive_pos.y});
}

void set_sprite_fourteen(sprite_t *menu)
{
    initialize_sprite("sources/images/tour_de_l'enfer.png", &menu[72]);
    sfSprite_setScale(menu[72].sprite, (sfVector2f) {0.50, 0.50});
    menu[72].tsix_pos.x = -100;
    menu[72].tsix_pos.y = -100;
    sfSprite_setPosition(menu[72].sprite, (sfVector2f) {menu[72].
            tsix_pos.x, menu[72].tsix_pos.y});
    initialize_sprite("sources/images/tour_de_l'enfer.png", &menu[74]);
    sfSprite_setScale(menu[74].sprite, (sfVector2f) {0.50, 0.50});
    menu[74].tseven_pos.x = -100;
    menu[74].tseven_pos.y = -100;
    sfSprite_setPosition(menu[74].sprite, (sfVector2f) {menu[74].
            tseven_pos.x, menu[74].tseven_pos.y});
    initialize_sprite("sources/images/tour_de_l'enfer.png", &menu[76]);
    sfSprite_setScale(menu[76].sprite, (sfVector2f) {0.50, 0.50});
    menu[76].teight_pos.x = -100;
    menu[76].teight_pos.y = -100;
    sfSprite_setPosition(menu[76].sprite, (sfVector2f) {menu[76].
            teight_pos.x, menu[76].teight_pos.y});
}

void set_sprite_fifteen(sprite_t *menu)
{
    initialize_sprite("sources/images/fps_rect.png", &menu[42]);
    sfSprite_setScale(menu[42].sprite, (sfVector2f) {0.30, 0.30});
    menu[42].tesla_rec_sec_pos.x = 840;
    menu[42].tesla_rec_sec_pos.y = 480;
    sfSprite_setPosition(menu[42].sprite, (sfVector2f) {menu[42].
            tesla_rec_sec_pos.x, menu[42].tesla_rec_sec_pos.y});
    initialize_sprite("sources/images/fps_rect.png", &menu[46]);
    sfSprite_setScale(menu[46].sprite, (sfVector2f) {0.30, 0.30});
    menu[46].tesla_rec_three_pos.x = 1060;
    menu[46].tesla_rec_three_pos.y = 480;
    sfSprite_setPosition(menu[46].sprite, (sfVector2f) {menu[46].
            tesla_rec_three_pos.x, menu[46].tesla_rec_three_pos.y});
    initialize_sprite("sources/images/fps_rect.png", &menu[49]);
    sfSprite_setScale(menu[49].sprite, (sfVector2f) {0.30, 0.30});
    menu[49].tesla_rec_four_pos.x = 1060;
    menu[49].tesla_rec_four_pos.y = 560;
    sfSprite_setPosition(menu[49].sprite, (sfVector2f) {menu[49].
            tesla_rec_four_pos.x, menu[49].tesla_rec_four_pos.y});
}

void set_sprite_sixteen(sprite_t *menu)
{
    initialize_sprite("sources/images/fps_rect.png", &menu[50]);
    sfSprite_setScale(menu[50].sprite, (sfVector2f) {0.30, 0.30});
    menu[50].tesla_rec_five_pos.x = 1060;
    menu[50].tesla_rec_five_pos.y = 640;
    sfSprite_setPosition(menu[50].sprite, (sfVector2f) {menu[50].
            tesla_rec_five_pos.x, menu[50].tesla_rec_five_pos.y});
    initialize_sprite("sources/images/fps_rect.png", &menu[52]);
    sfSprite_setScale(menu[52].sprite, (sfVector2f) {0.30, 0.30});
    menu[52].tesla_rec_six_pos.x = 1060;
    menu[52].tesla_rec_six_pos.y = 300;
    sfSprite_setPosition(menu[52].sprite, (sfVector2f) {menu[52].
            tesla_rec_six_pos.x, menu[52].tesla_rec_six_pos.y});
    initialize_sprite("sources/images/fps_rect.png", &menu[55]);
    sfSprite_setScale(menu[55].sprite, (sfVector2f) {0.30, 0.30});
    menu[55].tesla_rec_seven_pos.x = 1060;
    menu[55].tesla_rec_seven_pos.y = 220;
    sfSprite_setPosition(menu[55].sprite, (sfVector2f) {menu[55].
            tesla_rec_seven_pos.x, menu[55].tesla_rec_seven_pos.y});
}

void set_sprite_seventeen(sprite_t *menu)
{
    initialize_sprite("sources/images/fps_rect.png", &menu[57]);
    sfSprite_setScale(menu[57].sprite, (sfVector2f) {0.30, 0.30});
    menu[57].tesla_rec_eight_pos.x = 1060;
    menu[57].tesla_rec_eight_pos.y = 140;
    sfSprite_setPosition(menu[57].sprite, (sfVector2f) {menu[57].
            tesla_rec_eight_pos.x, menu[57].tesla_rec_eight_pos.y});
    initialize_sprite("sources/images/fps_rect.png", &menu[59]);
    sfSprite_setScale(menu[59].sprite, (sfVector2f) {0.30, 0.30});
    menu[59].tesla_rec_nine_pos.x = 820;
    menu[59].tesla_rec_nine_pos.y = 140;
    sfSprite_setPosition(menu[59].sprite, (sfVector2f) {menu[59].
            tesla_rec_nine_pos.x, menu[59].tesla_rec_nine_pos.y});
    initialize_sprite("sources/images/fps_rect.png", &menu[61]);
    sfSprite_setScale(menu[61].sprite, (sfVector2f) {0.30, 0.30});
    menu[61].tesla_rec_ten_pos.x = 820;
    menu[61].tesla_rec_ten_pos.y = 220;
    sfSprite_setPosition(menu[61].sprite, (sfVector2f) {menu[61].
            tesla_rec_ten_pos.x, menu[61].tesla_rec_ten_pos.y});
}
