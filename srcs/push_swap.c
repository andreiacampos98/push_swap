/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:46:29 by marvin            #+#    #+#             */
/*   Updated: 2022/12/12 11:46:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void    push_swap(t_stack *a, t_stack *b, int stack_size)
{
	if (stack_size == 2 && !is_sorted(a))
		rules_sa_swap_top(a);
	else if (stack_size == 3)
	else if (stack_size > 3 && !is_sorted(a))

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