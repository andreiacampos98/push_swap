/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaraujo <anaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 09:15:01 by marvin            #+#    #+#             */
/*   Updated: 2022/12/20 23:17:21 by anaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <limits.h>

typedef struct s_stack
{
	int				value;
	int				index;
	int				position;
	int				target_position;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}	t_stack;

int		arg_is_number(char *argv);
int		there_is_duplicates(char **argv);
int		arg_is_zero(char *argv);
int		argv_is_correct(char **argv);

t_stack	*initialize(int argc, char **argv);
t_stack	*stack_new(int nb);
void	stack_add_bottom(t_stack **stack, t_stack *new);
t_stack	*get_stack_bottom(t_stack *stack);

t_stack	*fill_highest(t_stack *ptr, t_stack *a, t_stack *highest);
void	assign_index(t_stack *a, int stack_size);

void	push_swap(t_stack **a, t_stack **b, int stack_size);
int		is_sorted(t_stack *stack);
void	three_argc_sort(t_stack **a);
int		find_highest_index(t_stack *stack);
int		get_stack_size(t_stack *a);

void	push_to_b(t_stack **a, t_stack **b);
void	sort_stack_a(t_stack **a);
void	sort(t_stack **a, t_stack **b);

void	define_position(t_stack **x);
int		get_position_for_lowest_index(t_stack **x);

void	rr(t_stack **a, t_stack **b);
void	rb(t_stack **b);
void	ra(t_stack **a);
void	rules_r_top_bottom(t_stack **x);

void	rrr(t_stack **a, t_stack **b);
void	rrb(t_stack **b);
void	rra(t_stack **a);
t_stack	*get_stack_before_bottom(t_stack *x);
void	rules_rr_bottom_top(t_stack **x);

void	rules_pa_topb_to_topa(t_stack **a, t_stack **b);
void	rules_pb_topa_to_topb(t_stack **b, t_stack **a);

void	rules_s_swap_top(t_stack **x);
void	rules_sa_swap_top(t_stack **a);
void	rules_sb_swap_top(t_stack **b);
void	rules_ss_swap_top(t_stack **a, t_stack **b);

void	exit_error(t_stack **stack_a, t_stack **stack_b);
void	free_stack(t_stack **stack);

#endif
