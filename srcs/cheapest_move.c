/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheapest_move.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaraujo <anaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 20:04:19 by anaraujo          #+#    #+#             */
/*   Updated: 2022/12/28 21:32:53 by anaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

int nb_abs(int cost_x)
{
	if (cost_x < 0)
		cost_x *= (-1);
	return(cost_x);
}

void     do_move(t_stack **a, t_stack **b, int cost_a, int cost_b)
{
	if (cost_a < 0 && cost_b < 0)
		do_rr_both(a, b, &cost_a, &cost_b);
	else if (cost_a > 0 && cost_b > 0)
		do_r_both(a, b, &cost_a, &cost_b);
	do_r_a(a, &cost_a);
	do_r_b(b, &cost_b);
	rules_pa_topb_to_topa(a, b);
}

void	do_cheapest_move(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	int		cheapest;
	int		cost_a;
	int		cost_b;

	tmp = *b;
	cheapest = INT_MAX;
	//printf("eu sou muito burra");
	while (tmp)
	{
		if ((nb_abs(tmp->cost_a) + nb_abs(tmp->cost_b)) < nb_abs(cheapest))
		{
			cheapest = nb_abs(tmp->cost_a) + nb_abs(tmp->cost_b);
			cost_a = tmp->cost_a;
			cost_b = tmp->cost_b;
		}
		tmp = tmp->next;
	}
	//printf(" cost a %i\n", cost_a);
	//printf("cost b %i\n", cost_b);	
	do_move(a, b, cost_a, cost_b);
}