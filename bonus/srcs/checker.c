/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaraujo <anaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 11:11:54 by anaraujo          #+#    #+#             */
/*   Updated: 2023/01/03 21:57:01 by anaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/checker.h"

int	is_sorted(t_stack *stack)
{
	while (stack->next != NULL)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	char		*instructions;

	stack_b = NULL;
	if (argc < 2)
		return (0);
	stack_a = fill_stack_values(argc, argv);
	printf("%i", stack_a->value);
	while (ft_get_next_line(0, &instructions))
	{
		if (execute(&stack_a, &stack_b, instructions))
		{
			return (-1);
		}
	}
	if (is_sorted(stack_a) == 1 && stack_b == NULL)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	return (0);
}
