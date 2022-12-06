/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** simple example file
*/

#include "../../include/game.h"

void game_destroy_clock(global_t *g)
{
    sfClock_destroy(g->clock_attack);
    sfClock_destroy(g->clock_walk);
    sfClock_destroy(g->clock_enemy_died);
    sfClock_destroy(g->clock_died_char);
    sfClock_destroy(g->clock_att_enemy);
    sfClock_destroy(g->clock_bg_bg);
    sfClock_destroy(g->clock_enemy);
    sfClock_destroy(g->clock_tree);
    sfClock_destroy(g->clock_ground);
}

void game_destroy_sprite(global_t *g)
{
    sfSprite_destroy(g->ene->sprite);
    sfSprite_destroy(g->spriteA->sprite);
    sfSprite_destroy(g->menu->bg);
    sfSprite_destroy(g->menu->info);
    sfSprite_destroy(g->menu->name);
    sfSprite_destroy(g->menu->logo2);
    sfSprite_destroy(g->menu->logo);
    sfSprite_destroy(g->menu->cursor);
    sfSprite_destroy(g->bg->sprite1);
    sfSprite_destroy(g->bg->sprite2);
    sfSprite_destroy(g->bg->sprite3);
    sfSprite_destroy(g->bg->sprite4);
    sfSprite_destroy(g->bg->sprite5);
    sfSprite_destroy(g->bg->sprite6);
    sfSprite_destroy(g->bg->sprite7);
}

void game_destroy(global_t *g)
{
    game_destroy_clock(g);
    game_destroy_sprite(g);
}
