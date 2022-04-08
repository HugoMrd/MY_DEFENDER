/*
** EPITECH PROJECT, 2022
** mouse_tesla
** File description:
** mouse_tesla
*/

#include "hashtag.h"
#include "csfml.h"

int mouse_pressed_tesla(main_t *main, sprite_t *menu, sfEvent event)
{
    if (event.type == sfEvtMouseButtonPressed && main->etat.game == 5 &&
mouse_pressed_tower(main, menu, event) == 0) {
        if (main->etat.elexir >= 4) {
            button_is_clicked_tesla(main, menu, &event.mouseButton);
            button_is_clicked_sectesla(main, menu, &event.mouseButton);
            button_is_clicked_threetesla(main, menu, &event.mouseButton);
            button_is_clicked_fourtesla(main, menu, &event.mouseButton);
            button_is_clicked_fivetesla(main, menu, &event.mouseButton);
            button_is_clicked_sixtesla(main, menu, &event.mouseButton);
            button_is_clicked_seventesla(main, menu, &event.mouseButton);
            button_is_clicked_eighttesla(main, menu, &event.mouseButton);
            button_is_clicked_ninetesla(main, menu, &event.mouseButton);
            button_is_clicked_tentesla(main, menu, &event.mouseButton);
            button_is_clicked_eleventesla(main, menu, &event.mouseButton);
            button_is_clicked_twelvetesla(main, menu, &event.mouseButton);
            main->etat.elexir -= 4;
            return (1);
        }
    }
    return (0);
}

void mouse_released_tesla(main_t *main, sprite_t *menu, sfEvent event)
{
    if (event.type == sfEvtMouseButtonReleased && main->etat.game == 5) {
        button_is_clicked_spawn_tesla_all(main, menu, &event.mouseButton);
        main->etat.tesla = 0;
        main->etat.teslasec = 0;
        main->etat.teslathree = 0;
        main->etat.teslafour = 0;
        main->etat.teslafive = 0;
        main->etat.teslasix = 0;
        main->etat.teslaseven = 0;
        main->etat.teslaeight = 0;
        main->etat.teslanine = 0;
        main->etat.teslaten = 0;
        main->etat.teslaeleven = 0;
        main->etat.teslatwelve = 0;
    }
}
