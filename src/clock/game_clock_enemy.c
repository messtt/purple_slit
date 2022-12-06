/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** simple example file
*/

#include "../../include/game.h"

int game_clock_enemy_walk(global_t *g)
{
    sfTime time;
    time = sfClock_getElapsedTime(g->clock_enemy);
    float seconds = time.microseconds / 1000000.0;
    if (seconds > 0.2) {
        sfClock_restart(g->clock_enemy);
        return 1;
    }
    return 0;
}

int game_clock_enemy_attack(global_t *g)
{
    sfTime time;
    time = sfClock_getElapsedTime(g->clock_enemy);
    float seconds = time.microseconds / 1000000.0;
    if (seconds > 0.1) {
        sfClock_restart(g->clock_enemy);
        return 1;
    }
    return 0;
}

int game_clock_enemy_died(global_t *g)
{
    sfTime time;
    time = sfClock_getElapsedTime(g->clock_enemy_died);
    float seconds = time.microseconds / 1000000.0;
    if (seconds > 0.3) {
        sfClock_restart(g->clock_enemy_died);
        return 1;
    }
    return 0;
}
