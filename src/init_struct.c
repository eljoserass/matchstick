/*
** EPITECH PROJECT, 2021
** matchsitck
** File description:
** file that initialize structures
*/

#include "matchstick.h"

game_t *init_game(void)
{
    game_t *game = malloc(sizeof(game_t));

    game->map = NULL;
    game->size = 0;
    game->max_stick = 0;
    game->x = 0;
    game->loser = 0;
    game->input_line = NULL;
    game->input_sticks = NULL;
    game->player = 1;
    game->line = 0;
    game->stick = 0;
    game->winner = 0;
    game->ai_move = malloc(sizeof(int) * 2);
    if (!game->ai_move)
        return (NULL);
    return (game);
}
