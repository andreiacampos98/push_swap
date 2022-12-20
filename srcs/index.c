/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 09:55:33 by marvin            #+#    #+#             */
/*   Updated: 2022/12/20 09:55:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

t_stack	*fill_highest(t_stack *ptr, t_stack *highest)
{
	int		value;

	value = INT_MIN;
	while (ptr)
	{
		if (ptr->value == INT_MIN && ptr->index == 0)
			ptr->index = 1;
		if (ptr->value > value && a->index == 0)
		{
			value = ptr->value;
			highest = ptr;
			ptr = a;
		}
		else
			ptr = ptr->next;
	}
	return (highest);
}

void	assign_index(t_stack *a, int stack_size)
{
	t_stack	*highest;
	t_stack	*ptr;

	while (--stack_size > 0)
	{
		ptr = a;
		highest = NULL;
		fill_highest(ptr, highest);
		if (highest != NULL)
			highest->index = stack_size;
	}
}
