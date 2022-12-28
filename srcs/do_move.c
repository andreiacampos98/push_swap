/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaraujo <anaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 20:58:54 by marvin            #+#    #+#             */
/*   Updated: 2022/12/28 15:31:14 by anaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	do_rr_both(t_stack **a, t_stack **b, int *cost_a, int *cost_b)
{
	while (*cost_a < 0 && *cost_b < 0)
	{
		(*cost_a)++;
		(*cost_b)++;
		rrr(a, b);
	}
}

void	do_r_both(t_stack **a, t_stack **b, int *cost_a, int *cost_b)
{
	while (*cost_a > 0 && *cost_b > 0)
	{
		(*cost_a)--;
		(*cost_b)--;
		rr(a, b);
	}
}

void	do_r_a(t_stack **a, int *cost)
{
	while (*cost)
	{
		if (*cost > 0)
		{
			(*cost)--;
			ra(a);
		}
		else if (*cost < 0)
		{
			(*cost)++;
			rra(a);
		}
	}
}

void	do_r_b(t_stack **b, int *cost)
{
	while (*cost)
	{
		if (*cost > 0)
		{
			(*cost)--;
			rb(b);
		}
		else if (*cost < 0)
		{
			(*cost)++;
			rrb(b);
		}
	}
}