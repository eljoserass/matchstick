/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** get the size of the array that's filled
*/

#include "matchstick.h"

int get_size_filled(game_t *game)
{
    int i = 0;
    int size = 0;

    while (game->map[i] != -1) {
        if (game->map[i] != 0)
            size++;
        i++;
    }
    return (size);
}