/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaraujo <anaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:46:29 by marvin            #+#    #+#             */
/*   Updated: 2022/12/21 18:35:56 by anaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	push_swap(t_stack **a, t_stack **b, int stack_size)
{
	if (stack_size == 2 && !is_sorted(*a))
		rules_sa_swap_top(a);
	else if (stack_size == 3)
		three_argc_sort(a);
	else if (stack_size > 3 && !is_sorted(*a))
		sort(a, b);
}

int	is_sorted(t_stack *stack)
{
	while (stack->next != NULL)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	three_argc_sort(t_stack **a)
{
	int	highest;

	if (is_sorted(*a))
		return ;
	highest = find_highest_index(*a);
	if ((*a)->index == highest)
		ra(a);
	else if ((*a)->next->index == highest)
		rra(a);
	if ((*a)->index > (*a)->next->index)
		rules_sa_swap_top(a);
}

int	find_highest_index(t_stack *stack)
{
	int		index;

	index = stack->index;
	while (stack)
	{
		if (stack->index > index)
			index = stack->index;
		stack = stack->next;
	}
	return (index);
}

int	get_stack_size(t_stack *a)
{
	int	stack_size;

	stack_size = 1;
	if (!a)
		return (0);
	while (a->next != NULL)
	{
		a = a->next;
		stack_size++;
	}
	//printf("%i\n", stack_size);
	return (stack_size);
}
