/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** simple example file
*/

int my_is_prime(int nb)
{
    if (nb <= 0 || nb == 1){
        return 0;
    }
    if (nb == 2 || nb == 3 || nb == 5 || nb == 7){
        return 1;
    }
    if (nb % 2 == 0){
        return 0;
    }
    if (nb % 3 == 0){
        return 0;
    }
    if (nb % 5 == 0){
        return 0;
    }
    if (nb % 7 == 0){
        return 0;
    }
    return 0;
}
