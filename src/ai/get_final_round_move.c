/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** get final round move
*/

#include "matchstick.h"

int get_final_round_move(game_t *game)
{
    int size_filled = get_size_filled(game);
    int is_odd = size_filled % 2;
    int max_line = get_max_line(game);

    if (is_odd == 0) {
        if (game->map[max_line] <= game->max_stick)
            do_ai_move(game, max_line + 1, game->map[max_line]);
        else
            do_ai_move(game, max_line + 1, 1);
    } else {
        if (game->map[max_line] - 1 <= game->max_stick &&
        game->map[max_line] - 1 > 0)
            do_ai_move(game, max_line + 1, game->map[max_line] - 1);
        else
            do_ai_move(game, max_line + 1, 1);
    }
    return (0);
}