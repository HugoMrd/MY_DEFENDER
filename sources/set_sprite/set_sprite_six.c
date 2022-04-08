/*
** EPITECH PROJECT, 2022
** six
** File description:
** six
*/

#include "hashtag.h"
#include "csfml.h"

void set_sprite_twenty_four(sprite_t *menu)
{
    initialize_sprite("sources/images/tower_enemy.png", &menu[87]);
    sfSprite_setPosition(menu[87].sprite, (sfVector2f) {15, 0});
    initialize_sprite("sources/images/loose_game.jpg", &menu[88]);
    initialize_sprite("sources/images/elexir.png", &menu[89]);
    sfSprite_setScale(menu[89].sprite, (sfVector2f) {0.50, 0.50});
    sfSprite_setPosition(menu[89].sprite, (sfVector2f) {400, 10});
    initialize_sprite("sources/images/trophes.png", &menu[90]);
    sfSprite_setScale(menu[90].sprite, (sfVector2f) {0.25, 0.25});
    sfSprite_setPosition(menu[90].sprite, (sfVector2f) {1300, 0});
    initialize_sprite("sources/images/you_lose.png", &menu[91]);
    sfSprite_setScale(menu[91].sprite, (sfVector2f) {1, 1});
    sfSprite_setPosition(menu[91].sprite, (sfVector2f) {760, 120});
    initialize_sprite("sources/images/fps_rect.png", &menu[92]);
    sfSprite_setScale(menu[92].sprite, (sfVector2f) {1.50, 0.50});
    sfSprite_setPosition(menu[92].sprite, (sfVector2f) {710, 80});
}

void set_sprite_twenty_five(sprite_t *menu)
{
    initialize_sprite("sources/images/exit.png", &menu[93]);
    sfSprite_setScale(menu[93].sprite, (sfVector2f) {0.60, 0.60});
    sfSprite_setPosition(menu[93].sprite, (sfVector2f) {800, 270});
    initialize_sprite("sources/images/exit_black.png", &menu[94]);
    sfSprite_setScale(menu[94].sprite, (sfVector2f) {0.60, 0.60});
    sfSprite_setPosition(menu[94].sprite, (sfVector2f) {800, 270});
}

void next_four(an_sprite_t *enemy)
{
    for (int i = 0; i != 10; i++) {
        enemy[i].pos_x = 950;
        initialize_an_sprite("sources/images/citrouille.png", &enemy[i],
49, (sfVector2i) {300, 325});
        sfSprite_setScale(enemy[i].sprite.sprite, (sfVector2f) {0.20, 0.20});
        sfSprite_setPosition(enemy[i].sprite.sprite, (sfVector2f)
{enemy->pos_x, enemy->pos_y});
    }
}
