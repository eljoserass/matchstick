##
## EPITECH PROJECT, 2020
## my_sokoban
## File description:
## THE MAKEFILE
##

NAME		=	matchstick

CLIB_NAME	=	myClib.a

SRCS_DIR	=	src/

SRCS_FILES	=	main.c							\
				get_winner.c 					\
				is_uint.c 						\
				get_map.c						\
				do_matchstick.c 				\
				do_game_loop.c 					\
				get_move.c 						\
				get_player_input.c 				\
				do_user_move.c 					\
				get_stick.c 					\
				check_stick.c 					\
				get_line.c 						\
				check_line.c 					\
				is_end.c 						\
				is_empty_map.c 					\
				remove_sticks.c 				\
				check_av.c 						\
				free_program_mem.c 				\
				init_struct.c 					\
				ai/do_ai_move.c					\
				ai/get_ai_move.c				\
				ai/get_final_round_move.c 		\
				ai/get_max_line.c 				\
				ai/get_size_filled.c 			\
				ai/is_final_round.c 			\
				ai/count_num.c					\
				ai/get_xor_sum.c 				\
				ai/calculate_move.c 			\
				print/print_winner.c 			\
				print/print_corner.c 			\
				print/print_sticks.c 			\
				print/print_remaining_spaces.c	\
				print/print_first_spaces.c 		\
				print/print_map.c 				\

SRCS		=	$(addprefix $(SRCS_DIR), $(SRCS_FILES))

OBJS		=	$(SRCS:.c=.o)

LIB_DIR		=	lib/

CLIB_DIR	=	myClibrary

CLIB_PATH	=	$(addprefix $(LIB_DIR), $(CLIB_NAME))

RM 			=	rm -f

CC			=	gcc

CFLAGS		+=	-I./myClibrary/include
CFLAGS		+=	-I./include
CFLAGS		+=	-W -Wall -Werror -g3

all:  $(CLIB_NAME) $(NAME)

$(NAME):	$(OBJS)
			$(CC) -o $(NAME) $(OBJS) $(CLIB_PATH)

$(CLIB_NAME):
		make -C $(CLIB_DIR)

clean:
	make clean -C $(CLIB_DIR)
	$(RM) $(OBJS)

fclean: clean
	make fclean -C $(CLIB_DIR)
	$(RM) $(NAME)

re: fclean all
	make re -C $(CLIB_DIR)
