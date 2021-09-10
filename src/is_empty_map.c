/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** checkt if the map is mepty
*/

#include "matchstick.h"

int is_empty_map(game_t *game)
{
    int i = 0;

    while (game->map[i] != -1) {
        if (game->map[i] != 0)
            return (0);
        i++;
    }
    return (1);
}