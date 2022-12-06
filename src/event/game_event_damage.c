/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** simple example file
*/

#include "../../include/game.h"

void game_event_damage_enemy(global_t *g)
{
    if ( g->spriteA->position.x >= g->ene->position.x &&
    g->ene->position.x <= g->spriteA->position.x + 200 &&
    g->spriteA->position.y - 240 <= g->ene->position.y + 130 &&
    g->spriteA->position.y - 240 >= g->ene->position.y - 150){
        g->ene->life = 0;
    }
}

void game_event_damage_character(global_t *g)
{
    if ( g->spriteA->position.x >= g->ene->position.x &&
    g->ene->position.x <= g->spriteA->position.x + 200 &&
    g->ene->position.y >= g->spriteA->position.y - 350 &&
    g->ene->position.y < g->spriteA->position.y - 40){
        g->spriteA->life = 0;
    }
}
