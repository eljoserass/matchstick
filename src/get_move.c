/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** function to do the players movements (including AI)
*/

#include "matchstick.h"

int get_move(game_t *game, size_t size)
{
    if (game->player == USER) {
        if (get_player_input(game, size) == 84)
            return (84);
        return (0);
    }
    get_ai_move(game);
    return (0);
}