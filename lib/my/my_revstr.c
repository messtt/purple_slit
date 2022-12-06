/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** simple example file
*/
char *my_revstr(char *str)
{
    int c = 0;
    int len = 0;
    while (str[len] != '\0'){
        len++;
    }
    len--;
    for (int left = 0; left < len; left++, len--){
        c = str[left];
        str[left] = str[len];
        str[len] = c;
    }
    return str;
}
