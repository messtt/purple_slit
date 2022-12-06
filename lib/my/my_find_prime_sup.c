/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** simple example file
*/

int my_find_prime_sup(int nb)
{
    if (nb <= 0 || nb == 1){
        return my_find_prime_sup(nb + 1);
    }
    if (nb == 2 || nb == 3 || nb == 5 || nb == 7){
        return nb;
    }
    if (nb % 2 == 0){
        return my_find_prime_sup(nb + 1);
    }
    if (nb % 3 == 0){
        return my_find_prime_sup(nb + 1);
    }
    if (nb % 5 == 0){
        return my_find_prime_sup(nb + 1);
    }
    if (nb % 7 == 0){
        return my_find_prime_sup(nb + 1);
    }
    return nb;
}
