/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** simple example file
*/
#include <unistd.h>

void my_swap(int *a, int *b)
{
    int c = 0;
    c = *a;
    *a = *b;
    *b = c;
}
