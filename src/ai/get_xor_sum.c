/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** function that sum number in xor
*/

#include "matchstick.h"

int get_xor_sum(game_t *game)
{
    int i = 0;
    int result = 0;

    while (game->map[i] != -1) {
        result = result ^ game->map[i];
        i++;
    }
    return (result);
}
