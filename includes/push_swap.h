/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaraujo <anaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 09:15:01 by marvin            #+#    #+#             */
/*   Updated: 2022/12/15 18:00:03 by anaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

# ifndef INT_MIN
#  define INT_MIN -2147483648
# endif

# ifndef INT_MAX
#  define INT_MAX 2147483647
# endif


typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

int		arg_is_number(char *argv);
int 	there_is_duplicates(char **argv);
int 	arg_is_zero(char *argv);
int 	argv_is_corrected(char **argv);

t_stack	*initialize(int argc, char **argv);
t_stack	*stack_new(int nb);
void	stack_add_bottom(t_stack **stack, t_stack *new);
t_stack	*get_stack_bottom(t_stack *stack);

void    rr(t_stack *a, t_stack *b);
void    rb(t_stack *b);
void    ra(t_stack *a);
void    rules_r_top_bottom(t_stack **x);

void    rrr(t_stack *a, t_stack *b);
void    rrb(t_stack *b);
void    rra(t_stack *a);
void    rules_rr_bottom_top(t_stack *x);

void	rules_pa_topb_to_topa(t_stack *a, t_stack *b);
void	rules_pb_topa_to_topb(t_stack *b, t_stack *a);

void    rules_s_swap_top(t_stack *x);
void    rules_sa_swap_top(t_stack *a);
void    rules_sb_swap_top(t_stack *b);
void    rules_ss_swap_top(t_stack *a, t_stack *b);

#endif
