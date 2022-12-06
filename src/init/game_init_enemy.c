/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** simple example file
*/

#include "../../include/game.h"

void game_init_enemy(global_t *g)
{
    g->ene = malloc(sizeof (spriteE));
    g->clock_enemy = sfClock_create();
    g->clock_att_enemy = sfClock_create();
    g->clock_enemy_died = sfClock_create();
    g->ene->sprite = sfSprite_create();
    g->ene->position = (sfVector2f){1920,400};
    g->ene->position_rect = 1200;
    g->ene->life = 1;
    g->ene->rect = (sfIntRect) {
        .width = 150,
        .height = 150,
        .top = 150,
        .left = g->ene->position_rect
    };
    sfSprite_scale(g->ene->sprite, (sfVector2f){3.5, 3.5});
    sfSprite_setTextureRect(g->ene->sprite, g->ene->rect);
}
