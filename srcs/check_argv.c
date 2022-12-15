/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:12:58 by marvin            #+#    #+#             */
/*   Updated: 2022/12/15 11:12:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

int arg_is_number(char *argv)
{
    int i;

    i = 0;
    if (ft_issign(argv[i]) && argv[i + 1] != '\0')
        i++;
    while (argv[i] && ft_isdigit(argv[i]))
        i++;
    if (argv[i] != '\0' && !ft_isdigit(argv[i]))
        return (0);
    return (1);    
}

int there_is_duplicates(char *argv)
{

}

int arg_is_zero(char *argv)
{

}

int argv_is_corrected(char **argv)
{

}