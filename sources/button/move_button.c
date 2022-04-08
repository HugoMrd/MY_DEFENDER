/*
** EPITECH PROJECT, 2022
** move_button
** File description:
** move_button
*/

#include "hashtag.h"
#include "csfml.h"

void button_is_move_info(main_t *main, sprite_t *menu)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[4].sprite);
    sfVector2i pos_mouse =
    sfMouse_getPositionRenderWindow(main->my_window.window);

    if (main->etat.game == 0) {
        if (sfFloatRect_contains(&rect, pos_mouse.x, pos_mouse.y) == sfTrue)
            main->my_button.state_info = 1;
        else
            main->my_button.state_info = 0;
    }
}

void button_is_move_option(main_t *main, sprite_t *menu)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[2].sprite);
    sfVector2i pos_mouse =
    sfMouse_getPositionRenderWindow(main->my_window.window);

    if (main->etat.game == 0) {
        if (sfFloatRect_contains(&rect, pos_mouse.x, pos_mouse.y) == sfTrue)
            main->my_button.state_option = 1;
        else
            main->my_button.state_option = 0;
    }
}

void button_is_move_exit(main_t *main, sprite_t *menu)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[3].sprite);
    sfVector2i pos_mouse =
    sfMouse_getPositionRenderWindow(main->my_window.window);

    if (main->etat.game == 0) {
        if (sfFloatRect_contains(&rect, pos_mouse.x, pos_mouse.y) == sfTrue)
            main->my_button.state_exit = 1;
        else
            main->my_button.state_exit = 0;
    }
}

void button_is_move_arrow_left(main_t *main, sprite_t *menu)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[9].sprite);
    sfVector2i pos_mouse =
    sfMouse_getPositionRenderWindow(main->my_window.window);

    if (main->etat.game == 2 || main->etat.game == 7) {
        if (sfFloatRect_contains(&rect, pos_mouse.x, pos_mouse.y) == sfTrue)
            main->my_button.state_arrow_left = 1;
        else
            main->my_button.state_arrow_left = 0;
    }
}
