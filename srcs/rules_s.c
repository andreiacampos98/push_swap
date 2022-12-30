/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaraujo <anaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:58:47 by marvin            #+#    #+#             */
/*   Updated: 2022/12/30 08:57:39 by anaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	swap(t_stack *x)
{
	int	tmp;

	if (x == NULL || x->next == NULL)
		return ;
	tmp = x->value;
	x->value = x->next->value;
	x->next->value = tmp;
	tmp = x->index;
	x->index = x->next->index;
	x->next->index = tmp;
}


void	sa(t_stack **a)
{
	swap(*a);
	ft_putstr("sa\n");
}


void	sb(t_stack **b)
{
	swap(*b);
	ft_putstr("sb\n");
}


void	ss(t_stack **a, t_stack **b)
{
	swap(*a);
	swap(*b);
	ft_putstr("ss\n");
}