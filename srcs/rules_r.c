/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_r.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaraujo <anaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 09:13:55 by marvin            #+#    #+#             */
/*   Updated: 2022/12/30 09:06:11 by anaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	rotate(t_stack **x)
{
	t_stack	*tmp;
	t_stack	*tail;

	tmp = *x;
	*x = (*x)->next;
	tail = get_stack_bottom(*x);
	tmp->next = NULL;
	tail->next = tmp;
}

void	ra(t_stack **a)
{
	rotate(a);
	ft_putstr("ra\n");
}

void	rb(t_stack **b)
{
	rotate(b);
	ft_putstr("rb\n");
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	ft_putstr("rr\n");
}
