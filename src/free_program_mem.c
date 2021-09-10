/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** free the program memory
*/

#include "matchstick.h"

void free_program_mem(game_t *game)
{
    free(game->map);
    free(game->input_line);
    free(game->input_sticks);
    free(game->ai_move);
    free(game);
}