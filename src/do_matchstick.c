/*
** EPITECH PROJECT, 2021
** mathstick
** File description:
** principal function
*/

#include "matchstick.h"

int do_matchstick(char **av)
{
    game_t *game = init_game();
    int status = 0;

    if (!game)
        return (84);
    if (check_av(av) == 84)
        return (84);
    game->size = my_getnbr(av[1], '\0');
    game->max_stick = my_getnbr(av[2], '\0');
    if (get_map(game) == 84)
        return (84);
    status = do_game_loop(game);
    free_program_mem(game);
    return (status);
}