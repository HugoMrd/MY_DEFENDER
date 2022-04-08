/*
** EPITECH PROJECT, 2022
** button_four
** File description:
** button_four
*/

#include "hashtag.h"
#include "csfml.h"

void button_is_move_play(main_t *main,
sprite_t *menu)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[1].sprite);
    sfVector2i pos_mouse =
    sfMouse_getPositionRenderWindow(main->my_window.window);

    if (main->etat.game == 0) {
        if (sfFloatRect_contains(&rect, pos_mouse.x, pos_mouse.y) == sfTrue)
            main->my_button.state_play = 1;
        else
            main->my_button.state_play = 0;
    }
}

void button_is_move_setting(main_t *main,
sprite_t *menu)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[30].sprite);
    sfVector2i pos_mouse =
    sfMouse_getPositionRenderWindow(main->my_window.window);

    if (main->etat.game == 6) {
        if (sfFloatRect_contains(&rect, pos_mouse.x, pos_mouse.y) == sfTrue)
            main->my_button.state_setting = 1;
        else
            main->my_button.state_setting = 0;
    }
}

void button_is_clicked_setting(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[30].sprite);

    if (main->etat.game == 6) {
        if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/button_click.ogg", 80);
            main->etat.game = 7;
        }
    }
}

void button_is_move_resume(main_t *main,
sprite_t *menu)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[29].sprite);
    sfVector2i pos_mouse =
    sfMouse_getPositionRenderWindow(main->my_window.window);

    if (main->etat.game == 6) {
        if (sfFloatRect_contains(&rect, pos_mouse.x, pos_mouse.y) == sfTrue)
            main->my_button.state_resume = 1;
        else
            main->my_button.state_resume = 0;
    }
}
