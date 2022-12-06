/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** simple example file
*/

int my_strlen (char const *str)
{
    int i = 0;
    while (str[i] != 0){
        i++;
    }
    return (i);
}

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = my_strlen(dest);
    for (int j = 0; j != nb; dest[i] = src[j], i++, j++);
    return dest;
}
