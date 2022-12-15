/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:27:35 by marvin            #+#    #+#             */
/*   Updated: 2022/12/14 15:27:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

t_stack    *initialize(int argc, char **argv)
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
	return(a);
}

t_stack	*stack_new(int nb)
{
	t_stack	*new;

	new = malloc(sizeof * new);
	if (!new)
		return (NULL);
	new->value = nb;
	new->index = 0;
	new->next = NULL;
	return (new);
}

void	stack_add_bottom(t_stack **stack, t_stack *new)
{
	t_stack	*tail;

	if (!new)
		return ;
	if (!*stack)
	{
		*stack = new;
		return ;
	}
	tail = get_stack_bottom(*stack);
	tail->next = new;
}

t_stack	*get_stack_bottom(t_stack *stack)
{
	while (stack && stack->next != NULL)
		stack = stack->next;
	return (stack);
}

void	assign_index(t_stack *a)
{

}