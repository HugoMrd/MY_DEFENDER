/*
** EPITECH PROJECT, 2022
** mouse_tower
** File description:
** mouse_tower
*/

#include "hashtag.h"
#include "csfml.h"

int mouse_pressed_tower(main_t *main, sprite_t *menu, sfEvent event)
{
    if (event.type == sfEvtMouseButtonPressed && main->etat.game == 5 ) {
        if (main->etat.elexir >= 5) {
            button_is_clicked_tower(main, menu, &event.mouseButton);
            button_is_clicked_sectower(main, menu, &event.mouseButton);
            button_is_clicked_threetower(main, menu, &event.mouseButton);
            button_is_clicked_fourtower(main, menu, &event.mouseButton);
            button_is_clicked_fivetower(main, menu, &event.mouseButton);
            button_is_clicked_sixtower(main, menu, &event.mouseButton);
            button_is_clicked_seventower(main, menu, &event.mouseButton);
            button_is_clicked_eighttower(main, menu, &event.mouseButton);
            button_is_clicked_ninetower(main, menu, &event.mouseButton);
            button_is_clicked_tentower(main, menu, &event.mouseButton);
            button_is_clicked_eleventower(main, menu, &event.mouseButton);
            button_is_clicked_twelvetower(main, menu, &event.mouseButton);
            main->etat.elexir -= 5;
            return (1);
        }
    }
    return (0);
}

void mouse_released_tower(main_t *main, sprite_t *menu, sfEvent event)
{
    if (event.type == sfEvtMouseButtonReleased && main->etat.game == 5) {
        button_is_clicked_spawn_tower_all(main, menu, &event.mouseButton);
        main->etat.tower = 0;
        main->etat.towersec = 0;
        main->etat.towerthree = 0;
        main->etat.towerfour = 0;
        main->etat.towerfive = 0;
        main->etat.towersix = 0;
        main->etat.towerseven = 0;
        main->etat.towereight = 0;
        main->etat.towernine = 0;
        main->etat.towerten = 0;
        main->etat.towereleven = 0;
        main->etat.towertwelve = 0;
    }
}
