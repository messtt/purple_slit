/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** simple example file
*/

#include "../../include/game.h"

void init_rect(global_t *g)
{
    g->bg->rect1 = (sfIntRect){
            .top = 0,
            .height = 1080,
            .left = 0,
            .width = 1920
    };
    g->bg->rect2 = (sfIntRect){
            .top = 0,
            .height = 1080,
            .left = 0,
            .width = 1920
    };
    g->bg->rect3 = (sfIntRect){
            .top = 0,
            .height = 1080,
            .left = 0,
            .width = 1920
    };
}

void init_texture(global_t *g)
{
    g->ene->tex = sfTexture_createFromFile("img/Goblin/gb.png", NULL);
    sfSprite_setTexture(g->ene->sprite, g->ene->tex, sfFalse);
    g->bg->tSprite1 = sfTexture_createFromFile("img/dup/1.png", NULL);
    g->bg->tSprite2 = sfTexture_createFromFile("img/dup/2.png", NULL);
    g->bg->tSprite3 = sfTexture_createFromFile("img/dup/3.png", NULL);
    g->bg->tSprite4 = sfTexture_createFromFile("img/dup/4.png", NULL);
    g->bg->tSprite5 = sfTexture_createFromFile("img/dup/5.png", NULL);
    g->bg->tSprite6 = sfTexture_createFromFile("img/dup/6.png", NULL);
    g->bg->tSprite7 = sfTexture_createFromFile("img/dup/7.png", NULL);
    sfSprite_setTexture(g->bg->sprite1, g->bg->tSprite1, sfFalse);
    sfSprite_setTexture(g->bg->sprite2, g->bg->tSprite2, sfFalse);
    sfSprite_setTexture(g->bg->sprite3, g->bg->tSprite3, sfFalse);
    sfSprite_setTexture(g->bg->sprite4, g->bg->tSprite4, sfFalse);
    sfSprite_setTexture(g->bg->sprite5, g->bg->tSprite5, sfFalse);
    sfSprite_setTexture(g->bg->sprite6, g->bg->tSprite6, sfFalse);
    sfSprite_setTexture(g->bg->sprite7, g->bg->tSprite7, sfFalse);
}

void init_clock(global_t *g)
{
    g->clock_ground = sfClock_create();
    g->clock_bg_bg = sfClock_create();
    g->clock_tree = sfClock_create();
}

void init_bg(global_t *g)
{
    g->bg = malloc(sizeof (bg));
    init_clock(g);
    init_rect(g);
    g->bg->sprite1 = sfSprite_create();
    g->bg->sprite2 = sfSprite_create();
    g->bg->sprite3 = sfSprite_create();
    g->bg->sprite4 = sfSprite_create();
    g->bg->sprite5 = sfSprite_create();
    g->bg->sprite6 = sfSprite_create();
    g->bg->sprite7 = sfSprite_create();
    init_texture(g);
}
