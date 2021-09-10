/*
** EPITECH PROJECT, 2021
** matchtstick
** File description:
** main .h file
*/

#ifndef MATHCSTICK_H_
#define MATCHSTICK_H_

#include "lib.h"
#include "game.h"
#include "macros.h"
#include <stdio.h>

//// init struct ////
game_t *init_game(void);
/////////////////////

////     print    ////
void print_corner(int);
void print_sticks(game_t *game, int y);
void print_remaining_spaces(game_t *game);
void print_first_spaces(game_t *game, int y);
void print_map(game_t *game);
void print_winner(game_t *game);
/////////////////////

//// AI ////
int get_max_line(game_t *game);
int get_size_filled(game_t *game);
int count_num(game_t *game, int num);
int is_final_round(game_t *game);
int get_final_round_move(game_t *game);
int get_xor_sum(game_t *game);
int calculate_move(game_t *game);
int get_ai_move(game_t *game);
////////////

///// check input /////
int check_stick(game_t *game);
int check_line(game_t *game);
///////////////////////

///// get input /////
int get_line(game_t *game, size_t size);
int get_stick(game_t *game, size_t size);
int get_player_input(game_t *game, size_t size);
int get_move(game_t *game, size_t size);
int get_user_move(game_t *game, size_t size);
/////////////////////


//// end game ////
int is_empty_map(game_t *game);
void is_end(game_t *game);
void get_winner(game_t *game);
//////////////////

//// start game ////
int check_av(char **av);
int get_map(game_t *game);
////////////////////

///// move /////
void do_user_move(game_t *game);
void do_ai_move(game_t *game, int line, int stick);
////////////////

///// game /////
int do_game_loop(game_t *game);
int do_matchstick(char **av);
////////////////

///// utils /////
void remove_sticks(game_t *game, int line, int sticks);
unsigned int is_uint(char *str, char delim);
void free_program_mem(game_t *game);
/////////////////


#endif
