# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anaraujo <anaraujo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 09:15:28 by marvin            #+#    #+#              #
#    Updated: 2023/01/02 19:55:18 by anaraujo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := push_swap
BONUS := checker

CC := cc
CFLAGS := -Wall -Wextra -Werror -I.

LIBFT := ./libft/libft.a

SRCS := ./srcs/rules_p.c 	./srcs/rules_r.c 	./srcs/rules_rr.c 		./srcs/rules_s.c 	\
		./srcs/utils.c		./srcs/check_argv.c	./srcs/main.c 			./srcs/stack.c		\
		./srcs/do_move.c 	./srcs/index.c		./srcs/cheapest_move.c	./srcs/position.c 	\
		./srcs/sort.c 	

OBJS := $(SRCS:.c=.o) 

SRCS_BONUS := ./bonus/srcs/checker.c	./bonus/srcs/rules_p.c		./bonus/srcs/rules_r.c	\
				./bonus/srcs/rules_rr.c	./bonus/srcs/rules_s.c		./bonus/srcs/stack.c	\
				./bonus/srcs/utils.c	./bonus/srcs/read_push_swap.c

OBJS_BONUS := $(SRCS_BONUS:.c=.o) 

all: $(NAME)

$(LIBFT):
	$(MAKE) -C ./libft

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

bonus: $(BONUS)

$(BONUS): $(OBJS_BONUS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS_BONUS) $(LIBFT) -o $(BONUS)

clean:
	$(MAKE) clean -C ./libft
	rm -rf $(OBJS)
	rm -rf $(OBJS_BONUS)

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)
	rm -rf $(BONUS)

re: fclean all bonus
