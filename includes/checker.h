/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaraujo <anaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 11:14:26 by anaraujo          #+#    #+#             */
/*   Updated: 2023/01/03 20:59:31 by anaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

#include "../libft/libft.h"

# define BUFF_SIZE	(1)
# define MAX_FD (1025)

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}	t_stack;

void		pa(t_stack **stack_a, t_stack **stack_b);
void		pb(t_stack **stack_a, t_stack **stack_b);
void		sa(t_stack **stack_a);
void		sb(t_stack **stack_b);
void		ss(t_stack **stack_a, t_stack **stack_b);
void		ra(t_stack **stack_a);
void		rb(t_stack **stack_b);
void		rr(t_stack **stack_a, t_stack **stack_b);
void		rrr(t_stack **stack_a, t_stack **stack_b);
void		rra(t_stack **stack_a);
void		rrb(t_stack **stack_b);

t_stack		*get_stack_bottom(t_stack *stack);
t_stack	*get_stack_before_bottom(t_stack *stack);

int	execute(t_stack **a, t_stack **b, char *rule);

void	read_instructions(t_stack **a, t_stack **b);

t_stack	*fill_stack_values(int ac, char **av);

void	free_stack(t_stack **stack);
void	exit_error(t_stack **stack_a, t_stack **stack_b);

int	ft_get_next_line(const int fd, char **line);

#endif
