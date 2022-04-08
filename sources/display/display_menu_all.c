/*
** EPITECH PROJECT, 2022
** display
** File description:
** display
*/

#include "hashtag.h"
#include "csfml.h"

sfRenderWindow *createwindow(main_t *main)
{
    sfVideoMode display_size = {1920, 1020, 32};
    sfRenderWindow *window = sfRenderWindow_create      \
        (display_size, "My_Defender", sfResize | sfClose, NULL);

    main->etat.frame = 60;
    return window;
}

void display_menu(main_t *main, sprite_t *menu)
{
    sfRenderWindow_clear(main->my_window.window, sfBlack);
    sfRenderWindow_drawSprite(main->my_window.window, menu[0].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window, menu[1].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window, menu[2].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window, menu[3].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window, menu[4].sprite, NULL);
}

void display_move_menu(main_t *main, sprite_t *menu)
{
    if (main->my_button.state_info == 1 && main->etat.game == 0)
        sfRenderWindow_drawSprite(main->my_window.window,
        menu[13].sprite, NULL);
    if (main->my_button.state_option == 1 && main->etat.game == 0)
        sfRenderWindow_drawSprite(main->my_window.window,
        menu[14].sprite, NULL);
    if (main->my_button.state_exit == 1 && main->etat.game == 0)
        sfRenderWindow_drawSprite(main->my_window.window,
        menu[15].sprite, NULL);
    if (main->my_button.state_play == 1 && main->etat.game == 0)
        sfRenderWindow_drawSprite(main->my_window.window,
        menu[27].sprite, NULL);
}

void clock_game(main_t *main)
{
    if (sfTime_asSeconds(sfClock_getElapsedTime
(main->etat.my_score)) > 0.4 && main->etat.game_finish != 69) {
        main->etat.score += 5;
        sfClock_restart(main->etat.my_score);
    }
    if (sfTime_asSeconds(sfClock_getElapsedTime
(main->etat.elex)) > 1) {
        main->etat.elexir += 1;
        sfClock_restart(main->etat.elex);
    }
}

void display_all(main_t *main, sprite_t *menu, text_t *textstruc,
an_sprite_t *enemy)
{
    display_menu(main, menu);
    display_option(main, textstruc, menu);
    display_info(main, menu);
    display_move_menu(main, menu);
    display_play(main, menu, enemy, textstruc);
    display_play_pause(main, menu, enemy);
    display_play_setting(main, menu, textstruc, enemy);
    sfRenderWindow_display(main->my_window.window);
    if (main->etat.game == 5)
        clock_game(main);
    for (int i = 0; i != 10; i++)
        sfSprite_setPosition(enemy[i].sprite.sprite, (sfVector2f)
        {enemy[i].pos_x, enemy[i].pos_y});
}
