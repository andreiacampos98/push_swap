/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaraujo <anaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:12:58 by marvin            #+#    #+#             */
/*   Updated: 2022/12/17 10:17:34 by anaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

int	arg_is_number(char *argv)
{
	int	i;

	i = 0;
	if (ft_issign(argv[i]) && argv[i + 1] != '\0')
		i++;
	while (argv[i] && ft_isdigit(argv[i]))
		i++;
	if (argv[i] != '\0' && !ft_isdigit(argv[i]))
		return (0);
	return (1);
}

int	there_is_duplicates(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (argv[i] == argv[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	arg_is_zero(char *argv)
{
	int	i;

	i = 0;
	if (ft_issign(argv[i]))
		i++;
	while (argv[i] && argv[i] == '0')
		i++;
	if (argv[i] != '\0')
		return (0);
	return (1);
}

int	argv_is_corrected(char **argv)
{
	int	i;
	int	nbzeros;

	i = 0;
	nbzeros = 0;
	while (argv[i])
	{
		if (arg_is_number(argv[i]))
			return (0);
		nbzeros += arg_is_number(argv[i]);
		i++;
	}
	if (nbzeros > 1)
		return (0);
	if (there_is_duplicates(argv))
		return (0);
	return (1);
}
