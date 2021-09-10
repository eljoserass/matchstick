/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** check if the game is in it's finals round
*/

#include "matchstick.h"

int is_final_round(game_t *game)
{
    int ones = count_num(game, 1);
    int zeros = count_num(game, 0);

    if ((ones + zeros) == game->size - 1 || (ones + zeros) == game->size)
        return (1);
    return (0);
}