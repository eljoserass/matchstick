/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** code that get the sticks form the user
*/

#include "matchstick.h"

int get_stick(game_t *game, size_t size)
{
    my_putstr("Matches: ");
    if (getline(&game->input_sticks, &size, stdin) ==  -1)
        return (84);
    if (check_stick(game) == 84)
        return (get_user_move(game, size));
    game->stick = my_getnbr(game->input_sticks, '\n');
    return (0);
}