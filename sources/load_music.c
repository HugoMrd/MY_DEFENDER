/*
** EPITECH PROJECT, 2022
** music
** File description:
** music
*/

#include "hashtag.h"
#include "csfml.h"

void my_sound(char *music, float volume)
{
    sfSound *sound;
    sfSoundBuffer *soundbuffer;

    soundbuffer = sfSoundBuffer_createFromFile(music);
    sound = sfSound_create();
    sfSound_setBuffer(sound, soundbuffer);
    sfSound_setVolume(sound, volume);
    sfSound_play(sound);
}

void my_music(char *file)
{
    sfSound *sound;
    sfSoundBuffer *soundbuffer;

    soundbuffer = sfSoundBuffer_createFromFile(file);
    sound = sfSound_create();
    sfSound_setBuffer(sound, soundbuffer);
    sfSound_play(sound);
}

sfMusic *create_music(main_t *main, sfMusic *my_music)
{
    main->sound.volume = 50;
    my_music = sfMusic_createFromFile("sources/soundeffects/coc_music.ogg");
    sfMusic_setLoop(my_music, sfTrue);
    sfMusic_play(my_music);
    return (my_music);
}

void play_music(main_t *main)
{
    main->etat.game = 0;
    main->sound.music = create_music(main, main->sound.music);
}
