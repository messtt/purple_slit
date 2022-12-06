/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** simple example file
*/

#include "../../include/game.h"

void game_menu_init(global_t *g)
{
    g->menu->tex_gb = sfTexture_createFromFile("img/bg.png", NULL);
    g->menu->info_tex = sfTexture_createFromFile("img/info.png", NULL);
    g->menu->name_tex = sfTexture_createFromFile("img/name.png", NULL);
    g->menu->tex_cursor = sfTexture_createFromFile("img/cursor.png", NULL);
    g->menu->tex_logo = sfTexture_createFromFile("img/atari.png", NULL);
    g->menu->sony_tex = sfTexture_createFromFile("img/logo_sony.png", NULL);
}

void game_menu(global_t *g)
{
    g->menu = malloc(sizeof (menu));
    g->menu->curPos = (sfVector2f){0,0};
    g->start_game = 0;
    game_menu_init(g);
    g->menu->bg = sfSprite_create();
    g->menu->info = sfSprite_create();
    g->menu->name = sfSprite_create();
    g->menu->logo2 = sfSprite_create();
    g->menu->cursor = sfSprite_create();
    g->menu->logo = sfSprite_create();
    sfSprite_setTexture(g->menu->logo, g->menu->tex_logo, sfFalse);
    sfSprite_setTexture(g->menu->info, g->menu->info_tex, sfFalse);
    sfSprite_setTexture(g->menu->name, g->menu->name_tex, sfFalse);
    sfSprite_setTexture(g->menu->logo2, g->menu->sony_tex, sfFalse);
    sfSprite_setTexture(g->menu->cursor, g->menu->tex_cursor, sfFalse);
    sfSprite_setTexture(g->menu->bg, g->menu->tex_gb, sfFalse);
}
