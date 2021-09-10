/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** .h with the game struct
*/

#ifndef GAME_H_
#define GAME_H_

typedef struct game_s {
    int *map;
    int size;
    int max_stick;
    int x;
    int loser;
    char *input_line;
    char *input_sticks;
    int line;
    int stick;
    int player;
    int winner;
    int *ai_move;
} game_t;

#endif
