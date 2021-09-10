/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** get binary map in array of string
*/

#include "matchstick.h"

int get_ai_move(game_t *game)
{
    int result = calculate_move(game);
    int to_take = 0;
    int line = game->ai_move[1];
    int is_final = is_final_round(game);

    if (is_final == 1)
        return (get_final_round_move(game));
    if (result != -1)
        to_take = game->map[game->ai_move[1]] - game->ai_move[0];
    if (to_take > game->max_stick || to_take == 0)
        to_take = 1;
    do_ai_move(game, line + 1, to_take);
    return (0);
}