/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnuno-ca <nnuno-ca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 11:22:57 by anaraujo          #+#    #+#             */
/*   Updated: 2023/01/04 21:43:27 by nnuno-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/checker.h"

int	execute(t_stack **a, t_stack **b, char *rule)
{
	if (ft_strncmp(rule, "sa\n", 3) == 0)
	{
		sa(a);
		return (0);
	}
	else if (ft_strncmp(rule, "sb\n", 3) == 0)
	{
		sb(b);
		return (0);
	}
	else if (ft_strncmp(rule, "ss\n", 3) == 0)
	{
		ss(a, b);
		return (0);
	}
	else if (ft_strncmp(rule, "pa\n", 3) == 0)
	{
		pa(a, b);
		return (0);
	}
	else if (ft_strncmp(rule, "pb\n", 3) == 0)
	{
		pb(a, b);
		return (0);
	}
	else if (ft_strncmp(rule, "ra\n", 3) == 0)
	{
		ra(a);
		return (0);
	}
	else if (ft_strncmp(rule, "rb\n", 3) == 0)
	{
		rb(b);
		return (0);
	}
	else if (ft_strncmp(rule, "rr\n", 3) == 0)
	{
		rr(a, b);
		return (0);
	}
	else if (ft_strncmp(rule, "rra\n", 4) == 0)
	{
		rra(a);
		return (0);
	}
	else if (ft_strncmp(rule, "rrb\n", 4) == 0)
	{
		rrb(b);
		return (0);
	}
	else if (ft_strncmp(rule, "rrr\n", 4) == 0)
	{
		rrr(a, b);
		return (0);
	}
	return (1);
}

void	read_instructions(t_stack **a, t_stack **b)
{
	char	*instruction;
	(void)a;
	(void)b;

	while (1)
	{
		instruction = get_next_line(STDIN_FILENO);
		if (instruction == NULL)
			break ;
		execute(a, b, instruction);
		free(instruction);
	}
}
