/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** simple example file
*/

#include <stdlib.h>

void my_putchar (char c);

int my_putstr (char const *str)
{
    for (int i = 0; str[i] != 0; i++){
        my_putchar( str[i] );
    }
    return 0;
    }

char *my_show_word_array (char * const * tab)
{
    int nb = 0;
    for (int i = 0; tab[i] != 0; my_putstr(tab[i]), my_putchar('\n'), i++);
}
