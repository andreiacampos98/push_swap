/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:16:50 by marvin            #+#    #+#             */
/*   Updated: 2022/12/15 11:16:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

int main(int argc, char **argv)
{
    t_stack	*a;
	t_stack	*b;

	if(argc < 2)
		return (0);
	if (!argv_is_corrected(argv))
		exit_error(NULL, NULL);
	b = NULL;
	a = initialize(argc, argv);
	return (0);
}