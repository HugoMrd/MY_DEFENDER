/*
** EPITECH PROJECT, 2021
** rac
** File description:
** rac
*/

#ifndef RAC
    #define RAC

    #include "csfml.h"

typedef struct text_s {
    sfFont* font;
    char *content;
    sfText* text;

} text_t;

typedef struct game_etat_s{
    int game;
    int frame;
    int tower;
    int towersec;
    int towerthree;
    int towerfour;
    int towerfive;
    int towersix;
    int towerseven;
    int towereight;
    int towernine;
    int towerten;
    int towereleven;
    int towertwelve;
    int tesla;
    int teslasec;
    int teslathree;
    int teslafour;
    int teslafive;
    int teslasix;
    int teslaseven;
    int teslaeight;
    int teslanine;
    int teslaten;
    int teslaeleven;
    int teslatwelve;
    int state_tower;
    int state_tesla;
    int map;
    int score;
    int elexir;
    sfClock *elex;
    sfClock *my_score;
    int game_finish;

} game_etat_t;

typedef struct button_s {
    sfRectangleShape *rect_shape;
    sfColor color;
    int state_info;
    int state_option;
    int state_exit;
    int state_back;
    int state_arrow_left;
    int state_arrow_right;
    int state_arrow_left_vol;
    int state_arrow_right_vol;
    int state_play;
    int state_play_back;
    int state_setting;
    int state_resume;
    int state_tower_spawn;
    int state_restart;

} button_t;

typedef struct window_s {
    sfRenderWindow *window;

} window_t;

typedef struct event_s {
    sfEvent event;

} event_t;

typedef struct float_s {
    float velocity;
    float seconds;

} float_t;

typedef struct my_clock_s {
    sfClock *clock;

} my_clock_t;

typedef struct recint_s {

} recint_t;

typedef struct vector_s {
    sfVector2f position;
    sfVector2f size;

} vector_t;

typedef struct vector_point_s {
    sfVector2f *pos;

} vector_point_t;

typedef struct sprite_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfSprite *play;
    sfVector2f tower_pos;
    sfVector2f tesla_pos;
    sfVector2f tesla_spawnsec_pos;
    sfVector2f tesla_spawnthree_pos;
    sfVector2f tesla_spawnfour_pos;
    sfVector2f tesla_spawnfive_pos;
    sfVector2f tesla_spawnsix_pos;
    sfVector2f tesla_spawnseven_pos;
    sfVector2f tesla_spawneight_pos;
    sfVector2f tesla_spawnnine_pos;
    sfVector2f tesla_spawnten_pos;
    sfVector2f tesla_spawneleven_pos;
    sfVector2f tesla_spawntwelve_pos;
    sfVector2f tesla_spawn_pos;
    sfVector2f t_spawn_pos;
    sfVector2f tsec_spawn_pos;
    sfVector2f tthree_spawn_pos;
    sfVector2f tfour_spawn_pos;
    sfVector2f tfive_spawn_pos;
    sfVector2f tsix_spawn_pos;
    sfVector2f tseven_spawn_pos;
    sfVector2f teight_spawn_pos;
    sfVector2f tnine_spawn_pos;
    sfVector2f tten_spawn_pos;
    sfVector2f televen_spawn_pos;
    sfVector2f ttwelve_spawn_pos;
    sfVector2f tesla_rec_pos;
    sfVector2f tesla_rec_sec_pos;
    sfVector2f tesla_rec_three_pos;
    sfVector2f tesla_rec_four_pos;
    sfVector2f tesla_rec_five_pos;
    sfVector2f tesla_rec_six_pos;
    sfVector2f tesla_rec_seven_pos;
    sfVector2f tesla_rec_eight_pos;
    sfVector2f tesla_rec_nine_pos;
    sfVector2f tesla_rec_ten_pos;
    sfVector2f tesla_rec_eleven_pos;
    sfVector2f tesla_rec_twelve_pos;
    sfVector2f t_pos;
    sfVector2f tsec_pos;
    sfVector2f tthree_pos;
    sfVector2f tfour_pos;
    sfVector2f tfive_pos;
    sfVector2f tsix_pos;
    sfVector2f tseven_pos;
    sfVector2f teight_pos;
    sfVector2f tnine_pos;
    sfVector2f tten_pos;
    sfVector2f televen_pos;
    sfVector2f ttwelve_pos;

} sprite_t;

typedef struct an_sprite_s {
    sfIntRect rect;
    sprite_t sprite;
    int nb_frame;
    int offset;
    int frame;
    sfClock *time;
    sfClock *citrouille;
    sfClock *tower;
    sfRenderWindow *window;
    int pos_x;
    int pos_y;
    sfVector2f t_pos;

} an_sprite_t;

typedef struct display_s {
    int display;
    int nb;

} display_t;

typedef struct sound_s {
    sfSound *my_sound;
    sfMusic *my_music;
    float volume;
    sfMusic *music;
    sfSoundBuffer *soundbuffer;

} sound_t;

typedef struct score_s {
    sfFont *my_font;
    sfText *my_text;
    char *containt;
    char *fontfile;

} score_t;

typedef struct main_s {
    my_clock_t my_clock;
    game_etat_t etat;
    recint_t my_recint;
    text_t text;
    button_t my_button;
    vector_t my_vector;
    window_t my_window;
    an_sprite_t *an_sprite;
    sprite_t *sprite;
    sound_t sound;
    float_t my_float;
    vector_point_t my_vector_point;
    score_t score;
    display_t my_display;

} main_t;

#endif
