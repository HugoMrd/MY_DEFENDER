/*
** EPITECH PROJECT, 2022
** set_sprite_five
** File description:
** set_sprite_five
*/

#include "hashtag.h"
#include "csfml.h"

void set_sprite_eighteen(sprite_t *menu)
{
    initialize_sprite("sources/images/fps_rect.png", &menu[63]);
    sfSprite_setScale(menu[63].sprite, (sfVector2f) {0.30, 0.30});
    menu[63].tesla_rec_eleven_pos.x = 820;
    menu[63].tesla_rec_eleven_pos.y = 300;
    sfSprite_setPosition(menu[63].sprite, (sfVector2f) {menu[63].
            tesla_rec_eleven_pos.x, menu[63].tesla_rec_eleven_pos.y});
    initialize_sprite("sources/images/fps_rect.png", &menu[65]);
    sfSprite_setScale(menu[65].sprite, (sfVector2f) {0.30, 0.30});
    menu[65].tesla_rec_twelve_pos.x = 840;
    menu[65].tesla_rec_twelve_pos.y = 640;
    sfSprite_setPosition(menu[65].sprite, (sfVector2f) {menu[65].
            tesla_rec_twelve_pos.x, menu[65].tesla_rec_twelve_pos.y});
    initialize_sprite("sources/images/tesla_tower.png", &menu[40]);
    sfSprite_setScale(menu[40].sprite, (sfVector2f) {0.50, 0.50});
    menu[40].tesla_spawn_pos.x = -100;
    menu[40].tesla_spawn_pos.y = -100;
    sfSprite_setPosition(menu[40].sprite, (sfVector2f) {menu[40].
            tesla_spawn_pos.x, menu[40].tesla_spawn_pos.y});
}

void set_sprite_nineteen(sprite_t *menu)
{
    initialize_sprite("sources/images/tesla_tower.png", &menu[43]);
    sfSprite_setScale(menu[43].sprite, (sfVector2f) {0.50, 0.50});
    menu[43].tesla_spawnsec_pos.x = -100;
    menu[43].tesla_spawnsec_pos.y = -100;
    sfSprite_setPosition(menu[43].sprite, (sfVector2f) {menu[43].
            tesla_spawnsec_pos.x, menu[43].tesla_spawnsec_pos.y});
    initialize_sprite("sources/images/tesla_tower.png", &menu[47]);
    sfSprite_setScale(menu[47].sprite, (sfVector2f) {0.50, 0.50});
    menu[47].tesla_spawnthree_pos.x = -100;
    menu[47].tesla_spawnthree_pos.y = -100;
    sfSprite_setPosition(menu[47].sprite, (sfVector2f) {menu[47].
            tesla_spawnthree_pos.x, menu[47].tesla_spawnthree_pos.y});
    initialize_sprite("sources/images/tesla_tower.png", &menu[48]);
    sfSprite_setScale(menu[48].sprite, (sfVector2f) {0.50, 0.50});
    menu[48].tesla_spawnfour_pos.x = -100;
    menu[48].tesla_spawnfour_pos.y = -100;
    sfSprite_setPosition(menu[48].sprite, (sfVector2f) {menu[48].
            tesla_spawnfour_pos.x, menu[48].tesla_spawnfour_pos.y});
}

