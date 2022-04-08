/*
** EPITECH PROJECT, 2022
** button2
** File description:
** button2
*/

#include "hashtag.h"
#include "csfml.h"

void button_is_clicked_down_frame(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect =
    sfSprite_getGlobalBounds(menu[9].sprite);

    if (main->etat.game == 2 || main->etat.game == 7) {
        if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue)
            extend_clicked_down_frame(main);
    }
}

void button_is_clicked_down_volume(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect =
    sfSprite_getGlobalBounds(menu[20].sprite);

    if (main->etat.game == 2 || main->etat.game == 7) {
        if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue)
            extend_clicked_down_volume(main);
    }
}

void button_is_move_leftvol(main_t *main,
sprite_t *menu)
{
    sfFloatRect rect =
    sfSprite_getGlobalBounds(menu[20].sprite);
    sfVector2i pos_mouse =
    sfMouse_getPositionRenderWindow(main->my_window.window);

    if (sfFloatRect_contains(&rect, pos_mouse.x, pos_mouse.y) == sfTrue)
        main->my_button.state_arrow_left_vol = 1;
    else
        main->my_button.state_arrow_left_vol = 0;
}

void button_is_clicked_up_volume(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect =
    sfSprite_getGlobalBounds(menu[22].sprite);

    if (main->etat.game == 2 || main->etat.game == 7) {
        if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue)
            extend_clicked_up_volume(main);
    }
}

void button_is_move_rightvol(main_t *main,
sprite_t *menu)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[22].sprite);
    sfVector2i pos_mouse =
    sfMouse_getPositionRenderWindow(main->my_window.window);

    if (sfFloatRect_contains(&rect, pos_mouse.x, pos_mouse.y) == sfTrue)
        main->my_button.state_arrow_right_vol = 1;
    else
        main->my_button.state_arrow_right_vol = 0;
}
