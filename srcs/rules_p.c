/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaraujo <anaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:26:26 by marvin            #+#    #+#             */
/*   Updated: 2022/12/17 10:16:22 by anaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	rules_pa_topb_to_topa(t_stack **a, t_stack **b)
{
	t_stack	*temp;

	temp = (*a)->next;
	(*a)->next = *b;
	*b = *a;
	*a = temp;
	ft_putstr("pa\n");
}

void	rules_pb_topa_to_topb(t_stack **b, t_stack **a)
{
	t_stack	*temp;

	temp = (*b)->next;
	(*b)->next = *a;
	*a = *b;
	*b = temp;
	ft_putstr("pb\n");
}
