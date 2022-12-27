/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaraujo <anaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 11:35:44 by anaraujo          #+#    #+#             */
/*   Updated: 2022/12/17 12:04:34 by anaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	define_position(t_stack **x)
{
	t_stack	*tmp;
	int		i;

	tmp = *x;
	i = 0;
	while (tmp)
	{
		tmp->position = i;
		tmp = tmp->next;
		i++;
	}
}

int	get_position_for_lowest_index(t_stack **x)
{
	int		lowest_index;
	int		position;
	t_stack	*tmp;

	lowest_index = INT_MAX;
	tmp = *x;
	define_position(x);
	position = tmp->position;
	while (tmp)
	{
		if (lowest_index > tmp->index)
		{
			lowest_index = tmp->index;
			position = tmp->position;
		}
		tmp = tmp->next;
	}
	return (position);
}

int	get_target(t_stack **a, int b_idx,int target_idx, int target_position)
{
	t_stack	*tmp_a;

	tmp_a = *a;
	while (tmp_a)
	{
		if (tmp_a->index > b_idx && tmp_a->index < target_idx)
		{
			target_idx = tmp_a->index;
			target_position = tmp_a->position;
		}
		tmp_a = tmp_a->next;
	}
	if (target_idx != INT_MAX)
		return (target_position);
	tmp_a = *a;
	while (tmp_a)
	{
		if (tmp_a->index < target_idx)
		{
			target_idx = tmp_a->index;
			target_position = tmp_a->position;
		}
		tmp_a = tmp_a->next;
	}
	return (target_position);
}

void	get_target_position(t_stack **a, t_stack **b)
{
	t_stack	*tmp_b;
	int		target_position;

	tmp_b = *b;
	define_position(a);
	define_position(b);
	target_position = 0;
	while (tmp_b)
	{
		target_position = get_target(a, tmp_b->index, INT_MAX, target_position);
		tmp_b->target_position = target_position;
		tmp_b = tmp_b->next;
	}
}

void	get_cost(t_stack **a, t_stack **b)
{
	t_stack	*tmp_a;
	t_stack	*tmp_b;
	int		size_a;
	int		size_b;

	tmp_a = *a;
	tmp_b = *b;
	size_a = get_stack_size(tmp_a);
	size_b = get_stack_size(tmp_b);
	while (tmp_b)
	{
		tmp_b->cost_b = tmp_b->position;
		if (tmp_b->position > size_b / 2)
			tmp_b->cost_b = (size_b - tmp_b->position) * -1;
		tmp_b->cost_a = tmp_b->target_position;
		if (tmp_b->target_position > size_a / 2)
			tmp_b->cost_a = (size_a - tmp_b->target_position) * -1;
		tmp_b = tmp_b->next;
	}
}