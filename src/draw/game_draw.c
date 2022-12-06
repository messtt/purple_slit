/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** simple example file
*/

#include "../../include/game.h"

void game_draw_menu(global_t *g)
{
    sfSprite_setPosition(g->menu->cursor, g->menu->curPos);
    sfRenderWindow_setMouseCursorVisible(g->window, sfFalse);
    sfSprite_setPosition(g->menu->logo, (sfVector2f){1300, 150});
    sfSprite_setPosition(g->menu->info, (sfVector2f){600, 800});
    sfSprite_setPosition(g->menu->name, (sfVector2f){700, 100});
    sfSprite_setPosition(g->menu->logo2, (sfVector2f){200, 100});
    sfRenderWindow_clear(g->window, sfBlack);
    sfRenderWindow_drawSprite(g->window, g->menu->bg, NULL);
    sfRenderWindow_drawSprite(g->window, g->menu->info, NULL);
    sfRenderWindow_drawSprite(g->window, g->menu->name, NULL);
    sfRenderWindow_drawSprite(g->window, g->menu->logo2, NULL);
    sfRenderWindow_drawSprite(g->window, g->menu->logo, NULL);
    sfRenderWindow_drawSprite(g->window, g->menu->cursor, NULL);
    sfRenderWindow_display(g->window);
}

void game_start_anim_character(global_t *g)
{
    if (g->ene->life == 0) {
        if (g->ene->rect.top != 150)
            g->ene->rect.left = 1050;
        game_enemy_died(g);
    }else {
        game_enemy_walk(g);
        srand( time( NULL ) );
        int rands = rand() % 3;
        if (rands == 1)
            game_attack_monster(g);
    }
    if (g->spriteA->life == 0) {
        if (g->spriteA->rect.top != 320)
            g->spriteA->rect.left = 0;
        game_character_died(g);
    } else
        game_anim_character(g);
}

void game_draw (global_t *g)
{
    if (g->start_game == 1) {
        anim_bg(g);
        game_start_anim_character(g);
        sfRenderWindow_setMouseCursorVisible(g->window, sfFalse);
        sfSprite_setPosition(g->ene->sprite, g->ene->position);
        sfSprite_setPosition(g->spriteA->sprite, g->spriteA->position);
        sfRenderWindow_clear(g->window, sfBlack);
        sfRenderWindow_drawSprite(g->window, g->bg->sprite5, NULL);
        sfRenderWindow_drawSprite(g->window, g->bg->sprite4, NULL);
        sfRenderWindow_drawSprite(g->window, g->bg->sprite1, NULL);
        sfRenderWindow_drawSprite(g->window, g->bg->sprite3, NULL);
        sfRenderWindow_drawSprite(g->window, g->bg->sprite2, NULL);
        sfRenderWindow_drawSprite(g->window, g->bg->sprite6, NULL);
        sfRenderWindow_drawSprite(g->window, g->bg->sprite7, NULL);
        sfRenderWindow_drawSprite(g->window, g->ene->sprite, NULL);
        sfRenderWindow_drawSprite(g->window, g->spriteA->sprite, NULL);
        sfRenderWindow_display(g->window);
    } else
        game_draw_menu(g);
}
