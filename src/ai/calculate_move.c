/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** do the calculation for the move
*/

#include "matchstick.h"

int calculate_move(game_t *game)
{
    int xor_result = get_xor_sum(game);
    int i = 0;

    if (xor_result == 0)
        return (-1);
    while (game->map[i] != -1) {
        game->ai_move[0] = xor_result ^ game->map[i];
        if (game->ai_move[0] < game->map[i]) {
            game->ai_move[1] = i;
            return (0);
        }
        i++;
    }
    return (0);
}