# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/28 20:15:00 by apires-d          #+#    #+#              #
#    Updated: 2022/02/26 15:15:05 by apires-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
FLAGS = -g -Wall -Wextra -Werror
SANITIZE = -fsanitize=address
CC = clang

LIBFT_DIR = ./libft
LIBFT = libft/libft.a

INCLUDE_DIR = include
INCLUDE = $(INCLUDE_DIR)/push_swap.h

SRC_DIR = src
SRC = $(SRC_DIR)/do_swap_actions.c \
		$(SRC_DIR)/do_rotate_actions.c \
		$(SRC_DIR)/do_reverse_rotate_actions.c \
		$(SRC_DIR)/do_push_actions.c \
		$(SRC_DIR)/create_stacks.c \
		$(SRC_DIR)/print_action.c \
		$(SRC_DIR)/parse_data.c \
		$(SRC_DIR)/count_args.c

OBJ_DIR = obj
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	@$(CC) src/push_swap.c -lm $(OBJ) $(LIBFT) -o $(NAME)
	@echo "\033[32m OK!!"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INCLUDE)
	@mkdir -p $(OBJ_DIR)
	@$(CC) -c $(FLAGS) -I$(INCLUDE_DIR) -o $@ $<

$(LIBFT):
	@echo "\033[33mCompiling project...\n"
	@make -C $(LIBFT_DIR)

clean:
	@make clean -C $(LIBFT_DIR)
	@rm -rf $(OBJ_DIR)

fclean: clean
	@echo "\033[31mCleaning...\n"
	@make fclean -C $(LIBFT_DIR)
	@rm -rf $(NAME)

re: fclean all
