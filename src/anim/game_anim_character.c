/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** simple example file
*/

#include "../../include/game.h"

void game_character_died(global_t *g)
{
    if (game_clock_died(g) == 1) {
        g->spriteA->rect.top = 320;
        g->spriteA->rect.left += 80;
        if (g->spriteA->rect.left > 1760) {
            g->start_game = 0;
            g->ene->position.x = 1920;
            g->spriteA->position.x = 0;
            g->count = 0;
            g->spriteA->life = 1;
            game_change_env(g);
        }
        sfSprite_setTextureRect(g->spriteA->sprite, g->spriteA->rect);
    }
}

void game_attack(global_t *g)
{
    if (game_clock_attack(g) == 1) {
        g->spriteA->rect.top = 160;
        g->spriteA->rect.left += 80;
        if (g->spriteA->rect.left > 640)
            game_event_damage_enemy(g);
        if (g->spriteA->rect.left > 880) {
            g->spriteA->action = 0;
            g->spriteA->rect.left = 0;
            g->spriteA->rect.top = 80;
        }
        sfSprite_setTextureRect(g->spriteA->sprite, g->spriteA->rect);
    }
}

void game_walk(global_t *g)
{
    if (game_clock_walk(g) == 1) {
        g->spriteA->rect.left += 80;
        if (g->spriteA->rect.left > 400) {
            g->spriteA->rect.left = 0;
        }
        sfSprite_setTextureRect(g->spriteA->sprite, g->spriteA->rect);
    }
}

void game_anim_character(global_t *g)
{
    if (g->spriteA->action == 1) {
        game_attack(g);
    } else {
        game_walk(g);
    }
}
