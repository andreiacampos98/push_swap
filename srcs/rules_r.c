/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_r.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaraujo <anaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 09:13:55 by marvin            #+#    #+#             */
/*   Updated: 2022/12/17 10:22:35 by anaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	rules_r_top_bottom(t_stack **x)
{
	t_stack	*tmp;
	t_stack	*y;

	tmp = *x;
	*x = (*x)->next;
	y = get_stack_bottom(*x);
	tmp->next = NULL;
	y->next = tmp;
}

void	ra(t_stack *a)
{
	rules_r_top_bottom(a);
	ft_putstr("ra\n");
}

void	rb(t_stack *b)
{
	rules_r_top_bottom(b);
	ft_putstr("rb\n");
}

void	rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
	ft_putstr("rr\n");
}
