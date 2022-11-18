/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:39:33 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/19 11:22:24 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Applies the function ’f’ on each character of the string passed as argument,
passing its index as first argument. Each character is passed by address to ’f’ 
to be modified if necessary. 
No return value. */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, (s + i));
		i++;
	}
}
