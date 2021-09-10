/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** print the entire map
*/

#include "matchstick.h"

void print_map(game_t *game)
{
    print_corner(game->size);
    for (int y = 0; y != game->size; y++) {
        my_putchar('*');
        print_first_spaces(game, y);
        print_sticks(game, y);
        print_remaining_spaces(game);
        my_putstr("*\n");
    }
    print_corner(game->size);
}