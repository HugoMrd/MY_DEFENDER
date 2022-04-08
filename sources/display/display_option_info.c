/*
** EPITECH PROJECT, 2022
** display_option_info
** File description:
** display_option_info
*/

#include "hashtag.h"
#include "csfml.h"

void display_info(main_t *main, sprite_t *menu)
{
    if (main->etat.game == 4 && main->etat.game != 2) {
        sfRenderWindow_drawSprite(main->my_window.window,
menu[5].sprite, NULL);
        sfRenderWindow_drawSprite(main->my_window.window,
menu[6].sprite, NULL);
        sfRenderWindow_drawSprite(main->my_window.window,
menu[7].sprite, NULL);
        sfRenderWindow_drawSprite(main->my_window.window,
menu[8].sprite, NULL);
        if (main->my_button.state_back == 1)
            sfRenderWindow_drawSprite(main->my_window.window,
            menu[18].sprite, NULL);
    }
}

void display_cond_option(main_t *main, sprite_t *menu)
{
    if (main->my_button.state_arrow_left == 1)
        sfRenderWindow_drawSprite(main->my_window.window,
        menu[16].sprite, NULL);
    if (main->my_button.state_arrow_right == 1)
        sfRenderWindow_drawSprite(main->my_window.window,
        menu[17].sprite, NULL);
    if (main->my_button.state_back == 1)
        sfRenderWindow_drawSprite(main->my_window.window,
        menu[18].sprite, NULL);
    if (main->my_button.state_arrow_left_vol == 1)
        sfRenderWindow_drawSprite(main->my_window.window,
        menu[21].sprite, NULL);
    if (main->my_button.state_arrow_right_vol == 1)
        sfRenderWindow_drawSprite(main->my_window.window,
        menu[23].sprite, NULL);
}

void display_option(main_t *main, text_t *textstruc, sprite_t *menu)
{
    if (main->etat.game == 2 && main->etat.game != 3
    && main->etat.game != 4 && main->etat.game != 7) {
        sfRenderWindow_drawSprite(main->my_window.window,
        menu[10].sprite, NULL);
        sfRenderWindow_drawSprite(main->my_window.window,
        menu[9].sprite, NULL);
        sfRenderWindow_drawSprite(main->my_window.window,
        menu[19].sprite, NULL);
        sfRenderWindow_drawSprite(main->my_window.window,
        menu[25].sprite, NULL);
        if (main->sound.volume == 0)
            sfRenderWindow_drawSprite(main->my_window.window,
            menu[26].sprite, NULL);
        extend_display(main, menu, textstruc);
        display_cond_option(main, menu);
    }
}
