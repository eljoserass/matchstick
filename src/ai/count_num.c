/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** funciton that count the num given as parameter
*/

#include "matchstick.h"

int count_num(game_t *game, int num)
{
    int i = 0;
    int nb = 0;

    while (game->map[i] != -1) {
        if (game->map[i] == num)
            nb++;
        i++;
    }
    return (nb);
}