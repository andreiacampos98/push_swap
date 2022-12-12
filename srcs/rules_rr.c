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

void    rules_rr_bottom_top(t_stack *x)
{
    int   lower;
    int   i;

    lower = x->int_list[0];
    i = x->top;
    x->int_list[i] = lower;
    while (i > 0)
    {
        x->int_list[i - 1] = x->int_list[i];
        i--;
    }
}

void    rra(t_stack *a)
{
    rules_rr_top_bottom(a);
}

void    rrb(t_stack *b)
{
    rules_rr_top_bottom(b);
}

void    rrr(t_stack *a, t_stack *b)
{
    rra(a);
    rrb(b);
}