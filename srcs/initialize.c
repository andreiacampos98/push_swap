/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaraujo <anaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:27:35 by marvin            #+#    #+#             */
/*   Updated: 2022/12/30 09:10:07 by anaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

t_stack	*initialize(int argc, char **argv)
{
	t_stack		*a;
	long int	nb;
	int			i;

	i = 1;
	nb = 0;
	a = NULL;
	while (i < argc)
	{
		nb = ft_atoi(argv[i]);
		if (nb > INT_MAX || nb < INT_MIN)
			exit_error(&a, NULL);
		if (i == 1)
			a = stack_new((int)nb);
		else
			stack_add_bottom(&a, stack_new((int)nb));
		i++;
	}
	return (a);
}

t_stack	*stack_new(int nb)
{
	t_stack	*new;

	new = malloc(sizeof * new);
	if (!new)
		return (NULL);
	new->value = nb;
	new->index = 0;
	new->position = -1;
	new->target_position = -1;
	new->cost_a = -1;
	new->cost_b = -1;
	new->next = NULL;
	return (new);
}

void	stack_add_bottom(t_stack **x, t_stack *new)
{
	t_stack	*tail;

	if (!new)
		return ;
	if (!*x)
	{
		*x = new;
		return ;
	}
	tail = get_stack_bottom(*x);
	tail->next = new;
}

t_stack	*get_stack_bottom(t_stack *x)
{
	while (x && x->next != NULL)
		x = x->next;
	return (x);
}
