/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaraujo <anaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 09:15:01 by marvin            #+#    #+#             */
/*   Updated: 2022/12/15 17:34:19 by anaraujo         ###   ########.fr       */
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


typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

void    rr(t_stack *a, t_stack *b);
void    rb(t_stack *b);
void    ra(t_stack *a);
void    rules_r_top_bottom(t_stack **x);
void    rrr(t_stack *a, t_stack *b);
void    rrb(t_stack *b);
void    rra(t_stack *a);
void    rules_rr_bottom_top(t_stack *x);

#endif
