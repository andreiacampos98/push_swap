/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaraujo <anaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 09:13:55 by marvin            #+#    #+#             */
/*   Updated: 2022/12/15 18:03:01 by anaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void    rules_rr_bottom_top(t_stack **x)
{
    t_stack *tmp;
    t_stack *y;
    t_stack *before_y;

    tmp = *x;
    y = get_stack_bottom(*x);
    *x = y;
    (*x)->next = tmp;
    before_y = get_stack_before_bottom(*x); 
    before_y->next = NULL;
}

t_stack *get_stack_before_bottom(t_stack *x)
{
    while (x && x->next && x->next->next != NULL)
        x = x->next;
    return (x);
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