/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:58:47 by marvin            #+#    #+#             */
/*   Updated: 2022/12/12 14:58:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void    rules_s_swap_top(t_stack *x)
{
    int i;
    int temp;

    i = x->top;
    temp = x->int_list[i];
    if (x->stack_size > 1)
    {
        x->int_list[i] = x->int_list[i - 1];
        x->int_list[i - 1] = temp;
    }
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