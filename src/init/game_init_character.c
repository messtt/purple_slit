/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** simple example file
*/

#include "../../include/game.h"

void game_init_character(global_t *g)
{
    g->spriteA = malloc(sizeof (sprite_t));
    g->clock_walk = sfClock_create();
    g->clock_attack = sfClock_create();
    g->clock_died_char = sfClock_create();
    g->spriteA->sprite = sfSprite_create();
    g->positionSprite = 100;
    g->spriteA->life = 1;
    sfMouse_setPositionRenderWindow((sfVector2i){100, 600}, g->window);
    g->spriteA->position = (sfVector2f){100, 600};
    g->spriteA->tex = sfTexture_createFromFile("img/NightBorne.png", NULL);
    g->spriteA->rect = (sfIntRect) {
        .width = 80,
        .height = 80,
        .top = 80,
        .left = g->positionSprite
    };
    sfSprite_setTexture(g->spriteA->sprite, g->spriteA->tex, sfFalse);
    sfSprite_scale(g->spriteA->sprite, (sfVector2f){5, 5});
    sfSprite_setTextureRect(g->spriteA->sprite, g->spriteA->rect);
    sfSprite_setOrigin(g->spriteA->sprite, (sfVector2f){40,40});
}
