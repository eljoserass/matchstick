/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** pritn the spaces on the left side of the sticks
*/

#include "matchstick.h"

void print_first_spaces(game_t *game, int y)
{
    for (int i = 0; i != (game->size - y - 1); i++) {
        my_putchar(' ');
        game->x++;
    }
}
