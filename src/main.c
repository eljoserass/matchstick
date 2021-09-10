/*
** EPITECH PROJECT, 2021
** matchsitck
** File description:
** main
*/

#include "matchstick.h"

int main(int ac, char **av)
{
    if (ac != 3)
        return (84);
    return (do_matchstick(av));
}
