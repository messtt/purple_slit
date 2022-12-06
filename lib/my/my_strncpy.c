/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** simple example file
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    while (i != n){
        dest[i] = src[i];
        i++;
    }
    if (n > i){
        for (int e = i; e == n; e++){
            dest[i] = 0;
        }
    }
    return dest;
}
