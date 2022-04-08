/*
** EPITECH PROJECT, 2022
** button_fifteen
** File description:
** button_fifteen
*/

#include "hashtag.h"
#include "csfml.h"

void button_is_move_restart(main_t *main,
sprite_t *menu)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[94].sprite);
    sfVector2i pos_mouse =
    sfMouse_getPositionRenderWindow(main->my_window.window);

    if (main->etat.game_finish == 69) {
        if (sfFloatRect_contains(&rect, pos_mouse.x, pos_mouse.y) == sfTrue)
            main->my_button.state_restart = 1;
        else
            main->my_button.state_restart = 0;
    }
}

void button_is_clicked_restart(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(menu[94].sprite);

    if ( main->etat.game_finish == 69) {
        if (sfFloatRect_contains(&rect, event->x, event->y) == sfTrue) {
            my_sound("sources/soundeffects/button_click.ogg", 80);
            sfRenderWindow_close(main->my_window.window);
        }
    }
}

void button_is_clicked_spawn_tesla_all(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    button_is_clicked_spawn_tesla(main, menu, event);
    button_is_clicked_spawn_tesla_sec(main, menu, event);
    button_is_clicked_spawn_tesla_three(main, menu, event);
    button_is_clicked_spawn_tesla_four(main, menu, event);
    button_is_clicked_spawn_tesla_eight(main, menu, event);
    button_is_clicked_spawn_tesla_nine(main, menu, event);
    button_is_clicked_spawn_tesla_ten(main, menu, event);
    button_is_clicked_spawn_tesla_eleven(main, menu, event);
    button_is_clicked_spawn_tesla_twelve(main, menu, event);
}

void button_is_clicked_spawn_tower_all(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event)
{
    button_is_clicked_spawn_tower(main, menu, event);
    button_is_clicked_spawn_tower_sec(main, menu, event);
    button_is_clicked_spawn_tower_three(main, menu, event);
    button_is_clicked_spawn_tower_four(main, menu, event);
    button_is_clicked_spawn_tower_five(main, menu, event);
    button_is_clicked_spawn_tower_six(main, menu, event);
    button_is_clicked_spawn_tower_seven(main, menu, event);
    button_is_clicked_spawn_tower_eight(main, menu, event);
    button_is_clicked_spawn_tower_nine(main, menu, event);
    button_is_clicked_spawn_tower_ten(main, menu, event);
    button_is_clicked_spawn_tower_eleven(main, menu, event);
    button_is_clicked_spawn_tower_twelve(main, menu, event);
}
