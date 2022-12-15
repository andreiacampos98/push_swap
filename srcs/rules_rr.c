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

void    rules_rr_bottom_top(t_stack **x)
{
    t_stack *tmp;
    t_stack *y;
    t_stack *before_y;

    tmp = *x;
    *y = get_stack_bottom(*x);
    *x = *y;
    (*x)->next = tmp;
    before_y = get_stack_before_bottom(*stack); 
    before_y->next = NULL;
}

void    rra(t_stack *a)
{
    rules_rr_top_bottom(a);
    ft_putstr("rra\n");
}

void    rrb(t_stack *b)
{
    rules_rr_top_bottom(b);
    ft_putstr("rrb\n");
}

void    rrr(t_stack *a, t_stack *b)
{
    rra(a);
    rrb(b);
    ft_putstr("rrr\n");
}