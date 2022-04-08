/*
** EPITECH PROJECT, 2022
** set_text
** File description:
** 
*/

#include "hashtag.h"
#include "csfml.h"

void set_text(text_t *textstruc)
{
    initialize_text(&textstruc[0], "sources/images/font.ttf", "60",
                    (sfVector2i) {910, 632});
    initialize_text(&textstruc[1], "sources/images/font.ttf", " ",
                    (sfVector2i) {910, 190});
    initialize_text(&textstruc[2], "sources/images/font.ttf", " ",
                    (sfVector2i) {1450, 110});
    initialize_text(&textstruc[3], "sources/images/font.ttf", " ",
                    (sfVector2i) {450, 110});
}
