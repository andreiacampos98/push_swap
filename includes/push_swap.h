/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 09:15:01 by marvin            #+#    #+#             */
/*   Updated: 2022/12/12 09:15:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

# ifndef MIN_INT
#  define MIN_INT -2147483648
# endif

# ifndef MAX_INT
#  define MAX_INT 2147483647
# endif

typedef struct s_stack {
	int	stack_size;
	int	*int_list;
	int	top;
}				t_stack;

typedef struct s_game {
	t_metadata	info;
	t_val		**set;
	t_stk		a;
	t_stk		b;
	t_vctr		*buf;
	t_vctr		*log;
}	t_game;

typedef enum e_rule_id {
	SA,
	SB,
	SS,
	PA,
	PB,
	RA,
	RB,
	RR,
	RRA,
	RRB,
	RRR,
	END
}	t_rule_id;

#endif