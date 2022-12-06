/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** simple example file
*/

#include <stdlib.h>

char* my_strdup (char const *src)
{
    char *dest = malloc(*src);
    for (int i = 0; src[i] != '\0'; i++){
        dest[i] = src[i];
    }
    return dest;
}
