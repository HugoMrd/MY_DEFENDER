/*
** EPITECH PROJECT, 2022
** set_sprite_sec
** File description:
** set_sprite_sec
*/

#include "hashtag.h"
#include "csfml.h"

void set_sprite_six(sprite_t *menu)
{
    initialize_sprite("sources/images/resume_black.png", &menu[32]);
    sfSprite_setScale(menu[32].sprite, (sfVector2f) {0.60, 0.60});
    sfSprite_setPosition(menu[32].sprite, (sfVector2f) {850, 160});
    initialize_sprite("sources/images/setting.png", &menu[30]);
    sfSprite_setScale(menu[30].sprite, (sfVector2f) {0.25, 0.25});
    sfSprite_setPosition(menu[30].sprite, (sfVector2f) {940, 270});
    initialize_sprite("sources/images/setting_black.png", &menu[31]);
    sfSprite_setScale(menu[31].sprite, (sfVector2f) {0.25, 0.25});
    sfSprite_setPosition(menu[31].sprite, (sfVector2f) {940, 270});
    initialize_sprite("sources/images/back.png", &menu[34]);
    sfSprite_setScale(menu[34].sprite, (sfVector2f) {0.25, 0.25});
    sfSprite_setPosition(menu[34].sprite, (sfVector2f) {20, 20});
    initialize_sprite("sources/images/back_black.png", &menu[33]);
    sfSprite_setScale(menu[33].sprite, (sfVector2f) {0.25, 0.25});
    sfSprite_setPosition(menu[33].sprite, (sfVector2f) {20, 20});
}

void set_sprite_seven(sprite_t *menu, an_sprite_t *enemy)
{
    initialize_sprite("sources/images/image_enfer.png", &menu[36]);
    sfSprite_setScale(menu[36].sprite, (sfVector2f) {0.42, 0.42});
    menu[36].tower_pos.x = 775;
    menu[36].tower_pos.y = 910;
    sfSprite_setPosition(menu[36].sprite, (sfVector2f) {menu[36].
            tower_pos.x, menu[36].tower_pos.y});
    initialize_sprite("sources/images/fps_rect.png", &menu[41]);
    sfSprite_setScale(menu[41].sprite, (sfVector2f) {0.30, 0.30});
    menu[41].tesla_rec_pos.x = 840;
    menu[41].tesla_rec_pos.y = 560;
    sfSprite_setPosition(menu[41].sprite, (sfVector2f) {menu[41].
            tesla_rec_pos.x, menu[41].tesla_rec_pos.y});
    next_four(enemy);
}

void set_sprite_eight(sprite_t *menu)
{
    initialize_sprite("sources/images/tesla.png", &menu[39]);
    sfSprite_setScale(menu[39].sprite, (sfVector2f) {0.405, 0.405});
    menu[39].tesla_pos.x = 880;
    menu[39].tesla_pos.y = 903;
    sfSprite_setPosition(menu[39].sprite, (sfVector2f) {menu[39].
            tesla_pos.x, menu[39].tesla_pos.y});
    initialize_sprite("sources/images/fps_rect.png", &menu[37]);
    sfSprite_setScale(menu[37].sprite, (sfVector2f) {0.30, 0.30});
    menu[37].t_spawn_pos.x = 700;
    menu[37].t_spawn_pos.y = 640;
    sfSprite_setPosition(menu[37].sprite, (sfVector2f) {menu[37].
            t_spawn_pos.x, menu[37].t_spawn_pos.y});
    initialize_sprite("sources/images/fps_rect.png", &menu[44]);
    sfSprite_setScale(menu[44].sprite, (sfVector2f) {0.30, 0.30});
    menu[44].tsec_spawn_pos.x = 700;
    menu[44].tsec_spawn_pos.y = 560;
    sfSprite_setPosition(menu[44].sprite, (sfVector2f) {menu[44].
            tsec_spawn_pos.x, menu[44].tsec_spawn_pos.y});
}

void set_sprite_all_one(sprite_t *menu, an_sprite_t *enemy)
{
    set_sprite_two(menu);
    set_sprite_three(menu);
    set_sprite_four(menu);
    set_sprite_five(menu);
    set_sprite_six(menu);
    set_sprite_seven(menu, enemy);
    set_sprite_eight(menu);
    set_sprite_nine(menu);
    set_sprite_ten(menu);
}

void set_sprite_all_two(sprite_t *menu)
{
    set_sprite_eleven(menu);
    set_sprite_twelve(menu);
    set_sprite_thirteen(menu);
    set_sprite_fourteen(menu);
    set_sprite_fifteen(menu);
    set_sprite_seventeen(menu);
    set_sprite_eighteen(menu);
    set_sprite_nineteen(menu);
    set_sprite_twenty(menu);
    set_sprite_twentyone(menu);
    set_sprite_twentytwo(menu);
    set_sprite_twentythree(menu);
    set_sprite_twenty_four(menu);
    set_sprite_twenty_five(menu);
}
