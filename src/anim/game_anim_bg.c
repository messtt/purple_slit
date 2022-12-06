/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** simple example file
*/

#include "../../include/game.h"

void anim_bg_tree(global_t *g)
{
    if (game_clock_bg_tree(g) == 1) {
        g->bg->rect3.left += 1;
        if (g->bg->rect3.left > 3840)
            g->bg->rect3.left = 0;
        sfSprite_setTextureRect(g->bg->sprite1, g->bg->rect3);
    }
}

void anim_bg_bg(global_t *g)
{
    if (game_clock_bg_bg(g) == 1) {
        g->bg->rect2.left += 1;
        if (g->bg->rect2.left > 3840)
            g->bg->rect2.left = 0;
        sfSprite_setTextureRect(g->bg->sprite3, g->bg->rect2);
    }
}

void anim_bg_ground(global_t *g)
{
    if (game_clock_bg(g) == 1) {
        g->ene->position.x -= 1;
        g->bg->rect1.left += 1;
        if (g->bg->rect1.left > 3840)
            g->bg->rect1.left = 0;
        sfSprite_setTextureRect(g->bg->sprite2, g->bg->rect1);
        sfSprite_setTextureRect(g->bg->sprite6, g->bg->rect1);
        sfSprite_setTextureRect(g->bg->sprite7, g->bg->rect1);
    }
}

void anim_bg(global_t *g)
{
    anim_bg_tree(g);
    anim_bg_bg(g);
    anim_bg_ground(g);
}
