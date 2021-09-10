/*
** EPITECH PROJECT, 2021
** mathcstick
** File description:
** do the move that the user wanted
*/

#include "matchstick.h"

void do_user_move(game_t *game)
{
    my_putstr("Player removed ");
    my_putnbr(game->stick);
    my_putstr(" match(es) from line ");
    my_putnbr(game->line);
    my_putchar('\n');
    remove_sticks(game, game->line, game->stick);
    game->player = 2;
}