/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** simple example file
*/

#include "../../include/game.h"

int game_clock_attack(global_t *g)
{
    sfTime time;
    time = sfClock_getElapsedTime(g->clock_attack);
    float seconds = time.microseconds / 1000000.0;
    if (seconds > 0.05) {
        sfClock_restart(g->clock_attack);
        return 1;
    }
    return 0;
}

int game_clock_walk(global_t *g)
{
    sfTime time;
    time = sfClock_getElapsedTime(g->clock_walk);
    float seconds = time.microseconds / 1000000.0;
    if (seconds > 0.1) {
        sfClock_restart(g->clock_walk);
        return 1;
    }
    return 0;
}

int game_clock_died(global_t *g)
{
    sfTime time;
    time = sfClock_getElapsedTime(g->clock_died_char);
    float seconds = time.microseconds / 1000000.0;
    if (seconds > 0.1) {
        sfClock_restart(g->clock_died_char);
        return 1;
    }
    return 0;
}
