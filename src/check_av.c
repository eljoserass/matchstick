/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** function that checks the arguments
*/

#include "matchstick.h"

int check_av(char **av)
{
    int nb = 0;

    if (is_uint(av[1], '\0') == 0 || is_uint(av[2], '\0') == 0) {
        my_putstr("expected an unsigned int\n");
        return (84);
    }
    nb = my_getnbr(av[1], '\0');
    if (nb <= 1 || nb >= 100) {
        my_putstr("size must be from 1 to 100\n");
        return (84);
    }
    nb = my_getnbr(av[2], '\0');
    if (nb <= 0) {
        my_putstr("max_matches must be > 0\n");
        return (84);
    }
    return (0);
}