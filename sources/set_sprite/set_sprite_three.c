/*
** EPITECH PROJECT, 2022
** set_sprite_three
** File description:
** set_sprite_three
*/

#include "hashtag.h"
#include "csfml.h"

void set_sprite_nine(sprite_t *menu)
{
    initialize_sprite("sources/images/fps_rect.png", &menu[67]);
    sfSprite_setScale(menu[67].sprite, (sfVector2f) {0.30, 0.30});
    menu[67].tthree_spawn_pos.x = 700;
    menu[67].tthree_spawn_pos.y = 480;
    sfSprite_setPosition(menu[67].sprite, (sfVector2f) {menu[67].
            tthree_spawn_pos.x, menu[67].tthree_spawn_pos.y});
    initialize_sprite("sources/images/fps_rect.png", &menu[69]);
    sfSprite_setScale(menu[69].sprite, (sfVector2f) {0.30, 0.30});
    menu[69].tfour_spawn_pos.x = 1160;
    menu[69].tfour_spawn_pos.y = 480;
    sfSprite_setPosition(menu[69].sprite, (sfVector2f) {menu[69].
            tfour_spawn_pos.x, menu[69].tfour_spawn_pos.y});
    initialize_sprite("sources/images/fps_rect.png", &menu[71]);
    sfSprite_setScale(menu[71].sprite, (sfVector2f) {0.30, 0.30});
    menu[71].tfive_spawn_pos.x = 1160;
    menu[71].tfive_spawn_pos.y = 560;
    sfSprite_setPosition(menu[71].sprite, (sfVector2f) {menu[71].
            tfive_spawn_pos.x, menu[71].tfive_spawn_pos.y});
}

void set_sprite_ten(sprite_t *menu)
{
    initialize_sprite("sources/images/fps_rect.png", &menu[73]);
    sfSprite_setScale(menu[73].sprite, (sfVector2f) {0.30, 0.30});
    menu[73].tsix_spawn_pos.x = 1160;
    menu[73].tsix_spawn_pos.y = 640;
    sfSprite_setPosition(menu[73].sprite, (sfVector2f) {menu[73].
            tsix_spawn_pos.x, menu[73].tsix_spawn_pos.y});
    initialize_sprite("sources/images/fps_rect.png", &menu[75]);
    sfSprite_setScale(menu[75].sprite, (sfVector2f) {0.30, 0.30});
    menu[75].tseven_spawn_pos.x = 1160;
    menu[75].tseven_spawn_pos.y = 300;
    sfSprite_setPosition(menu[75].sprite, (sfVector2f) {menu[75].
            tseven_spawn_pos.x, menu[75].tseven_spawn_pos.y});
    initialize_sprite("sources/images/fps_rect.png", &menu[77]);
    sfSprite_setScale(menu[77].sprite, (sfVector2f) {0.30, 0.30});
    menu[77].teight_spawn_pos.x = 1160;
    menu[77].teight_spawn_pos.y = 220;
    sfSprite_setPosition(menu[77].sprite, (sfVector2f) {menu[77].
            teight_spawn_pos.x, menu[77].teight_spawn_pos.y});
}

void set_sprite_eleven(sprite_t *menu)
{
    initialize_sprite("sources/images/fps_rect.png", &menu[79]);
    sfSprite_setScale(menu[79].sprite, (sfVector2f) {0.30, 0.30});
    menu[79].tnine_spawn_pos.x = 1160;
    menu[79].tnine_spawn_pos.y = 140;
    sfSprite_setPosition(menu[79].sprite, (sfVector2f) {menu[79].
            tnine_spawn_pos.x, menu[79].tnine_spawn_pos.y});
    initialize_sprite("sources/images/fps_rect.png", &menu[81]);
    sfSprite_setScale(menu[81].sprite, (sfVector2f) {0.30, 0.30});
    menu[81].tten_spawn_pos.x = 700;
    menu[81].tten_spawn_pos.y = 140;
    sfSprite_setPosition(menu[81].sprite, (sfVector2f) {menu[81].
            tten_spawn_pos.x, menu[81].tten_spawn_pos.y});
    initialize_sprite("sources/images/fps_rect.png", &menu[83]);
    sfSprite_setScale(menu[83].sprite, (sfVector2f) {0.30, 0.30});
    menu[83].televen_spawn_pos.x = 700;
    menu[83].televen_spawn_pos.y = 220;
    sfSprite_setPosition(menu[83].sprite, (sfVector2f) {menu[83].
            televen_spawn_pos.x, menu[83].televen_spawn_pos.y});
}

void set_sprite_twelve(sprite_t *menu)
{
    initialize_sprite("sources/images/fps_rect.png", &menu[85]);
    sfSprite_setScale(menu[85].sprite, (sfVector2f) {0.30, 0.30});
    menu[85].ttwelve_spawn_pos.x = 700;
    menu[85].ttwelve_spawn_pos.y = 300;
    sfSprite_setPosition(menu[85].sprite, (sfVector2f) {menu[85].
            ttwelve_spawn_pos.x, menu[85].ttwelve_spawn_pos.y});
    initialize_sprite("sources/images/tour_de_l'enfer.png", &menu[45]);
    sfSprite_setScale(menu[45].sprite, (sfVector2f) {0.50, 0.50});
    menu[45].tsec_pos.x = -100;
    menu[45].tsec_pos.y = -100;
    sfSprite_setPosition(menu[45].sprite, (sfVector2f) {menu[45].
            tsec_pos.x, menu[45].tsec_pos.y});
    initialize_sprite("sources/images/tour_de_l'enfer.png", &menu[38]);
    sfSprite_setScale(menu[38].sprite, (sfVector2f) {0.50, 0.50});
    menu[38].t_pos.x = -100;
    menu[38].t_pos.y = -100;
    sfSprite_setPosition(menu[38].sprite, (sfVector2f) {menu[38].
            t_pos.x, menu[38].t_pos.y});
}

void set_sprite_twentythree(sprite_t *menu)
{
    initialize_sprite("sources/images/tesla_tower.png", &menu[60]);
    sfSprite_setScale(menu[60].sprite, (sfVector2f) {0.50, 0.50});
    menu[60].tesla_spawnten_pos.x = -100;
    menu[60].tesla_spawnten_pos.y = -100;
    sfSprite_setPosition(menu[60].sprite, (sfVector2f) {menu[60].
            tesla_spawnten_pos.x, menu[60].tesla_spawnten_pos.y});
    initialize_sprite("sources/images/tesla_tower.png", &menu[62]);
    sfSprite_setScale(menu[62].sprite, (sfVector2f) {0.50, 0.50});
    menu[62].tesla_spawneleven_pos.x = -100;
    menu[62].tesla_spawneleven_pos.y = -100;
    sfSprite_setPosition(menu[62].sprite, (sfVector2f) {menu[62].
            tesla_spawneleven_pos.x, menu[62].tesla_spawneleven_pos.y});
    initialize_sprite("sources/images/tesla_tower.png", &menu[64]);
    sfSprite_setScale(menu[64].sprite, (sfVector2f) {0.50, 0.50});
    menu[64].tesla_spawntwelve_pos.x = -100;
    menu[64].tesla_spawntwelve_pos.y = -100;
    sfSprite_setPosition(menu[64].sprite, (sfVector2f) {menu[64].
            tesla_spawntwelve_pos.x, menu[64].tesla_spawntwelve_pos.y});
}
