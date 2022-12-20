/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:43:19 by marvin            #+#    #+#             */
/*   Updated: 2022/12/20 10:43:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	push_to_b(t_stack **a, t_stack **b)
{
	int	stack_size;
	int	i;
	int	pushed;

	stack_size = get_stack_size(a);
	i = 0;
	pushed = 0;
	while (stack_size > 6 && i < stack_size && pushed < stack_size / 2)
	{
		if ((*a)->index <= stack_size / 2)
		{
			rules_pb_topa_to_topb(b, a);
			pushed++;
		}
		else
			ra(a);
		i++;
	}
	while (stack_size - pushed > 3)
	{
		rules_pb_topa_to_topb(b, a);
		pushed++;
	}
}

void	sort_stack_a(t_stack **a)
{
	int	stack_size;
	int	lowest;

	stack_size = get_stack_size(a);
	lowest = get_position_for_lowest_index(a);
	if (lowest > stack_size / 2)
	{
		while (lowest < stack_size)
		{
			rra(a);
			lowest++;
		}
	}
	else
	{
		while (lowest > 0)
		{
			ra(a);
			lowest--;
		}
	}
}

t_stack	sort(t_stack **a, t_stack **b)
{
	push_to_b(a, b);
	three_argc_sort(a, b);
	while (*b)
	{
		get_target_position(a, b);
		get_cost(a, b);
		do_cheapest_move(a, b);
	}
	if (!is_sorted(a))
		sort_stack_a(a);
}