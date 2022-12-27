/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaraujo <anaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:16:50 by marvin            #+#    #+#             */
/*   Updated: 2022/12/21 18:40:01 by anaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		stack_size;

	if (argc < 2)
		return (0);
	if (!argv_is_correct(argv))
		exit_error(NULL, NULL);
	b = NULL;
	a = initialize(argc, argv);
	/*while (a->value != '\0')
	{
		printf("%i\n", a->value);
		a = a->next;
	}*/
	stack_size = get_stack_size(a);
	printf("%i\n", stack_size);
	assign_index(a, stack_size);
	/*while (a->value != '\0')
	{
		printf("%i\n", a->index);
		a = a->next;
	}*/
	push_swap(&a, &b, stack_size);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
