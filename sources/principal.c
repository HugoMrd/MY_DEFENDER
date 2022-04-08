/*
** EPITECH PROJECT, 2022
** principal
** File description:
** principal
*/

#include "hashtag.h"
#include "csfml.h"

void refresh_text(main_t *main, text_t *textstruc)
{
    textstruc[0].content = my_int_to_string(main->etat.frame);
    sfText_setString(textstruc[0].text, textstruc[0].content);
    textstruc[1].content = my_int_to_string(main->sound.volume);
    sfText_setString(textstruc[1].text, textstruc[1].content);
    textstruc[2].content = my_int_to_string(main->etat.score);
    sfText_setString(textstruc[2].text, textstruc[2].content);
    textstruc[3].content = my_int_to_string(main->etat.elexir);
    sfText_setString(textstruc[3].text, textstruc[3].content);
}

void call_move(main_t *main, sprite_t *menu)
{
    button_is_move_option(main, menu);
    button_is_move_info(main, menu);
    button_is_move_exit(main, menu);
    button_is_move_arrow_left(main, menu);
    button_is_move_arrow_right(main, menu);
    button_is_move_back(main, menu);
    button_is_move_leftvol(main, menu);
    button_is_move_rightvol(main, menu);
    button_is_move_play(main, menu);
    button_is_move_setting(main, menu);
    button_is_move_resume(main, menu);
    button_is_move_back_setting(main, menu);
    button_is_move_restart(main, menu);
}

void call_cliked(main_t *main, sprite_t *menu, sfEvent event)
{
    button_is_clicked(main, menu, &event.mouseButton);
    button_is_clicked_exit(main, menu, &event.mouseButton);
    button_is_clicked_back(main, menu, &event.mouseButton);
    button_is_clicked_option(main, menu, &event.mouseButton);
    button_is_clicked_up_frame(main, menu, &event.mouseButton);
    button_is_clicked_down_frame(main, menu, &event.mouseButton);
    sfRenderWindow_setFramerateLimit(main->my_window.window, main->etat.frame);
    sfMusic_setVolume(main->sound.music, main->sound.volume);
    button_is_clicked_down_volume(main, menu, &event.mouseButton);
    button_is_clicked_up_volume(main, menu, &event.mouseButton);
    button_is_clicked_play(main, menu, &event.mouseButton);
    button_is_clicked_setting(main, menu, &event.mouseButton);
    button_is_clicked_resume(main, menu, &event.mouseButton);
    button_is_clicked_back_setting(main, menu, &event.mouseButton);
    button_is_clicked_restart(main, menu, &event.mouseButton);
}

void handle_event(main_t *main, sprite_t *menu, text_t *textstruc)
{
    sfEvent event;

    refresh_text(main, textstruc);
    tesla_etat_all(main, menu);
    tower_etat_all(main, menu);
    while (sfRenderWindow_pollEvent(main->my_window.window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(main->my_window.window);
        call_move(main, menu);
        if (event.type == sfEvtMouseButtonPressed) {
            call_cliked(main, menu, event);
        }
        mouse_pressed_tesla(main, menu, event);
        mouse_released_tesla(main, menu, event);
        mouse_pressed_tower(main, menu, event);
        mouse_released_tower(main, menu, event);
        if (main->etat.game == 3)
            sfRenderWindow_close(main->my_window.window);
    }
}

void window_disp(main_t *main)
{
    sprite_t menu[95];
    text_t textstruc[4];
    an_sprite_t enemy[12];

    main->etat.elex = sfClock_create();
    main->etat.my_score = sfClock_create();
    main->my_window.window = createwindow(main);
    set_sprite(menu);
    init_struc_enemy(main, enemy);
    set_sprite_all_one(menu, enemy);
    set_sprite_all_two(menu);
    play_music(main);
    set_text(textstruc);
    while (sfRenderWindow_isOpen(main->my_window.window)) {
        handle_event(main, menu, textstruc);
        citrouille_clock(enemy);
        display_all(main, menu, textstruc, enemy);
    }
}
