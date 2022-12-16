/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaraujo <anaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:58:47 by marvin            #+#    #+#             */
/*   Updated: 2022/12/16 18:06:42 by anaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void    rules_s_swap_top(t_stack *x)
{
	int temp;

    if (x || x->next == NULL)
		return (0);
	temp = x->value;
	x->value = x->next->value;
	x->next->value = temp;
	temp = x->index;
	x->index = x->next->index;
	x->next->index = temp;
}

void    rules_sa_swap_top(t_stack *a)
{
    rules_s_swap_top(a);
    ft_putstr("sa\n");
}

void    rules_sb_swap_top(t_stack *b)
{
    rules_s_swap_top(b);
    ft_putstr("sb\n");
}

void    rules_ss_swap_top(t_stack *a, t_stack *b)
{
    rules_sa_swap_top(a);
    rules_sb_swap_top(b);
    ft_putstr("ss\n");
}