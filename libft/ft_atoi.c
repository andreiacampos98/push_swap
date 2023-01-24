/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaraujo <anaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:37:22 by anaraujo          #+#    #+#             */
/*   Updated: 2023/01/24 23:00:54 by anaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

long int	ft_atoi(const char *str)
{
	int			i;
	long int	res;
	int			s;

	i = 0;
	res = 0;
	s = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = (str[i] - '0') + (res * 10);
		i++;
	}
	return (res * s);
}

/*int	main()
{
	printf("%d\n", ft_atoi("  -++--1200a4-"));
	printf("%d", atoi(" 		+-1200hhh"));
}*/
