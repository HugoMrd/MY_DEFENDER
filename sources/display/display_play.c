/*
** EPITECH PROJECT, 2022
** display_play
** File description:
** display_play
*/

#include "hashtag.h"
#include "csfml.h"

void next(main_t *main, sprite_t *menu, text_t *textstruc)
{
    sfRenderWindow_drawSprite(main->my_window.window,
menu[82].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window,
menu[84].sprite, NULL);
    sfRenderWindow_drawText(main->my_window.window,
textstruc[2].text, NULL);
    sfRenderWindow_drawSprite(main->my_window.window,
menu[89].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window,
menu[90].sprite, NULL);
    sfRenderWindow_drawText(main->my_window.window,
textstruc[3].text, NULL);
}

void display_play(main_t *main, sprite_t *menu, an_sprite_t *enemy,
text_t *textstruc)
{
    if (main->etat.game == 5 || main->etat.game == 6) {
        display_play_two(main, menu);
        sfRenderWindow_drawSprite(main->my_window.window,
menu[70].sprite, NULL);
        sfRenderWindow_drawSprite(main->my_window.window,
menu[72].sprite, NULL);
        sfRenderWindow_drawSprite(main->my_window.window,
menu[74].sprite, NULL);
        sfRenderWindow_drawSprite(main->my_window.window,
menu[76].sprite, NULL);
        sfRenderWindow_drawSprite(main->my_window.window,
menu[78].sprite, NULL);
        sfRenderWindow_drawSprite(main->my_window.window,
menu[80].sprite, NULL);
        next(main, menu, textstruc);
        moov_coord_enem(main, menu, enemy, textstruc);
    }
}

void display_play_pause(main_t *main, sprite_t *menu, an_sprite_t *enemy)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape) && main->etat.game == 5
&& main->etat.game_finish != 69)
        main->etat.game = 6;
    if (main->etat.game == 6) {
        for (int i = 0; i != 10; i++)
            sfClock_restart(enemy[i].citrouille);
        sfRenderWindow_drawSprite(main->my_window.window,
menu[29].sprite, NULL);
        sfRenderWindow_drawSprite(main->my_window.window,
menu[30].sprite, NULL);
        sfRenderWindow_drawSprite(main->my_window.window,
menu[34].sprite, NULL);
    }
    if (main->my_button.state_setting == 1 && main->etat.game == 6)
        sfRenderWindow_drawSprite(main->my_window.window,
menu[31].sprite, NULL);
    next_one(main, menu);
}

void display_cond_setting_play(main_t *main, sprite_t *menu)
{
    if (main->my_button.state_arrow_left == 1)
        sfRenderWindow_drawSprite(main->my_window.window,
        menu[16].sprite, NULL);
    if (main->my_button.state_arrow_right == 1)
        sfRenderWindow_drawSprite(main->my_window.window,
        menu[17].sprite, NULL);
    if (main->my_button.state_play_back == 1)
        sfRenderWindow_drawSprite(main->my_window.window,
        menu[33].sprite, NULL);
    if (main->my_button.state_arrow_left_vol == 1)
        sfRenderWindow_drawSprite(main->my_window.window,
        menu[21].sprite, NULL);
    if (main->my_button.state_arrow_right_vol == 1)
        sfRenderWindow_drawSprite(main->my_window.window,
        menu[23].sprite, NULL);
}

void display_play_setting(main_t *main, sprite_t *menu, text_t *textstruc,
an_sprite_t *enemy)
{
    if (main->etat.game == 7 && main->etat.game != 2) {
        sfClock_restart(enemy->citrouille);
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
        extend_display_setting(main, menu, textstruc);
        display_cond_setting_play(main, menu);
    }
}
