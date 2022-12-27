/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaraujo <anaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:12:58 by marvin            #+#    #+#             */
/*   Updated: 2022/12/21 17:12:22 by anaraujo         ###   ########.fr       */
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

int	nb_cmp(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = i;
	if (s1[i] == '+')
	{
		if (s2[j] != '+')
			i++;
	}
	else
	{
		if (s2[j] == '+')
			j++;
	}
	while (s1[i] != '\0' && s2[j] != '\0' && s1[i] == s2[j])
	{
		i++;
		j++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[j]);
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
			if (nb_cmp(argv[i], argv[j]) == 0)
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

int	argv_is_correct(char **argv)
{
	int	i;
	int	nbzeros;

	i = 1;
	nbzeros = 0;
	while (argv[i])
	{
		if (!arg_is_number(argv[i]))
		{
			//printf("is not a number");
			return (0);
		}
		nbzeros += arg_is_zero(argv[i]);
		i++;
	}
	if (nbzeros > 1)
	{
		//printf("Zeros");
		return (0);
	}
	if (there_is_duplicates(argv))
	{
		//printf("there is duplicates");
		return (0);
	}
	return (1);
}
