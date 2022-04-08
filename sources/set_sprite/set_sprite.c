/*
** EPITECH PROJECT, 2022
** set_sprite
** File description:
** set_sprite
*/

#include "hashtag.h"
#include "csfml.h"

void set_sprite(sprite_t *menu)
{
    initialize_sprite("sources/images/principal_wp.png", &menu[0]);
    initialize_sprite("sources/images/play.png", &menu[1]);
    sfSprite_setScale(menu[1].sprite, (sfVector2f) {0.84, 0.84});
    sfSprite_setPosition(menu[1].sprite, (sfVector2f) {790, 190});
    initialize_sprite("sources/images/option.png", &menu[2]);
    sfSprite_setScale(menu[2].sprite, (sfVector2f) {0.75, 0.75});
    sfSprite_setPosition(menu[2].sprite, (sfVector2f) {790, 350});
    initialize_sprite("sources/images/exit.png", &menu[3]);
    sfSprite_setScale(menu[3].sprite, (sfVector2f) {0.75, 0.60});
    sfSprite_setPosition(menu[3].sprite,(sfVector2f) {790, 500});
    initialize_sprite("sources/images/info.png", &menu[4]);
    sfSprite_setScale(menu[4].sprite, (sfVector2f) {0.25, 0.25});
    sfSprite_setPosition(menu[4].sprite, (sfVector2f) {915, 650});
    initialize_sprite("sources/images/how_to_play.jpg", &menu[5]);
    initialize_sprite("sources/images/title_guide.png", &menu[6]);
    sfSprite_setScale(menu[6].sprite, (sfVector2f) {1, 1});
    sfSprite_setPosition(menu[6].sprite, (sfVector2f) {200, 300});
}

void set_sprite_two(sprite_t *menu)
{
    initialize_sprite("sources/images/guide.png", &menu[7]);
    sfSprite_setScale(menu[7].sprite, (sfVector2f) {0.5, 0.5});
    sfSprite_setPosition(menu[7].sprite, (sfVector2f) {200, 500});
    initialize_sprite("sources/images/back.png", &menu[8]);
    sfSprite_setScale(menu[8].sprite, (sfVector2f) {0.25, 0.25});
    sfSprite_setPosition(menu[8].sprite, (sfVector2f) {20, 20});
    initialize_sprite("sources/images/fond_option.jpg", &menu[10]);
    initialize_sprite("sources/images/arrow_left.png", &menu[9]);
    sfSprite_setScale(menu[9].sprite, (sfVector2f) {0.35, 0.35});
    sfSprite_setPosition(menu[9].sprite, (sfVector2f) {720, 650});
    initialize_sprite("sources/images/arrow_right.png", &menu[11]);
    sfSprite_setScale(menu[11].sprite, (sfVector2f) {0.35, 0.35});
    sfSprite_setPosition(menu[11].sprite, (sfVector2f) {1100, 650});
    initialize_sprite("sources/images/fps.png", &menu[12]);
    sfSprite_setScale(menu[12].sprite, (sfVector2f) {1, 1});
    sfSprite_setPosition(menu[12].sprite, (sfVector2f) {892, 560});
}

void set_sprite_three(sprite_t *menu)
{
    initialize_sprite("sources/images/info_black.png", &menu[13]);
    sfSprite_setScale(menu[13].sprite, (sfVector2f) {0.25, 0.25});
    sfSprite_setPosition(menu[13].sprite, (sfVector2f) {915, 650});
    initialize_sprite("sources/images/option_black.png", &menu[14]);
    sfSprite_setScale(menu[14].sprite, (sfVector2f) {0.75, 0.75});
    sfSprite_setPosition(menu[14].sprite, (sfVector2f) {790, 350});
    initialize_sprite("sources/images/exit_black.png", &menu[15]);
    sfSprite_setScale(menu[15].sprite, (sfVector2f) {0.75, 0.60});
    sfSprite_setPosition(menu[15].sprite,(sfVector2f) {790, 500});
    initialize_sprite("sources/images/arrow_right.png", &menu[22]);
    sfSprite_setScale(menu[22].sprite, (sfVector2f) {0.35, 0.35});
    sfSprite_setPosition(menu[22].sprite, (sfVector2f) {1100, 200});
    initialize_sprite("sources/images/arrow_right_black.png", &menu[23]);
    sfSprite_setScale(menu[23].sprite, (sfVector2f) {0.35, 0.35});
    sfSprite_setPosition(menu[23].sprite, (sfVector2f) {1100, 200});
}

void set_sprite_four(sprite_t *menu)
{
    initialize_sprite("sources/images/arrow_left_black.png", &menu[16]);
    sfSprite_setScale(menu[16].sprite, (sfVector2f) {0.35, 0.35});
    sfSprite_setPosition(menu[16].sprite, (sfVector2f) {720, 650});
    initialize_sprite("sources/images/arrow_right_black.png", &menu[17]);
    sfSprite_setScale(menu[17].sprite, (sfVector2f) {0.35, 0.35});
    sfSprite_setPosition(menu[17].sprite, (sfVector2f) {1100, 650});
    initialize_sprite("sources/images/back_black.png", &menu[18]);
    sfSprite_setScale(menu[18].sprite, (sfVector2f) {0.25, 0.25});
    sfSprite_setPosition(menu[18].sprite, (sfVector2f) {20, 20});
    initialize_sprite("sources/images/fps_rect.png", &menu[19]);
    sfSprite_setScale(menu[19].sprite, (sfVector2f) {0.70, 0.80});
    sfSprite_setPosition(menu[19].sprite, (sfVector2f) {860, 525});
    initialize_sprite("sources/images/arrow_left.png", &menu[20]);
    sfSprite_setScale(menu[20].sprite, (sfVector2f) {0.35, 0.35});
    sfSprite_setPosition(menu[20].sprite, (sfVector2f) {720, 200});
    initialize_sprite("sources/images/arrow_left_black.png", &menu[21]);
    sfSprite_setScale(menu[21].sprite, (sfVector2f) {0.35, 0.35});
    sfSprite_setPosition(menu[21].sprite, (sfVector2f) {720, 200});
}

void set_sprite_five(sprite_t *menu)
{
    initialize_sprite("sources/images/music.png", &menu[24]);
    sfSprite_setScale(menu[24].sprite, (sfVector2f) {0.35, 0.35});
    sfSprite_setPosition(menu[24].sprite, (sfVector2f) {900, 100});
    initialize_sprite("sources/images/fps_rect.png", &menu[25]);
    sfSprite_setScale(menu[25].sprite, (sfVector2f) {0.70, 0.80});
    sfSprite_setPosition(menu[25].sprite, (sfVector2f) {850, 80});
    initialize_sprite("sources/images/none.png", &menu[26]);
    sfSprite_setScale(menu[26].sprite, (sfVector2f) {0.25, 0.25});
    sfSprite_setPosition(menu[26].sprite, (sfVector2f) {920, 225});
    initialize_sprite("sources/images/play_black.png", &menu[27]);
    sfSprite_setScale(menu[27].sprite, (sfVector2f) {0.84, 0.84});
    sfSprite_setPosition(menu[27].sprite, (sfVector2f) {790, 190});
    initialize_sprite("sources/images/map_finish.png", &menu[28]);
    initialize_sprite("sources/images/resume.png", &menu[29]);
    sfSprite_setScale(menu[29].sprite, (sfVector2f) {0.60, 0.60});
    sfSprite_setPosition(menu[29].sprite, (sfVector2f) {850, 160});
}
