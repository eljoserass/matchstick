/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** function that print the spaces in the right side
*/

#include "matchstick.h"

void print_remaining_spaces(game_t *game)
{
    while (game->x < game->size * 2 - 1) {
        my_putchar(' ');
        game->x++;
    }
    game->x = 0;
}