/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** simple example file
*/

#include "../../include/game.h"

int game_clock_bg_bg(global_t *g)
{
    sfTime time1;
    time1 = sfClock_getElapsedTime(g->clock_bg_bg);
    float seconds = time1.microseconds / 1000000.0;
    if (seconds > 0.01) {
        sfClock_restart(g->clock_bg_bg);
        return 1;
    }
    return 0;
}

int game_clock_bg_tree(global_t *g)
{
    sfTime time1;
    time1 = sfClock_getElapsedTime(g->clock_tree);
    float seconds = time1.microseconds / 1000000.0;
    if (seconds > 0.05) {
        sfClock_restart(g->clock_tree);
        return 1;
    }
    return 0;
}

int game_clock_bg(global_t *g)
{
    sfTime time1;
    time1 = sfClock_getElapsedTime(g->clock_ground);
    float seconds = time1.microseconds / 1000000.0;
    if (seconds > 0.005) {
        sfClock_restart(g->clock_ground);
        return 1;
    }
    return 0;
}
