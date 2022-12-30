/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaraujo <anaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 11:22:57 by anaraujo          #+#    #+#             */
/*   Updated: 2022/12/30 14:53:43 by anaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/checker.h"

void	execute(t_stack **a, t_stack **b, char *rule)
{
	if (ft_strncmp(rule, "sa\n", 3) == 0)
		sa(a);
	else if (ft_strncmp(rule, "sb\n", 3) == 0)
		sb(b);
	else if (ft_strncmp(rule, "ss\n", 3) == 0)
		ss(a, b);
	else if (ft_strncmp(rule, "pa\n", 3) == 0)
		pa(a, b);
	else if (ft_strncmp(rule, "pb\n", 3) == 0)
		pb(a, b);
	else if (ft_strncmp(rule, "ra\n", 3) == 0)
		ra(a);
	else if (ft_strncmp(rule, "rb\n", 3) == 0)
		rb(b);
	else if (ft_strncmp(rule, "rr\n", 3) == 0)
		rr(a, b);
	else if (ft_strncmp(rule, "rra\n", 4) == 0)
		rra(a);
	else if (ft_strncmp(rule, "rrb\n", 4) == 0)
		rrb(b);
	else if (ft_strncmp(rule, "rrr\n", 4) == 0)
		rrr(a, b);
}

void	read(t_stack **a, t_stack **b)
{
	char	*rule;

	while (1)
	{
		rule =  get_next_line(STDIN_FILENO);
		execute(a, b, rule);
	}
}