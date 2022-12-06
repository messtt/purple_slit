/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** simple example file
*/

void my_putchar(char c);

int my_putstr (char const *str)
{
    for (; *str != '\0'; my_putchar(*str++));
    return 0;
}
