/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** function that remove the sticks
*/

#include "matchstick.h"

void remove_sticks(game_t *game, int line, int sticks)
{
    game->map[line - 1] -= sticks;
}