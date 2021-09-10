/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** do the ai move
*/

#include "matchstick.h"

int get_line_to_move(game_t *game)
{
    int i = 0;

    while (game->map[i] < game->size) {
        if (game->map[i] > 0)
            return (i);
        i++;
    }
    return (game->size - 1);
}

void do_ai_move(game_t *game, int line, int sticks)
{
    my_putstr("\nAI's turn...\n");
    my_putstr("AI removed ");
    my_putnbr(sticks);
    my_putstr(" match(es) from line ");
    my_putnbr(line);
    my_putchar('\n');
    remove_sticks(game, line, sticks);
    game->player = 1;
}