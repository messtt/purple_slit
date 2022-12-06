/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** simple example file
*/

#include "../../include/game.h"

sfVector2f manage_mouse_move(sfMouseMoveEvent event)
{
    if (event.y > 440) {
        sfVector2f logoPosition = (sfVector2f){event.x, event.y};
        return logoPosition;
    } else {
        sfVector2f logoPosition = (sfVector2f){event.x, 440};
        return logoPosition;
    }
}

void close_window(global_t *g)
{
    sfRenderWindow_close(g->window);
}

void game_event(global_t *g)
{
    if (g->event.type == sfEvtMouseButtonPressed) {
        g->spriteA->action = 1;
        g->start_game = 1;
    }
    if (g->event.type == sfEvtMouseMoved) {
        g->menu->curPos = manage_mouse_move(g->event.mouseMove);
        g->spriteA->position = manage_mouse_move(g->event.mouseMove);
    }
    if (g->event.type == sfEvtClosed || g->event.type == sfKeyEscape) {
        close_window(g);
        return;
    }
}
