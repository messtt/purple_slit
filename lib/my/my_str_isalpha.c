/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** simple example file
*/

int my_str_isalpha (char const *str)
{
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] < 65)
            return 0;
        if (str[i] > 90 && str[i] < 97)
            return 0;
        if (str[i] > 122)
            return 0;
    }
    return 1;
}
