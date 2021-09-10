/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** function that get the map of the sticks
*/

#include "matchstick.h"

int get_map(game_t *game)
{
    int sticks = 1;
    game->map = malloc(sizeof(int) * (game->size + 1));

    if (!game->map)
        return (84);
    for (int i = 0; i < game->size; i++) {
        game->map[i] = sticks;
        sticks += 2;
    }
    game->map[game->size] = -1;
    return (0);
}
