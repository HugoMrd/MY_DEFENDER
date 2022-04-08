/*
** EPITECH PROJECT, 2022
** button3
** File description:
** button3
*/

#include "hashtag.h"
#include "csfml.h"

void button_is_move_back(main_t *main,
sprite_t *menu)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[8].sprite);
    sfVector2i pos_mouse =
    sfMouse_getPositionRenderWindow(main->my_window.window);

    if ((main->etat.game != 0 && main->etat.game != 7)
|| main->etat.game_finish == 69) {
        if (sfFloatRect_contains(&rect, pos_mouse.x, pos_mouse.y) == sfTrue)
            main->my_button.state_back = 1;
        else
            main->my_button.state_back = 0;
    }
}

void button_is_move_back_setting(main_t *main,
sprite_t *menu)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[34].sprite);
    sfVector2i pos_mouse =
    sfMouse_getPositionRenderWindow(main->my_window.window);

    if (main->etat.game == 7) {
        if (sfFloatRect_contains(&rect, pos_mouse.x, pos_mouse.y) == sfTrue)
            main->my_button.state_play_back = 1;
        else
            main->my_button.state_play_back = 0;
    }
}

void button_is_move_arrow_right(main_t *main,
sprite_t *menu)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[11].sprite);
    sfVector2i pos_mouse =
    sfMouse_getPositionRenderWindow(main->my_window.window);

    if (main->etat.game == 2 || main->etat.game == 7) {
        if (sfFloatRect_contains(&rect, pos_mouse.x, pos_mouse.y) == sfTrue)
            main->my_button.state_arrow_right = 1;
        else
            main->my_button.state_arrow_right = 0;
    }
}

void button_is_clicked_up_frame(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[11].sprite);

    if (main->etat.game == 2 || main->etat.game == 7) {
        if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue)
            extend_clicked_up_frame(main);
    }
}

void button_is_clicked_play(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[1].sprite);

    if (main->etat.game == 0) {
        if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/button_click.ogg", 80);
            main->etat.game = 5;
        }
    }
}
