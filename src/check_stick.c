/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** function that check the stick of the user input
*/

#include "matchstick.h"

int check_stick(game_t *game)
{
    if (is_uint(game->input_sticks, '\n') == 0) {
        my_putstr("Error: invalid input (positive number expected)\n");
        return (84);
    }
    if (my_getnbr(game->input_sticks, '\n') > game->max_stick) {
        my_putstr("Error: you cannot remove more than ");
        my_putnbr(game->max_stick);
        my_putstr(" matches per turn\n");
        return (84);
    }
    if (my_getnbr(game->input_sticks, '\n') == 0) {
        my_putstr("Error: you have to remove at least one match\n");
        return (84);
    }
    if (my_getnbr(game->input_sticks, '\n') > game->map[game->line - 1]) {
        my_putstr("Error: not enough matches on this line\n");
        return (84);
    }
    return (0);
}