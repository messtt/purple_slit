##
## EPITECH PROJECT, 2022
## MAKEFILE
## File description:
## Makefile
##

NAME = my_hunter
CC = gcc
RM = rm -f
OBJS = $(SRCS:.c=.o)
LIB = -L./lib/my -lmy
FLAG = -lcsfml-graphics -lcsfml-system -lcsfml-window -lcsfml-audio -g3
CFLAGS = -I./include/ -g3

SRCS = src/main.c \
	src/init/game_init.c \
	src/init/game_init_bg.c \
	src/init/game_init_enemy.c \
	src/init/game_init_character.c \
	src/draw/game_draw.c \
	src/event/game_event_damage.c \
	src/event/game_event.c \
	src/event/change_env.c \
	src/event/game_destroy.c \
	src/clock/game_clock_bg.c \
	src/clock/game_clock_character.c \
	src/clock/game_clock_enemy.c \
	src/anim/game_anim_bg.c \
	src/anim/game_anim_character.c \
	src/anim/game_anim_enemy.c \
	src/menu/game_menu.c \

all: $(NAME)

$(NAME): $(OBJS)
		make re -C ./lib/my
		$(CC) $(OBJS) -o $(NAME) $(LIB) $(CFLAGS) $(FLAG)
		rm ./lib/my/libmy.a

clean:
	$(RM) $(OBJS)

fclean: clean
	make fclean -C ./lib/my/

re : all fclean
