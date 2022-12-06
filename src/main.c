/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** simple example file
*/

#include "../include/game.h"

int my_stc_cat(void)
{
    char file = open("rule", O_RDONLY);
    if (file == -1){
        return 1;
    }
    char c;
    for (;read(file, &c, 1);){
        my_putchar(c);
    }
    return 0;
}

int main(int argc, char **argv)
{
    if (argc > 2)
        return 84;
    if (argc == 2 && argv[1][0] == '-' && argv[1][1] == 'h') {
        my_stc_cat();
        return 0;
    }
    global_t g;
    game_menu(&g);
    game_init(&g);
    while (sfRenderWindow_isOpen(g.window)) {
        while (sfRenderWindow_pollEvent(g.window, &g.event)) {
            game_event(&g);
        }
        game_draw(&g);
    }
    game_destroy(&g);
}
