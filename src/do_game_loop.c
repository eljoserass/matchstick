/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** game_loop
*/

#include "matchstick.h"

int do_game_loop(game_t *game)
{
    size_t size = 0;

    while (game->loser == 0) {
        print_map(game);
        if (get_move(game, size) == 84)
            return (0);
        is_end(game);
        get_winner(game);
    }
    return (game->winner);
}