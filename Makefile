# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anaraujo <anaraujo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 09:15:28 by marvin            #+#    #+#              #
#    Updated: 2022/12/15 17:37:47 by anaraujo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := push_swap

CC := cc
CFLAGS := -Wall -Wextra -Werror

LIBFT = ./libft/libft.a

SRCS := /srcs/rules_p.c /srcs/rules_r.c /srcs/rules_rr.c /srcs/rules_s.c /srcs/utils.c /srcs/check_argv.c /srcs/initialize.c /srcs/main.c /srcs/push_swap.c

OBJS := $(SRCS:.c=.o) 

all: $(NAME)

$(LIBFT):
	$(MAKE) -C ./libft

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
