##
## EPITECH PROJECT, 2021
## makefile
## File description:
## makefile
##

CC	=	gcc

SRC	=	include/my_putstr.c	\
		include/my_putchar.c	\
		include/my_put_nbr.c	\
		include/my_strlen.c	\
		include/my_strdup.c	\
		include/my_revstr.c	\
		include/my_int_to_string.c	\
		sources/init_sprites.c	\
		sources/main.c		\
		sources/load_music.c	\
		sources/button/button_tree.c	\
		sources/set_text.c	\
		sources/principal.c	\
		sources/my_prog.c	\
		sources/button/button_two.c	\
		sources/button/button.c	\
		sources/dash_h.c	\
		sources/display/display_menu_all.c	\
		sources/display/display_play.c	\
		sources/display/display_option_info.c	\
		sources/display/extend_display.c	\
		sources/button/move_button.c	\
		sources/button/extend_button.c	\
		sources/init_struc.c	\
		sources/button/button_four.c	\
		sources/button/button_five.c	\
		sources/button/button_six.c	\
		sources/button/button_seven.c	\
		sources/button/button_eight.c	\
		sources/button/button_nine.c	\
		sources/button/button_ten.c	\
		sources/button/button_eleven.c	\
		sources/button/button_twelve.c	\
		sources/button/button_thirteen.c	\
		sources/button/button_fourteen.c	\
		sources/button/button_all.c	\
		sources/set_sprite/set_sprite.c	\
		sources/set_sprite/set_sprite_sec.c	\
		sources/set_sprite/set_sprite_three.c	\
		sources/set_sprite/set_sprite_four.c	\
		sources/set_sprite/set_sprite_five.c	\
		sources/tesla/mouse_tesla.c	\
		sources/tesla/tesla_etat_all.c	\
		sources/tesla/tesla_etat_one.c	\
		sources/tesla/tesla_etat_two.c	\
		sources/tower/mouse_tower.c	\
		sources/tower/tower_etat_all.c	\
		sources/tower/tower_etat_one.c	\
		sources/tower/tower_etat_two.c	\
		sources/set_sprite/set_sprite_six.c \
		sources/display/display_game.c \
		sources/tower/tower_etat_tree.c \
		sources/tesla/tesla_etat_tree.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_defender

CFLAGS	=	-Wall -Wextra -g

LDFLAG	=	-lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window

CPPFLAGS	=	 -I ./include

RM	=	rm

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(SRC) $(CPPFLAGS) -g $(LDFLAG) $(CFLAGS)
clean:
	$(RM) -f $(OBJ)

fclean: clean
	$(RM) -f $(NAME)
	$(RM) -f *~
	$(RM) -f *.gcno
	$(RM) -f *.gcda
	$(RM) -f vgcore.*
	$(RM) -f *.o
	$(RM) -f a.out

re:	fclean all

.PHONY: re fclean clean all
