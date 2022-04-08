/*
** EPITECH PROJECT, 2022
** init_sprite
** File description:
** init_sprite
*/

#include "hashtag.h"
#include "csfml.h"

void initialize_sprite(char *path, sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(path, NULL);
    sprite->sprite = sfSprite_create();
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfFalse);
}

void move_rect(an_sprite_t *an_sprite, int frame)
{
    an_sprite->rect.left = an_sprite->offset * (frame % an_sprite->nb_frame);
    sfSprite_setTextureRect(an_sprite->sprite.sprite, an_sprite->rect);
}

void citrouille_clock(an_sprite_t *enemy)
{
    for (int i = 0; i != 10; i++) {
        if (sfTime_asSeconds(sfClock_getElapsedTime
(enemy[i].citrouille)) > 0.1) {
            move_rect(&enemy[i], enemy[i].frame);
            sfClock_restart(enemy[i].citrouille);
            enemy[i].frame++;
        }
    }
}

void initialize_an_sprite(char *path, an_sprite_t *an_sprite, int nb_frame,
                            sfVector2i size)
{
    an_sprite->frame = 0;
    initialize_sprite(path, &an_sprite->sprite);
    an_sprite->nb_frame = nb_frame;
    an_sprite->offset = size.x;
    an_sprite->rect.top = 0;
    an_sprite->rect.left = 0;
    an_sprite->rect.width = size.x;
    an_sprite->rect.height = size.y;
    an_sprite->citrouille = sfClock_create();
    an_sprite->tower = sfClock_create();
    sfSprite_setTextureRect(an_sprite->sprite.sprite, an_sprite->rect);
}

void initialize_text(text_t *text, char *fontpath, char *content,
                        sfVector2i pos)
{
    text->font = sfFont_createFromFile(fontpath);
    text->content = my_strdup(content);
    text->text = sfText_create();
    sfText_setString(text->text, text->content);
    sfText_setFont(text->text, text->font);
    sfText_setCharacterSize(text->text, 100);
    sfText_setPosition(text->text, (sfVector2f){pos.x, pos.y});
}
