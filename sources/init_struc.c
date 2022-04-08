/*
** EPITECH PROJECT, 2022
** init_struc
** File description:
** init_struc
*/

#include "hashtag.h"

void init_struc(main_t *main)
{
    main->my_button.state_back = 0;
    main->my_button.state_info = 0;
    main->my_button.state_option = 0;
    main->my_button.state_exit = 0;
    main->my_button.state_play = 0;
    main->my_button.state_back = 0;
    main->my_button.state_setting = 0;
    main->my_button.state_resume = 0;
    main->my_button.state_back = 0;
    main->my_button.state_arrow_left = 0;
    main->my_button.state_arrow_right = 0;
    main->my_button.state_play_back = 0;
    main->my_button.state_arrow_left_vol = 0;
    main->my_button.state_arrow_right_vol = 0;
    main->etat.game_finish = 0;
    main->etat.score = 0;
    main->etat.elexir = 3;
}

void init_struc_tesla(main_t *main)
{
    main->etat.state_tesla = 0;
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

void init_struc_tower(main_t *main)
{
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
    main->etat.state_tower = 0;
}

void init_struc_enemy(main_t *main, an_sprite_t *enemy)
{
    init_struc(main);
    init_struc_tesla(main);
    init_struc_tower(main);
    for (int i = 0; i != 10; i++)
        enemy[i].pos_y = i * -200;
}
