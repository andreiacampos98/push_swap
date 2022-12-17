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

int	