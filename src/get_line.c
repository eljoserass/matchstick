/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** get the line form the user
*/

#include "matchstick.h"

int get_line(game_t *game, size_t size)
{
    int correct = 0;
    
    while (correct == 0) {
        my_putstr("Line: ");
        if (getline(&game->input_line, &size, stdin) ==  -1)
            return (84);
        if (check_line(game) == -1)
            continue;
        correct = 1;
        game->line = my_getnbr(game->input_line, '\n');
    }
    return (0);
}