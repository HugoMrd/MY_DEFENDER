/*
** EPITECH PROJECT, 2022
** disp game
** File description:
** disp game
*/

#include "hashtag.h"
#include "csfml.h"

void next_one(main_t *main, sprite_t *menu)
{
    if (main->my_button.state_resume == 1 && main->etat.game == 6)
        sfRenderWindow_drawSprite(main->my_window.window,
menu[32].sprite, NULL);
    if (main->my_button.state_back == 1 && main->etat.game == 6) {
        sfRenderWindow_drawSprite(main->my_window.window,
menu[18].sprite, NULL);
    }
}

void display_play_two(main_t *main, sprite_t *menu)
{
    sfRenderWindow_drawSprite(main->my_window.window, menu[28].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window, menu[38].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window, menu[40].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window, menu[47].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window, menu[48].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window, menu[51].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window, menu[53].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window, menu[54].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window, menu[56].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window, menu[58].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window, menu[60].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window, menu[62].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window, menu[64].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window, menu[43].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window, menu[45].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window, menu[66].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window, menu[68].sprite, NULL);
}

void display_loose(main_t *main, sprite_t *menu, text_t *textstruc)
{
    if (main->etat.game_finish == 69) {
        sfRenderWindow_drawSprite(main->my_window.window,
menu[88].sprite, NULL);
        sfSprite_setPosition(menu[90].sprite, (sfVector2f) {750, 375});
        sfRenderWindow_drawSprite(main->my_window.window,
menu[90].sprite, NULL);
        sfText_setPosition(textstruc[2].text, (sfVector2f) {880, 500});
        sfRenderWindow_drawText(main->my_window.window,
textstruc[2].text, NULL);
        sfRenderWindow_drawSprite(main->my_window.window,
menu[92].sprite, NULL);
        sfRenderWindow_drawSprite(main->my_window.window,
menu[91].sprite, NULL);
        sfRenderWindow_drawSprite(main->my_window.window,
menu[93].sprite, NULL);
        sfRenderWindow_drawSprite(main->my_window.window,
menu[34].sprite, NULL);
    }
}

void next_two(main_t *main, sprite_t *menu, text_t *textstruc)
{
    sfRenderWindow_drawSprite(main->my_window.window,
menu[36].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window,
menu[39].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window,
menu[87].sprite, NULL);
    display_loose(main, menu, textstruc);
    if (main->etat.game_finish == 69) {
        if (main->my_button.state_back == 1)
            sfRenderWindow_drawSprite(main->my_window.window,
menu[18].sprite, NULL);
        if (main->my_button.state_restart == 1)
            sfRenderWindow_drawSprite(main->my_window.window,
menu[94].sprite, NULL);
    }
}

void moov_coord_enem(main_t *main, sprite_t *menu, an_sprite_t *enemy,
text_t *textstruc)
{
    for (int i = 0; i != 10; i++) {
        if (enemy[i].pos_y <= 70 && main->etat.game != 6)
            enemy[i].pos_y += 1;
        if (enemy[i].pos_y >= 70 && enemy[i].pos_x >= 775 &&
            main->etat.game != 6)
            enemy[i].pos_x -= 1;
        if (enemy[i].pos_x <= 775 && enemy[i].pos_y <= 715 &&
            main->etat.game != 6)
            enemy[i].pos_y += 1;
        if (enemy[i].pos_y >= 715 && main->etat.game != 6)
                enemy[i].pos_x += 2;
        if (enemy[i].pos_y >= 715 && enemy[i].pos_x >= 910)
            main->etat.game_finish = 69;
        sfRenderWindow_drawSprite(main->my_window.window,
enemy[i].sprite.sprite, NULL);
    }
    next_two(main, menu, textstruc);
}
