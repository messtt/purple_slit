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
