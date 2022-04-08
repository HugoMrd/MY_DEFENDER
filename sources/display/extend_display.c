/*
** EPITECH PROJECT, 2022
** extend_display
** File description:
** extend_display
*/

#include "hashtag.h"
#include "csfml.h"

void extend_display(main_t *main, sprite_t *menu, text_t *textstruc)
{
    sfRenderWindow_drawSprite(main->my_window.window,
    menu[11].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window,
    menu[12].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window,
    menu[8].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window,
    menu[20].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window,
    menu[22].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window,
    menu[24].sprite, NULL);
    sfRenderWindow_drawText(main->my_window.window,
    textstruc[0].text, NULL);
    sfRenderWindow_drawText(main->my_window.window,
    textstruc[1].text, NULL);
}

void extend_display_setting(main_t *main, sprite_t *menu, text_t *textstruc)
{
    sfRenderWindow_drawSprite(main->my_window.window,
    menu[11].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window,
    menu[12].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window,
    menu[34].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window,
    menu[20].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window,
    menu[22].sprite, NULL);
    sfRenderWindow_drawSprite(main->my_window.window,
    menu[24].sprite, NULL);
    sfRenderWindow_drawText(main->my_window.window,
    textstruc[0].text, NULL);
    sfRenderWindow_drawText(main->my_window.window,
    textstruc[1].text, NULL);
}
