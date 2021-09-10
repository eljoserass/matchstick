/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** chech the line of the input
*/

#include "matchstick.h"

int check_line(game_t *game)
{
    if (is_uint(game->input_line, '\n') == 0) {
        my_putstr("Error: invalid input (positive number expected)\n");
        return (-1);
    }
    if (my_getnbr(game->input_line, '\n') > game->size ||
    my_getnbr(game->input_line, '\n') == 0) {
        my_putstr("Error: this line is out of range\n");
        return (-1);
    }
    if (game->map[my_getnbr(game->input_line, '\n') - 1] == 0) {
        my_putstr("Error: not enough matches on this line\n");
        return (-1);
    }
    return (0);
}