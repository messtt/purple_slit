/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** simple example file
*/

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    while (src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    return dest;
}
