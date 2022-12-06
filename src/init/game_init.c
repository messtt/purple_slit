/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** simple example file
*/

#include "../../include/game.h"
void game_init(global_t *g)
{
    sfVideoMode mode = {1920, 1080, 64};
    g->window = sfRenderWindow_create(mode, " ", sfResize | sfClose, NULL);
    game_init_enemy(g);
    game_init_character(g);
    init_bg(g);
}
