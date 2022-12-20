# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anaraujo <anaraujo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 09:15:28 by marvin            #+#    #+#              #
#    Updated: 2022/12/20 21:11:03 by anaraujo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -I.

LIBFT = ./libft/libft.a

SRCS = ./srcs/rules_p.c	./srcs/rules_r.c ./srcs/rules_rr.c ./srcs/rules_s.c ./srcs/utils.c	./srcs/check_argv.c	./srcs/initialize.c ./srcs/main.c ./srcs/push_swap.c ./srcs/index.c	./srcs/cheapest_move.c	./srcs/position.c ./srcs/main.c	./srcs/sort.c

OBJS = $(SRCS:.c=.o) 

all: $(NAME)

$(LIBFT):
	$(MAKE) -C ./libft

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o push_swap

clean:
	$(MAKE) clean -C ./libft
	rm -rf $(OBJS)

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)

re: fclean all
