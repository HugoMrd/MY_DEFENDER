/*
** EPITECH PROJECT, 2021
** defender
** File description:
** defender
*/

#ifndef DEFENDER_H
    #define DEFENDER_H

    #include "rac.h"

int my_h(int ac, char **av);
void main_dash_h(void);
void window_disp(main_t *main);
void initialize_an_sprite(char *path, an_sprite_t *an_sprite, int nb_frame,
                        sfVector2i size);
void initialize_sprite(char *path, sprite_t *sprite);
void init_button(main_t *main, int size, sfVector2f pos);
void button_is_clicked(main_t *main, sprite_t *menu,
sfMouseButtonEvent *event);
void button_is_clicked_back(main_t *main, sprite_t *menu,
                        sfMouseButtonEvent *event);
void button_is_clicked_option(main_t *main, sprite_t *menu,
                            sfMouseButtonEvent *event);
void my_music(char *file);
void play_music(main_t *main);
void button_is_clicked_exit(main_t *main, sprite_t *menu,
                        sfMouseButtonEvent *event);
void initialize_text(text_t *text, char *fontpath, char *content,
                sfVector2i pos);
void button_is_clicked_up_frame(main_t *main, sprite_t *menu,
                            sfMouseButtonEvent *event);
void button_is_clicked_down_frame(main_t *main, sprite_t *menu,
sfMouseButtonEvent *event);
void set_sprite(sprite_t *menu);
void set_sprite_two(sprite_t *menu);
void display(main_t *main, sprite_t *menu);
sfRenderWindow *createwindow(main_t *main);
void my_sound(char *music, float volume);
void button_is_move_info(main_t *main, sprite_t *menu);
void set_sprite_three(sprite_t *menu);
void button_is_move_option(main_t *main, sprite_t *menu);
void button_is_move_exit(main_t *main, sprite_t *menu);
void button_is_move_arrow_left(main_t *main, sprite_t *menu);
void button_is_move_arrow_right(main_t *main, sprite_t *menu);
void button_is_move_back(main_t *main, sprite_t *menu);
void set_sprite_four(sprite_t *menu);
void set_text(text_t *textstruc);
void button_is_clicked_down_volume(main_t *main, sprite_t *menu,
sfMouseButtonEvent *event);
void button_is_move_leftvol(main_t *main, sprite_t *menu);
void button_is_clicked_up_volume(main_t *main, sprite_t *menu,
sfMouseButtonEvent *event);
void button_is_move_rightvol(main_t *main, sprite_t *menu);
void set_sprite_five(sprite_t *menu);
void extend_clicked_up_frame(main_t *main);
void extend_clicked_down_frame(main_t *main);
void extend_clicked_up_volume(main_t *main);
void extend_clicked_down_volume(main_t *main);
void extend_display(main_t *main, sprite_t *menu, text_t *textstruc);
void button_is_move_play(main_t *main,
sprite_t *menu);
void button_is_clicked_play(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void citrouille_clock(an_sprite_t *enemy);
void button_is_clicked_resume(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_move_resume(main_t *main,
sprite_t *menu);
void button_is_clicked_setting(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_move_setting(main_t *main,
sprite_t *menu);
void extend_display_setting(main_t *main, sprite_t *menu, text_t *textstruc);
void button_is_move_back_setting(main_t *main,sprite_t *menu);
void button_is_clicked_back_setting(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void init_struc(main_t *main);
void display_all(main_t *main, sprite_t *menu, text_t *textstruc,
an_sprite_t *enemy);
void display_play_pause(main_t *main, sprite_t *menu, an_sprite_t *enemy);
void display_play(main_t *main, sprite_t *menu, an_sprite_t *enemy,
text_t *textstruc);
void display_play_setting(main_t *main, sprite_t *menu, text_t *textstruc,
an_sprite_t *enemy);
void display_cond_option(main_t *main, sprite_t *menu);
void display_option(main_t *main, text_t *textstruc, sprite_t *menu);
void display_info(main_t *main, sprite_t *menu);
void button_is_clicked_tower(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_spawn_tesla(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_tesla(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void set_sprite_six(sprite_t *menu);
void set_sprite_seven(sprite_t *menu, an_sprite_t *enemy);
void set_sprite_eight(sprite_t *menu);
void set_sprite_all_one(sprite_t *menu, an_sprite_t *enemy);
void set_sprite_all_two(sprite_t *menu);

void button_is_clicked_sectesla(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_sectower(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_threetesla(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_fourtesla(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_fivetesla(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_sixtesla(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_seventesla(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_eighttesla(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_ninetesla(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_tentesla(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_twelvetesla(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_eleventesla(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);

void button_is_clicked_threetower(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_fourtower(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_fivetower(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_sixtower(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_seventower(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_eighttower(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_ninetower(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_tentower(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_eleventower(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_twelvetower(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);

void button_is_clicked_spawn_tower_all(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_spawn_tesla_all(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);

void button_is_clicked_spawn_tower(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_spawn_tower_sec(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_spawn_tower_three(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_spawn_tower_four(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_spawn_tower_five(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_spawn_tower_six(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_spawn_tower_seven(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_spawn_tower_eight(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_spawn_tower_nine(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_spawn_tower_ten(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_spawn_tower_eleven(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_spawn_tower_twelve(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);

void button_is_clicked_spawn_tesla(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_spawn_tesla_sec(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_spawn_tesla_three(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_spawn_tesla_four(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_spawn_tesla_five(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_spawn_tesla_six(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_spawn_tesla_seven(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_spawn_tesla_eight(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_spawn_tesla_nine(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_spawn_tesla_ten(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_spawn_tesla_eleven(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);
void button_is_clicked_spawn_tesla_twelve(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);

void tesla_etat_one(main_t *main, sprite_t *menu);
void tesla_etat_two(main_t *main, sprite_t *menu);
void tesla_etat_three(main_t *main, sprite_t *menu);
void tesla_etat_four(main_t *main, sprite_t *menu);
void tesla_etat_five(main_t *main, sprite_t *menu);
void tesla_etat_six(main_t *main, sprite_t *menu);
void tesla_etat_seven(main_t *main, sprite_t *menu);
void tesla_etat_eight(main_t *main, sprite_t *menu);
void tesla_etat_nine(main_t *main, sprite_t *menu);
void tesla_etat_ten(main_t *main, sprite_t *menu);
void tesla_etat_all(main_t *main, sprite_t *menu);

void tower_etat_one(main_t *main, sprite_t *menu);
void tower_etat_two(main_t *main, sprite_t *menu);
void tower_etat_three(main_t *main, sprite_t *menu);
void tower_etat_four(main_t *main, sprite_t *menu);
void tower_etat_five(main_t *main, sprite_t *menu);
void tower_etat_six(main_t *main, sprite_t *menu);
void tower_etat_seven(main_t *main, sprite_t *menu);
void tower_etat_eight(main_t *main, sprite_t *menu);
void tower_etat_nine(main_t *main, sprite_t *menu);
void tower_etat_ten(main_t *main, sprite_t *menu);
void tower_etat_all(main_t *main, sprite_t *menu);

int mouse_pressed_tesla(main_t *main, sprite_t *menu, sfEvent event);
void mouse_released_tesla(main_t *main, sprite_t *menu, sfEvent event);
int mouse_pressed_tower(main_t *main, sprite_t *menu, sfEvent event);
void mouse_released_tower(main_t *main, sprite_t *menu, sfEvent event);

void init_struc_tesla(main_t *main);
void init_struc_tower(main_t *main);
void init_struc_enemy(main_t *main, an_sprite_t *enemy);

void button_is_move_restart(main_t *main,
sprite_t *menu);
void button_is_clicked_restart(main_t *main,
sprite_t *menu, sfMouseButtonEvent *event);

void set_sprite_twenty_five(sprite_t *menu);
void set_sprite_nine(sprite_t *menu);
void set_sprite_ten(sprite_t *menu);
void set_sprite_eleven(sprite_t *menu);
void set_sprite_twelve(sprite_t *menu);
void set_sprite_thirteen(sprite_t *menu);
void set_sprite_fourteen(sprite_t *menu);
void set_sprite_fifteen(sprite_t *menu);
void set_sprite_sixteen(sprite_t *menu);
void set_sprite_seventeen(sprite_t *menu);
void set_sprite_eighteen(sprite_t *menu);
void set_sprite_nineteen(sprite_t *menu);
void set_sprite_twenty(sprite_t *menu);
void set_sprite_twentyone(sprite_t *menu);
void set_sprite_twentytwo(sprite_t *menu);
void set_sprite_twentythree(sprite_t *menu);
void set_sprite_twenty_four(sprite_t *menu);
void display_play_two(main_t *main, sprite_t *menu);
void moov_coord_enem(main_t *main, sprite_t *menu, an_sprite_t *enemy,
text_t *textstruc);
void next_one(main_t *main, sprite_t *menu);
void next_four(an_sprite_t *enemy);
void tower_next_one(main_t *main, sprite_t *menu, sfVector2i save_curs);
void tower_next_two(main_t *main, sprite_t *menu, sfVector2i save_curs);
void tower_next_tree(main_t *main, sprite_t *menu, sfVector2i save_curs);
void tower_next_four(main_t *main, sprite_t *menu, sfVector2i save_curs);
void tesla_next_one(main_t *main, sprite_t *menu, sfVector2i save_curs);
void tesla_next_two(main_t *main, sprite_t *menu, sfVector2i save_curs);
void tesla_next_tree(main_t *main, sprite_t *menu, sfVector2i save_curs);
void tesla_next_four(main_t *main, sprite_t *menu, sfVector2i save_curs);

#endif
