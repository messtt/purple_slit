/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** simple example file
*/

#include "../../include/game.h"

void game_change_env_1(global_t *g)
{
    g->ene->tex = sfTexture_createFromFile("img/Mushroom/ms.png", NULL);
    sfSprite_setTexture(g->ene->sprite, g->ene->tex, sfFalse);
    g->bg->tSprite1 = sfTexture_createFromFile("img/bg3/8.png", NULL);
    sfSprite_setTexture(g->bg->sprite1, g->bg->tSprite1, sfFalse);
    g->bg->tSprite2 = sfTexture_createFromFile("img/bg3/2.png", NULL);
    sfSprite_setTexture(g->bg->sprite2, g->bg->tSprite2, sfFalse);
    g->bg->tSprite3 = sfTexture_createFromFile("img/bg3/5.png", NULL);
    sfSprite_setTexture(g->bg->sprite3, g->bg->tSprite3, sfFalse);
    g->bg->tSprite4 = sfTexture_createFromFile("img/bg3/4.png", NULL);
    sfSprite_setTexture(g->bg->sprite4, g->bg->tSprite4, sfFalse);
    g->bg->tSprite5 = sfTexture_createFromFile("img/bg3/6.png", NULL);
    sfSprite_setTexture(g->bg->sprite5, g->bg->tSprite5, sfFalse);
    g->bg->tSprite6 = sfTexture_createFromFile("img/bg3/7.png", NULL);
    sfSprite_setTexture(g->bg->sprite6, g->bg->tSprite6, sfFalse);
    g->bg->tSprite7 = sfTexture_createFromFile("img/bg3/3.png", NULL);
    sfSprite_setTexture(g->bg->sprite7, g->bg->tSprite7, sfFalse);
}

void game_change_env_2(global_t *g)
{
    g->ene->tex = sfTexture_createFromFile("img/Skeleton/Wk.png", NULL);
    sfSprite_setTexture(g->ene->sprite, g->ene->tex, sfFalse);
    g->bg->tSprite1 = sfTexture_createFromFile("img/bg4/1.png", NULL);
    sfSprite_setTexture(g->bg->sprite1, g->bg->tSprite1, sfFalse);
    g->bg->tSprite2 = sfTexture_createFromFile("img/bg4/8.png", NULL);
    sfSprite_setTexture(g->bg->sprite2, g->bg->tSprite2, sfFalse);
    g->bg->tSprite3 = sfTexture_createFromFile("img/bg4/3.png", NULL);
    sfSprite_setTexture(g->bg->sprite3, g->bg->tSprite3, sfFalse);
    g->bg->tSprite4 = sfTexture_createFromFile("img/bg4/4.png", NULL);
    sfSprite_setTexture(g->bg->sprite4, g->bg->tSprite4, sfFalse);
    g->bg->tSprite5 = sfTexture_createFromFile("img/bg4/6.png", NULL);
    sfSprite_setTexture(g->bg->sprite5, g->bg->tSprite5, sfFalse);
    g->bg->tSprite6 = sfTexture_createFromFile("img/bg4/5.png", NULL);
    sfSprite_setTexture(g->bg->sprite6, g->bg->tSprite6, sfFalse);
    g->bg->tSprite7 = sfTexture_createFromFile("img/bg4/7.png", NULL);
    sfSprite_setTexture(g->bg->sprite7, g->bg->tSprite7, sfFalse);
}

void game_change_env_3(global_t *g)
{
    g->ene->tex = sfTexture_createFromFile("img/FlyingEye/fe.png", NULL);
    sfSprite_setTexture(g->ene->sprite, g->ene->tex, sfFalse);
    g->bg->tSprite1 = sfTexture_createFromFile("img/bg2/7.png", NULL);
    sfSprite_setTexture(g->bg->sprite1, g->bg->tSprite1, sfFalse);
    g->bg->tSprite2 = sfTexture_createFromFile("img/bg2/2.png", NULL);
    sfSprite_setTexture(g->bg->sprite2, g->bg->tSprite2, sfFalse);
    g->bg->tSprite3 = sfTexture_createFromFile("img/bg2/3.png", NULL);
    sfSprite_setTexture(g->bg->sprite3, g->bg->tSprite3, sfFalse);
    g->bg->tSprite4 = sfTexture_createFromFile("img/bg2/6.png", NULL);
    sfSprite_setTexture(g->bg->sprite4, g->bg->tSprite4, sfFalse);
    g->bg->tSprite5 = sfTexture_createFromFile("img/bg2/1.png", NULL);
    sfSprite_setTexture(g->bg->sprite5, g->bg->tSprite5, sfFalse);
    g->bg->tSprite6 = sfTexture_createFromFile("img/bg2/5.png", NULL);
    sfSprite_setTexture(g->bg->sprite6, g->bg->tSprite6, sfFalse);
    g->bg->tSprite7 = sfTexture_createFromFile("img/bg2/4.png", NULL);
    sfSprite_setTexture(g->bg->sprite7, g->bg->tSprite7, sfFalse);
}

void game_change_env_4(global_t *g)
{
    g->ene->tex = sfTexture_createFromFile("img/per/png/attacking.png", NULL);
    sfSprite_setTexture(g->ene->sprite, g->ene->tex, sfFalse);
    g->bg->tSprite1 = sfTexture_createFromFile("img/bg5/1.png", NULL);
    sfSprite_setTexture(g->bg->sprite1, g->bg->tSprite1, sfFalse);
    g->bg->tSprite2 = sfTexture_createFromFile("img/bg5/3.png", NULL);
    sfSprite_setTexture(g->bg->sprite2, g->bg->tSprite2, sfFalse);
    g->bg->tSprite3 = sfTexture_createFromFile("img/bg5/3.png", NULL);
    sfSprite_setTexture(g->bg->sprite3, g->bg->tSprite3, sfFalse);
    g->bg->tSprite4 = sfTexture_createFromFile("img/bg5/1.png", NULL);
    sfSprite_setTexture(g->bg->sprite4, g->bg->tSprite4, sfFalse);
    g->bg->tSprite5 = sfTexture_createFromFile("img/bg5/1.png", NULL);
    sfSprite_setTexture(g->bg->sprite5, g->bg->tSprite5, sfFalse);
    g->bg->tSprite6 = sfTexture_createFromFile("img/bg5/3.png", NULL);
    sfSprite_setTexture(g->bg->sprite6, g->bg->tSprite6, sfFalse);
    g->bg->tSprite7 = sfTexture_createFromFile("img/bg5/2.png", NULL);
    sfSprite_setTexture(g->bg->sprite7, g->bg->tSprite7, sfFalse);
}

void game_change_env(global_t *g)
{
    if (g->count == 0)
        init_texture(g);
    if (g->count == 3)
        game_change_env_1(g);
    if (g->count == 7)
        game_change_env_2(g);
    if (g->count == 12)
        game_change_env_3(g);
    if (g->count == 20)
        game_change_env_4(g);
    if (g->count == 21)
        g->start_game = 0;
}
