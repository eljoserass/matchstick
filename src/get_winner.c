/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** get the winner
*/

#include "matchstick.h"

void get_winner(game_t *game)
{
    if (game->loser == 1)
        game->winner = 1;
    if (game->loser == 2)
        game->winner = 2;
}