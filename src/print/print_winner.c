/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** unction that print the winner based on the loser
*/

#include "matchstick.h"

void print_winner(game_t *game)
{
    if (game->loser == 1)
        my_putstr("I lost... snif... but I'll get you next time!!\n");
    else
        my_putstr("You lost, too bad...\n");
}