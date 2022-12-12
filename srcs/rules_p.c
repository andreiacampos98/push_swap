/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:26:26 by marvin            #+#    #+#             */
/*   Updated: 2022/12/12 15:26:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	rules_pa_topb_to_topa(t_stack *a, t_stack *b)
{
	int	i;

	i = a->top + 1;
	a->int_list[i] = b->int_list[b->top];
	b->top--;
}

void	rules_pb_topa_to_topb(t_stack *b, t_stack *a)
{
	int	i;

	i = b->top + 1;
	b->int_list[i] = a->int_list[a->top];
	a->top--;
}