void set_sprite_twenty(sprite_t *menu)
{
    initialize_sprite("sources/images/tesla_tower.png", &menu[51]);
    sfSprite_setScale(menu[51].sprite, (sfVector2f) {0.50, 0.50});
    menu[51].tesla_spawnfour_pos.x = -100;
    menu[51].tesla_spawnfour_pos.y = -100;
    sfSprite_setPosition(menu[51].sprite, (sfVector2f) {menu[51].
            tesla_spawnfour_pos.x, menu[51].tesla_spawnfour_pos.y});
    initialize_sprite("sources/images/tesla_tower.png", &menu[53]);
    sfSprite_setScale(menu[53].sprite, (sfVector2f) {0.50, 0.50});
    menu[53].tesla_spawnsix_pos.x = -100;
    menu[53].tesla_spawnsix_pos.y = -100;
    sfSprite_setPosition(menu[53].sprite, (sfVector2f) {menu[53].
            tesla_spawnsix_pos.x, menu[53].tesla_spawnsix_pos.y});
    initialize_sprite("sources/images/tesla_tower.png", &menu[54]);
    sfSprite_setScale(menu[54].sprite, (sfVector2f) {0.50, 0.50});
    menu[54].tesla_spawnseven_pos.x = -100;
    menu[54].tesla_spawnseven_pos.y = -100;
    sfSprite_setPosition(menu[54].sprite, (sfVector2f) {menu[54].
            tesla_spawnseven_pos.x, menu[54].tesla_spawnseven_pos.y});
}

void set_sprite_twentyone(sprite_t *menu)
{
    initialize_sprite("sources/images/tesla_tower.png", &menu[56]);
    sfSprite_setScale(menu[56].sprite, (sfVector2f) {0.50, 0.50});
    menu[56].tesla_spawneight_pos.x = -100;
    menu[56].tesla_spawneight_pos.y = -100;
    sfSprite_setPosition(menu[56].sprite, (sfVector2f) {menu[56].
            tesla_spawneight_pos.x, menu[56].tesla_spawneight_pos.y});
    initialize_sprite("sources/images/tour_de_l'enfer.png", &menu[78]);
    sfSprite_setScale(menu[78].sprite, (sfVector2f) {0.50, 0.50});
    menu[78].tnine_pos.x = -100;
    menu[78].tnine_pos.y = -100;
    sfSprite_setPosition(menu[78].sprite, (sfVector2f) {menu[78].
            tnine_pos.x, menu[78].tnine_pos.y});
    initialize_sprite("sources/images/tour_de_l'enfer.png", &menu[80]);
    sfSprite_setScale(menu[80].sprite, (sfVector2f) {0.50, 0.50});
    menu[80].tten_pos.x = -100;
    menu[80].tten_pos.y = -100;
    sfSprite_setPosition(menu[80].sprite, (sfVector2f) {menu[80].
            tten_pos.x, menu[80].tten_pos.y});
}

void set_sprite_twentytwo(sprite_t *menu)
{
    initialize_sprite("sources/images/tour_de_l'enfer.png", &menu[82]);
    sfSprite_setScale(menu[82].sprite, (sfVector2f) {0.50, 0.50});
    menu[82].televen_pos.x = -100;
    menu[82].televen_pos.y = -100;
    sfSprite_setPosition(menu[82].sprite, (sfVector2f) {menu[82].
            televen_pos.x, menu[82].televen_pos.y});
    sfSprite_setPosition(menu[80].sprite, (sfVector2f) {menu[80].
            tten_pos.x, menu[80].tten_pos.y});
    initialize_sprite("sources/images/tour_de_l'enfer.png", &menu[84]);
    sfSprite_setScale(menu[84].sprite, (sfVector2f) {0.50, 0.50});
    menu[84].ttwelve_pos.x = -100;
    menu[84].ttwelve_pos.y = -100;
    sfSprite_setPosition(menu[84].sprite, (sfVector2f) {menu[84].
            ttwelve_pos.x, menu[84].ttwelve_pos.y});
    initialize_sprite("sources/images/tesla_tower.png", &menu[58]);
    sfSprite_setScale(menu[58].sprite, (sfVector2f) {0.50, 0.50});
    menu[58].tesla_spawnnine_pos.x = -100;
    menu[58].tesla_spawnnine_pos.y = -100;
    sfSprite_setPosition(menu[58].sprite, (sfVector2f) {menu[58].
            tesla_spawnnine_pos.x, menu[58].tesla_spawnnine_pos.y});
}
