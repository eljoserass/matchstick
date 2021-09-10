/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** check if is the end of the game
*/

#include "matchstick.h"

void is_end(game_t *game)
{
    if (is_empty_map(game) == 1) {
        game->loser = game->player;
        print_map(game);
        print_winner(game);
    }
}