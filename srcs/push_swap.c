/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaraujo <anaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:46:29 by marvin            #+#    #+#             */
/*   Updated: 2022/12/16 22:36:01 by anaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void    push_swap(t_stack *a, t_stack *b, int stack_size)
{
	if (stack_size == 2 && !is_sorted(a))
		rules_sa_swap_top(a);
	else if (stack_size == 3)
		three_argc_sort(a);
	else if (stack_size > 3 && !is_sorted(a))
		sort();
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

void	three_argc_sort(t_stack *a)
{
	if(is_sorted(a))
		return;
	if (a->index == 3)
		ra(a);
	else if (a->next->index == 3)
		rra(a);
	if (a->index > a->next->index)
		sa(a);
}