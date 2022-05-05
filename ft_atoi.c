/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:45:45 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/19 11:28:33 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The function int atoi(const char *str) converts the string argument str to 
an integer (type int). 
[First indentation should be prooved, then the sign, after that - the numbers]
This function returns the converted integral number as an int value. 
If no valid conversion could be performed, it returns zero. */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == '\r' || str[i] == '\t' || str[i] == ' '
		|| str[i] == '\f' || str[i] == '\v' || str[i] == '\n')
		i++;
	if (str[i] == '-')
	{
		sign *= (-1);
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] <= '9' && str[i] >= '0')
	{
		res = (str[i] - '0') + (res * 10);
		i++;
	}
	return (res * sign);
}
