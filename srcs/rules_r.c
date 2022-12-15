/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 09:13:55 by marvin            #+#    #+#             */
/*   Updated: 2022/12/12 09:13:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void    rules_r_top_bottom(t_stack *x)
{
    int   upper;
    int   i;

    upper = x->int_list[x->top];
    i = x->top;
    while (i > 0)
    {
        x->int_list[i] = x->int_list[i -1];
        i--;
    }
    x->int_list[0] = upper;
}

void    ra(t_stack *a)
{
    rules_r_top_bottom(a);
    ft_putstr("ra\n");
}

void    rb(t_stack *b)
{
    rules_r_top_bottom(b);
    ft_putstr("rb\n");
}

void    rr(t_stack *a, t_stack *b)
{
    ra(a);
    rb(b);
    ft_putstr("rr\n");
}