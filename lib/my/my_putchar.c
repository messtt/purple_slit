/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** simple example file
*/
#include <unistd.h>
void my_putchar (char c)
{
    write(1, &c, 1);
}
