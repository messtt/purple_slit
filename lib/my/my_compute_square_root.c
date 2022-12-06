/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** simple example file
*/

int my_compute_square_root (int nb)
{
    int rac = 0;
    for (int mult = 0; mult >= 0; mult++){
        if (nb <= 0 || rac > nb){
            return 0;
        }
        if (rac == nb){
            return mult - 1;
        }
        rac = mult * mult;
    }
    return 0;
}
