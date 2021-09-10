/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** get the line with the more stikcs
*/

#include "matchstick.h"

int get_max_line(game_t *game)
{
    int max = 0;
    int i = 1;

    while (game->map[i] != -1) {
        if (game->map[i] > game->map[i - 1])
            max = i;
        i++;
    }
    return (max);
}