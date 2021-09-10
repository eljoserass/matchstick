/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** function that print the sticks
*/

#include "matchstick.h"

void print_sticks(game_t *game, int y)
{
    for (int i = 0; i != game->map[y]; i++)
        my_putchar ('|');
    game->x += game->map[y];
}