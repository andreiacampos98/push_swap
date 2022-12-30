/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaraujo <anaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 09:15:01 by marvin            #+#    #+#             */
/*   Updated: 2022/12/30 09:06:37 by anaraujo         ###   ########.fr       */
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
int		nb_cmp(const char *s1, const char *s2);
int		there_is_duplicates(char **argv);
int		arg_is_zero(char *argv);
int		argv_is_correct(char **argv);

t_stack	*initialize(int argc, char **argv);
t_stack	*stack_new(int nb);
void	stack_add_bottom(t_stack **stack, t_stack *new);
t_stack	*get_stack_bottom(t_stack *stack);

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
int		get_target(t_stack **a, int b_idx,int target_idx, int target_pos);
void	get_target_position(t_stack **a, t_stack **b);
void	get_cost(t_stack **a, t_stack **b);

int		nb_abs(int cost_x);
void     do_move(t_stack **a, t_stack **b, int cost_a, int cost_b);
void	do_cheapest_move(t_stack **a, t_stack **b);

void	do_rr_both(t_stack **a, t_stack **b, int *cost_a, int *cost_b);
void	do_r_both(t_stack **a, t_stack **b, int *cost_a, int *cost_b);
void	do_r_a(t_stack **a, int *cost);
void	do_r_b(t_stack **b, int *cost);

void	rr(t_stack **a, t_stack **b);
void	rb(t_stack **b);
void	ra(t_stack **a);
void	rotate(t_stack **x);

void	rrr(t_stack **a, t_stack **b);
void	rrb(t_stack **b);
void	rra(t_stack **a);
t_stack	*get_stack_before_bottom(t_stack *x);
void	rules_rr_bottom_top(t_stack **x);

void	push(t_stack **src, t_stack **dest);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);

void	swap(t_stack *x);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);

void	exit_error(t_stack **stack_a, t_stack **stack_b);
void	free_stack(t_stack **stack);

#endif
