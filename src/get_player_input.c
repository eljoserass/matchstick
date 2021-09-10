/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** function that gets the input of the player
*/

#include "matchstick.h"

int get_user_move(game_t *game, size_t size)
{
    if (get_line(game, size) == 84)
        return (84);
    if (get_stick(game, size) == 84)
        return (84);
    return (0);
}

int get_player_input(game_t *game, size_t size)
{
    my_putstr("\nYour turn:\n");
    if (get_user_move(game, size) == 84)
        return (84);
    do_user_move(game);
    return (0);
}