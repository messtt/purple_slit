/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** simple example file
*/

#include <SFML/Graphics.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include <sys/fcntl.h>
#include "my.h"
#ifndef game_h
    #define game_h
    typedef struct spriteBg{
        sfIntRect rect1;
        sfIntRect rect2;
        sfIntRect rect3;
        sfSprite *sprite1;
        sfSprite *sprite2;
        sfSprite *sprite3;
        sfSprite *sprite4;
        sfSprite *sprite5;
        sfSprite *sprite6;
        sfSprite *sprite7;
        sfTexture *tSprite1;
        sfTexture *tSprite2;
        sfTexture *tSprite3;
        sfTexture *tSprite4;
        sfTexture *tSprite5;
        sfTexture *tSprite6;
        sfTexture *tSprite7;
    }bg;

    typedef struct sprite_t{
        int life;
        int action;
        sfSprite *sprite;
        sfIntRect rect;
        sfTexture *tex;
        sfVector2f position;
        sfVector2f rotation;
        sfVector2f originPos;
    }sprite_t;

    typedef struct menu_t{
        sfSprite *bg;
        sfSprite *logo2;
        sfSprite *cursor;
        sfSprite *logo;
        sfSprite *name;
        sfSprite *info;
        sfTexture *sony_tex;
        sfTexture *name_tex;
        sfTexture *info_tex;
        sfTexture *tex_gb;
        sfTexture *tex_cursor;
        sfTexture *tex_logo;
        sfVector2f curPos;
        sfEvent event;
    }menu;

    typedef struct sprite_enemy{
        int life;
        int action;
        int position_rect;
        sfSprite *sprite;
        sfIntRect rect;
        sfTexture *tex;
        sfVector2f position;
        sfVector2f rotation;
        sfVector2f originPos;
    }spriteE;

typedef struct global_f{
    sfClock *clock_att_enemy;
    sfClock *clock_enemy;
    sfClock *clock_died_char;
    sfClock *clock_attack;
    sfClock *clock_bg_bg;
    sfClock *clock_tree;
    sfClock *clock_ground;
    sfClock *clock_walk;
    sfClock *clock_enemy_died;
    int count;
    menu *menu;
    sfEvent event;
    sfRenderWindow* window;
    spriteE *ene;
    bg *bg;
    sprite_t *spriteA;
    int positionSprite;
    int start_game;
}global_t;

void game_enemy_died(global_t *g);
void game_character_died(global_t *g);
void anim_bg(global_t *g);
void game_attack_monster(global_t *g);
void game_anim_character(global_t *g);
void game_enemy_walk(global_t *g);

void game_menu(global_t *g);

int game_clock_enemy_died(global_t *g);
int game_clock_died(global_t *g);
int game_clock_enemy_attack(global_t *g);
int game_clock_enemy_walk(global_t *g);
int game_clock_walk(global_t *g);
int game_clock_attack(global_t *g);
int game_clock_bg_tree(global_t *g);
int game_clock_bg_bg(global_t *g);
int game_clock_bg(global_t *g);
void init_texture(global_t *g);
void game_init(global_t *global);
void game_init_enemy(global_t *g);
void game_init_character(global_t *g);
void init_bg(global_t *g);
void game_change_env(global_t *g);
void game_destroy(global_t *g);
void game_event_damage_character(global_t *g);
void game_event_damage_enemy(global_t *g);
void game_event(global_t *global);
void game_draw(global_t *global);

sfVector2f manage_mouse_move(sfMouseMoveEvent event);
#endif
