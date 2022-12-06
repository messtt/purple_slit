/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** simple example file
*/

#include "../../include/game.h"

void game_enemy_walk(global_t *g)
{
    if (game_clock_enemy_walk(g) == 1) {
        if (g->ene->position.x <= -300)
            sfRenderWindow_close(g->window);
        g->ene->rect.top = 450;
        g->ene->rect.left -= 150;
        if (g->ene->rect.left <= 600) {
            g->ene->rect.left = 1050;
        }
        sfSprite_setTextureRect(g->ene->sprite, g->ene->rect);
    }
}

void game_attack_monster(global_t *g)
{
    g->ene->action = 1;
    if (game_clock_enemy_attack(g) == 1) {
        g->ene->rect.top = 300;
        g->ene->rect.left -= 150;
        if (g->ene->rect.left <= 300)
            game_event_damage_character(g);
        if (g->ene->rect.left <= 0) {
            g->ene->rect.left = 1050;
            g->ene->action = 0;
        }
        sfSprite_setTextureRect(g->ene->sprite, g->ene->rect);
    }
}

void game_enemy_died(global_t *g)
{
    if (game_clock_enemy_died(g) == 1) {
        g->ene->rect.top = 150;
        g->ene->rect.left -= 150;
        if (g->ene->rect.left <= 600) {
            g->ene->rect.left = 1050;
            g->ene->life = 1;
            g->ene->position.x = 1920;
            int pos = rand() % 440 + 250;
            g->count++;
            g->ene->position.y = pos;
            game_change_env(g);
        }
        sfSprite_setTextureRect(g->ene->sprite, g->ene->rect);
    }
}
